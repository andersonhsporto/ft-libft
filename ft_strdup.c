/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhigo-s <anhigo-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 01:15:37 by anhigo-s          #+#    #+#             */
/*   Updated: 2021/08/06 01:09:00 by anhigo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s1)
{
	char	*string;

	string = malloc(ft_strlen(s1) + 1);
	if (string == 0)
	{
		return (0);
	}
	else
	{
		ft_memcpy (string, s1, ft_strlen (s1) + 1);
	}
	return (string);
}
