/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhigo-s <anhigo-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 01:03:28 by anhigo-s          #+#    #+#             */
/*   Updated: 2022/05/02 12:10:13 by anhigo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_overflow(size_t count, size_t size);

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

static int	is_overflow(size_t count, size_t size)
{
	size_t	result;

	result = count * size;
	if (count == result / size)
	{
		return (0);
	}
	else
	{
		errno = ENOMEM;
		return (1);
	}
}
