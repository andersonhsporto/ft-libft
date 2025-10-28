/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhigo-s <anhigo-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 20:16:08 by anhigo-s          #+#    #+#             */
/*   Updated: 2023/02/23 17:38:07 by anhigo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*string;
	size_t	i;

	if (!s || !f)
		return (NULL);
	string = ft_strdup(s);
	if (!string)
		return (NULL);
	i = 0;
	while (string[i] != '\0')
	{
		string[i] = f(i, string[i]);
		i++;
	}
	return (string);
}
