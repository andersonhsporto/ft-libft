/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhigo-s <anhigo-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 13:23:05 by anhigo-s          #+#    #+#             */
/*   Updated: 2023/02/23 17:27:14 by anhigo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*pdest;
	char	*psrc;

	if (!dest && !src)
		return (NULL);
	pdest = (char *)dest;
	psrc = (char *)src;
	while (n)
	{
		pdest[n - 1] = psrc[n - 1];
		n--;
	}
	return (pdest);
}
