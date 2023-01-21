/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhigo-s <anhigo-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 18:43:54 by anhigo-s          #+#    #+#             */
/*   Updated: 2023/01/21 00:44:09 by anhigo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_count(char const *string, char c)
{
	size_t	check;
	size_t	number_of_words;

	check = 1;
	number_of_words = 0;
	while (*string)
	{
		if (*string == c)
			check = 1;
		else if (check == 1)
		{
			check = 0;
			number_of_words++;
		}
		string++;
	}
	return (number_of_words);
}

static size_t	ft_wordlen(char const *string, char c)
{
	size_t	i;

	i = 0;
	while ((string[i] != '\0') && string[i] != c)
	{
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s == 0)
		return (0);
	array = malloc((ft_count(s, c) + 1) * sizeof(char *));
	if (array == 0)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			array[j] = ft_substr(s, i, ft_wordlen(&s[i], c));
			i = (i + ft_wordlen(&s[i], c) - 1);
			j++;
		}
		i++;
	}
	array[j] = 0;
	return (array);
}
