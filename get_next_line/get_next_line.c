/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhigo-s <anhigo-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 00:39:01 by anhigo-s          #+#    #+#             */
/*   Updated: 2023/02/23 17:39:54 by anhigo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*gnl_strjoinfree(char *s1, char *s2)
{
	char	*new_string;
	size_t	i;
	size_t	a;

	new_string = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	i = 0;
	a = 0;
	if (!new_string)
		return (NULL);
	while (s1[i] != '\0')
	{
		new_string[i] = s1[i];
		i++;
	}
	while (s2[a] != '\0')
	{
		new_string[i + a] = s2[a];
		a++;
	}
	new_string[i + a] = '\0';
	free(s1);
	s1 = NULL;
	return (new_string);
}

static char	*get_line(char **buffer_backup, size_t i)
{
	char	*line;
	char	*temp;

	while (((*buffer_backup)[i] != '\n') && ((*buffer_backup)[i] != '\0'))
		i++;
	if ((*buffer_backup)[i] == 0)
	{
		line = ft_strdup(*buffer_backup);
		free(*buffer_backup);
		*buffer_backup = NULL;
	}
	else
	{
		line = ft_substr(*buffer_backup, 0, i + 1);
		temp = ft_strdup(&(*buffer_backup)[i + 1]);
		free(*buffer_backup);
		*buffer_backup = NULL;
		if (*temp)
			*buffer_backup = ft_strdup(temp);
		free(temp);
		temp = NULL;
	}
	return (line);
}

static char	*get_next(int fd, ssize_t bytes_read, char *temp_buff)
{
	static char	*s_buffer;
	char		*temp;

	while (bytes_read > 0)
	{
		temp_buff[bytes_read] = '\0';
		if (s_buffer == 0)
			s_buffer = ft_strdup("");
		temp = ft_strdup(s_buffer);
		free(s_buffer);
		s_buffer = gnl_strjoinfree(temp, temp_buff);
		if (ft_strchr(s_buffer, '\n'))
			break ;
		bytes_read = read(fd, temp_buff, BUFFER_SIZE);
	}
	if (bytes_read == 0 && s_buffer == 0)
		return (NULL);
	return (get_line(&s_buffer, 0));
}

char	*get_next_line(int fd)
{
	char		temp_buff[BUFFER_SIZE + 1];
	ssize_t		bytes_read;

	if ((fd < 0) || (BUFFER_SIZE < 1) || (read(fd, temp_buff, 0) < 0))
		return (NULL);
	bytes_read = read(fd, temp_buff, BUFFER_SIZE);
	if (bytes_read < 0)
		return (NULL);
	return (get_next(fd, bytes_read, temp_buff));
}
