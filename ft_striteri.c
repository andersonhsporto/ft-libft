/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhigo-s <anhigo-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 23:18:29 by anhigo-s          #+#    #+#             */
/*   Updated: 2023/02/23 17:16:04 by anhigo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	index;

	if (s == 0 || f == 0)
		return ;
	index = ft_strlen(s);
	while (index)
	{
		f(index - 1, &s[index - 1]);
		index--;
	}
}
