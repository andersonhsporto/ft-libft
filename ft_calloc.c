/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhigo-s <anhigo-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 01:03:28 by anhigo-s          #+#    #+#             */
/*   Updated: 2022/04/30 14:33:36 by anhigo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_overflow(size_t a, size_t b);

void	*ft_calloc(size_t count, size_t size)
{
	void	*pointer;

	if (count == 0 || size == 0)
	{
		return (NULL);
	}
	if (is_overflow(count, size))
	{
		return (NULL);
	}
	pointer = malloc(count * size);
	if (pointer == 0)
	{
		return (NULL);
	}
	return (ft_memset(pointer, 0, (count * size)));
}

static int	is_overflow(size_t a, size_t b)
{
	size_t	result;

	result = a * b;
	if (a == result / b)
	{
		return (0);
	}
	else
	{
		errno = ENOMEM;
		return (1);
	}
}
