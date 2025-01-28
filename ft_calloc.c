/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhigo-s <anhigo-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 01:03:28 by anhigo-s          #+#    #+#             */
/*   Updated: 2025/01/28 00:48:48 by anhigo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_overflow(size_t count, size_t size)
{
	if (count != 0 && size > ((size_t)-1) / count)
	{
		errno = ENOMEM;
		return (1);
	}
	return (0);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*pointer;

	if (count == 0 || size == 0)
	{
		pointer = malloc(1);
		if (pointer)
			ft_memset(pointer, 0, 1);
		return (pointer);
	}
	if (is_overflow(count, size))
	{
		return (NULL);
	}
	pointer = malloc(count * size);
	if (!pointer)
		return (NULL);
	ft_memset(pointer, 0, (count * size));
	return (pointer);
}
