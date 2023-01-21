/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhigo-s <anhigo-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 16:25:56 by anhigo-s          #+#    #+#             */
/*   Updated: 2023/01/21 01:27:45 by anhigo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	check(const char *s, unsigned int start, size_t len);
static char		*start_out_of_bounds(void);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;

	if (s == 0)
		return (0);
	else if (start > ft_strlen(s))
		return (start_out_of_bounds());
	substr = malloc((check(s, start, len)) * sizeof(char));
	if (substr == 0)
		return (0);
	i = 0;
	while ((len--) && (s[start + i] != '\0') && ((start + i) < ft_strlen(s)))
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

static size_t	check(const char *s, unsigned int start, size_t len)
{
	const size_t	s_len = ft_strlen(s);
	size_t			size;

	size = 0;
	if (start > s_len)
	{
		size = 1;
	}
	else if (start + len > s_len)
	{
		size = s_len - start + 1;
	}
	else
	{
		size = len + 1;
	}
	return (size);
}

static char	*start_out_of_bounds(void)
{
	char	*substr;

	substr = malloc(sizeof(char));
	if (substr == 0)
		return (0);
	substr[0] = '\0';
	return (substr);
}
