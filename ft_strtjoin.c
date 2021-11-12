/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhigo-s <anhigo-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 02:36:45 by anhigo-s          #+#    #+#             */
/*   Updated: 2021/11/12 03:00:46 by anhigo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtjoin(char *string0, char *string1, char *string2)
{
	char	*str;
	char	*temp_string;

	if (!string0 | !string1 | !string2)
		return (NULL);
	temp_string = ft_strjoin(string0, string1);
	str = ft_strjoin(temp_string, string2);
	free(temp_string);
	temp_string = NULL;
	return (str);
}
