/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhigo-s <anhigo-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 22:39:39 by anhigo-s          #+#    #+#             */
/*   Updated: 2023/02/23 17:03:23 by anhigo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*mem1;
	unsigned char	*mem2;

	mem1 = (unsigned char *)s1;
	mem2 = (unsigned char *)s2;
	if (s1 == 0 && s2 == 0)
		return (0);
	while (n)
	{
		if (*mem1 != *mem2)
			return (*mem1 - *mem2);
		mem1++;
		mem2++;
		n--;
	}
	return (0);
}
