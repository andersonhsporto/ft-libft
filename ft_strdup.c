/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhigo-s <anhigo-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 01:15:37 by anhigo-s          #+#    #+#             */
/*   Updated: 2023/02/23 17:15:20 by anhigo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*string;
	size_t	size;

	if (!s1)
		return (NULL);
	string = malloc(ft_strlen(s1) + 1);
	if (!string)
		return (NULL);
	size = ft_strlen(s1);
	ft_memcpy(string, s1, size);
	string[size] = '\0';
	return (string);
}
