/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:09:06 by acandela          #+#    #+#             */
/*   Updated: 2023/10/26 19:02:17 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*ft_free(char *str)
{
	free(str);
	str = NULL;
	return (NULL);
}

static char	*ft_salto(char *next_line)
{
	char	*salto;
	int		i;

	i = 0;
	while (next_line[i] != '\0' && next_line[i] != '\n')
		i++;
	salto = malloc(sizeof(char) * (i + 2));
	i = 0;
	while (next_line[i] != '\0' && next_line[i] != '\n')
	{
		salto[i] = next_line[i];
		i++;
	}
	if (next_line[i] == '\n')
	{
		salto[i] = '\n';
		i++;
	}
	salto[i] = '\0';
	return (salto);
}

static char	*ft_clean_line(char *next_line)
{
	char	*new;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (next_line[i] != '\n' && next_line[i] != '\0')
		i++;
	new = malloc(sizeof(char) * (ft_strlen(next_line) - i + 1));
	if (next_line[i] == '\0' || new == NULL)
	{
		free(next_line);
		return (ft_free(new));
	}
	i++;
	while (next_line[i] != '\0')
		new[j++] = next_line[i++];
	new[j] = '\0';
	ft_free(next_line);
	return (new);
}
char	*get_next_line(int fd)
{
	static char	*next_line = NULL;
	char		*line;
	char		*buffer;
	int			bytes_read;

	if (fd < 0 || read(fd, &next_line, 0) < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = malloc(BUFFER_SIZE + 1);
	if (buffer == NULL)
		return (ft_free(next_line));
		
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	buffer[bytes_read] = '\0';
	if (next_line == NULL && bytes_read == 0)
		return (ft_free(buffer));
	while (bytes_read > 0)
	{
		next_line = ft_strjoin(next_line, buffer);
		if (ft_strchr(buffer, '\n') != NULL)
			break ;
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		buffer[bytes_read] = '\0';
	}
	ft_free(buffer);
	if (bytes_read == -1)
		return (ft_free(next_line));
	line = ft_salto(next_line);
	next_line = ft_clean_line(next_line);
	return (line);
}
