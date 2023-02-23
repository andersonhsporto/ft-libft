/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhigo-s <anhigo-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 15:30:12 by anhigo-s          #+#    #+#             */
/*   Updated: 2023/02/23 17:37:23 by anhigo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *list)
{
	if (list)
	{
		while (list->next != NULL)
		{
			list = list->next;
		}
		return (list);
	}
	return (NULL);
}
