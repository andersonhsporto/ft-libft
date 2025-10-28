/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhigo-s <anhigo-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 14:51:56 by anhigo-s          #+#    #+#             */
/*   Updated: 2023/02/23 16:49:00 by anhigo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	set_magic(unsigned long *himagic, unsigned long *lomagic)
{
	*himagic = 0x80808080L;
	*lomagic = 0x01010101L;
	if (sizeof(unsigned long) > 4)
	{
		*himagic = ((*himagic << 16) << 16) | *himagic;
		*lomagic = ((*lomagic << 16) << 16) | *lomagic;
	}
}

static const unsigned char	*align_ptr(const unsigned char *s)
{
	while ((uintptr_t)s % sizeof(unsigned long) != 0)
	{
		if (*s == '\0')
			return (s);
		s++;
	}
	return (s);
}

static int	has_zero_byte(unsigned long w, unsigned long hi, unsigned long lo)
{
	return (((w - lo) & ~w & hi) != 0);
}

static size_t	find_zero(const unsigned char *p, const unsigned char *base)
{
	size_t	i;

	i = 0;
	while (i < sizeof(unsigned long))
	{
		if (p[i] == '\0')
			return (p + i - base);
		i++;
	}
	return (0);
}

size_t	ft_strlen(const char *s)
{
	const unsigned char		*ptr;
	const unsigned long		*lp;
	unsigned long			hi;
	unsigned long			lo;
	unsigned long			word;

	if (!s)
		return (0);
	ptr = align_ptr((const unsigned char *)s);
	lp = (const unsigned long *)ptr;
	set_magic(&hi, &lo);
	while (1)
	{
		word = *lp++;
		if (has_zero_byte(word, hi, lo))
			return (find_zero((const unsigned char *)(lp - 1),
				(const unsigned char *)s));
	}
}
