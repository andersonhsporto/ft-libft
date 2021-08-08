/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhigo-s <anhigo-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 02:26:54 by anhigo-s          #+#    #+#             */
/*   Updated: 2021/08/08 02:27:47 by anhigo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *head, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newList;
	t_list	*tail;

	newList = 0;
	tail = 0;
	while (head)
	{
		if (newList == 0)
		{
			newList = (t_list *)malloc(sizeof(t_list));
			newList->content = ((*f)(head->content));
			newList->next = 0;
			tail = newList;
		}
		else
		{
			tail->next = (t_list *)malloc(sizeof(t_list));
			tail = tail->next;
			tail->content = ((*f)(head->content));
			tail->next = 0;
		}
		head = head->next;
	}
	return (newList);
}
