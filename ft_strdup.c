/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhigo-s <anhigo-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 01:15:37 by anhigo-s          #+#    #+#             */
/*   Updated: 2023/09/09 17:42:41 by anhigo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*string;

	if (!s1)
		return (NULL);
	string = malloc(ft_strlen(s1) + 1);
	if (string)
	{
		return (ft_strcpy(string, s1));
	}
	return (NULL);
}
