/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhigo-s <anhigo-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 17:13:55 by anhigo-s          #+#    #+#             */
/*   Updated: 2021/08/01 17:13:56 by anhigo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*nstring;
	size_t	i;
	size_t	a;

	nstring = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	i = 0;
	a = 0;
	if (nstring == 0)
		return (0);
	while (s1[i] != '\0')
	{
		nstring[i] = s1[i];
		i++;
	}
	while (s2[a] != '\0')
	{
		nstring[i + a] = s2[a];
		a++;
	}
	nstring[i + a] = '\0';
	return (nstring);
}
