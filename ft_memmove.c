/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhigo-s <anhigo-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 13:32:00 by anhigo-s          #+#    #+#             */
/*   Updated: 2021/07/29 17:00:16 by anhigo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d0;
	unsigned char	*s0;

	d0 = dst;
	s0 = (unsigned char *)src;
	if (d0 <= s0)
		return (ft_memcpy (dst, src, len));
	while (len--)
	{
		d0[len] = s0[len];
	}
	return (d0);
}
