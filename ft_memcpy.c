/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhigo-s <anhigo-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 13:23:05 by anhigo-s          #+#    #+#             */
/*   Updated: 2023/09/09 17:37:27 by anhigo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*psrc = (const unsigned char *)src;
	unsigned char		*pdest;

	if (!dest && !src)
		return (NULL);
	pdest = (unsigned char *)dest;
	while (n--)
		*pdest++ = *psrc++;
	return (dest);
}
