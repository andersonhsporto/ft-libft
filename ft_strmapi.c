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
	size_t	len;

	if (s == 0)
		return (NULL);
	len = ft_strlen(s);
	string = (char *)malloc(len + 1);
	if (!string)
		return (NULL);
	string[len] = '\0';
	while (len)
	{
		string[len - 1] = f(len - 1, s[len - 1]);
		len--;
	}
	return (string);
}
