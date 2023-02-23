/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhigo-s <anhigo-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 18:50:13 by anhigo-s          #+#    #+#             */
/*   Updated: 2023/02/23 17:37:32 by anhigo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*mem;

	mem = (unsigned char *)s;
	while (n)
	{
		if (*mem == (unsigned char)c)
			return (mem);
		mem++;
		n--;
	}
	return (NULL);
}
