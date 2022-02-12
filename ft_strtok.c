/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhigo-s <anhigo-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 00:34:23 by anhigo-s          #+#    #+#             */
/*   Updated: 2022/02/12 00:43:11 by anhigo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	strlen_char(const char *string, char c);

char	*ft_strtok(char *input, char d)
{
	char	*result;
	int		i;

	if (input == NULL)
		return (NULL);
	result = (char *)malloc(sizeof(char) * strlen_char(input, d));
	i = strlen_char(input, d) - 1;
	while (i > -1)
	{
		result[i] = input[i];
		i--;
	}
	result[strlen_char(input, d)] = '\0';
	return (result);
}

static int	strlen_char(const char *string, char c)
{
	int	counter;

	counter = 0;
	while (string[counter] != c)
	{
		counter++;
	}
	return (counter);
}
