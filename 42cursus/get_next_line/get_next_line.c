/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:09:06 by acandela          #+#    #+#             */
/*   Updated: 2023/11/02 13:35:24 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_clean_line(char *text_storage)
{
	char	*new;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (text_storage[i] != '\n' && text_storage[i] != '\0')
		i++;
	if (text_storage[i] == '\0' || text_storage[i + 1] == '\0')
		return (free(text_storage), NULL);
	new = malloc(sizeof(char) * (ft_strlen(text_storage) - i + 1));
	if (new == NULL)
		return (free(text_storage), NULL);
	i++;
	while (text_storage[i] != '\0')
		new[j++] = text_storage[i++];
	new[j] = '\0';
	free(text_storage);
	return (new);
}

static char	*ft_line_return(char *text_storage)
{
	char	*line_return;
	int		i;
	int		extra;

	extra = 1;
	i = 0;
	while (text_storage[i] != '\0' && text_storage[i] != '\n')
		i++;
	if (text_storage[i] == '\n')
		extra = 2;
	line_return = malloc(sizeof(char) * (i + extra));
	if (line_return == NULL)
		return (NULL);
	i = 0;
	while (text_storage[i] != '\0' && text_storage[i] != '\n')
	{
		line_return[i] = text_storage[i];
		i++;
	}
	if (text_storage[i] == '\n')
		line_return[i++] = '\n';
	line_return[i] = '\0';
	return (line_return);
}

static char	*ft_read_buff(char *text_storage, int fd)
{
	char	*buffer;
	int		bytes_read;

	buffer = malloc(BUFFER_SIZE + 1);
	if (buffer == NULL)
		return (free(text_storage), NULL);
	bytes_read = 1;
	buffer[0] = '\0';
	while (bytes_read > 0 && !ft_strchr(buffer, '\n'))
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read > 0)
		{
			buffer[bytes_read] = '\0';
			text_storage = ft_strjoin(text_storage, buffer);
		}
	}
	free(buffer);
	if (bytes_read == -1)
		return (free(text_storage), NULL);
	return (text_storage);
}

char	*get_next_line(int fd)
{
	static char	*text_storage = NULL;
	char		*line_return;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	text_storage = ft_read_buff(text_storage, fd);
	if (text_storage == NULL)
		return (NULL);
	line_return = ft_line_return(text_storage);
	if (line_return == NULL)
		return (free(text_storage), text_storage = NULL, NULL);
	text_storage = ft_clean_line(text_storage);
	return (line_return);
}
