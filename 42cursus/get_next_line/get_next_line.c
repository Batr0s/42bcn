/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:09:06 by acandela          #+#    #+#             */
/*   Updated: 2023/10/20 13:45:06 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

static char	*ft_salto(char *next_line)
{
	char	*salto;
	int		i;

	i = 0;
	while (next_line[i] != 0 && next_line[i] != '\n')
		i++;
	salto = malloc(sizeof(char) * (i + 2));
	i = 0;
	while (next_line[i] != '\n' && next_line[i] != '\0')
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
	if (next_line[i] == '\0')
	{
		free(next_line);
		return (NULL);
	}
	new = malloc(sizeof(char) * (ft_strlen(next_line) - i + 1));
	i++;
	while (next_line[i] != '\0')
		new[j++] = next_line[i++];
	new[j] = '\0';
	free(next_line);
	return (new);
}

char	*get_next_line(int fd)
{
	static char	*next_line = "";
	char		*line;
	char		*buffer;
	int			bytes_read;

	if (next_line == NULL)
		return (NULL);
	if (fd < 0 || read(fd, &next_line, 0) < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = malloc(BUFFER_SIZE + 1);
	if (buffer == NULL)
		return (NULL);
	while (ft_strchr(buffer, '\n') == 0 && bytes_read > 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		buffer[bytes_read] = '\0';
		next_line = ft_strjoin(next_line, buffer);
	}
	free(buffer);
	if (!bytes_read && *next_line == '\0')
		return (NULL);
	line = ft_salto(next_line);
	next_line = ft_clean_line(next_line);
	return (line);
}

/*
int	main(void)
{
	// stdin
	// char *line;

    // printf("Ingresa líneas de texto (Presiona Ctrl+D para finalizar):\n");
    // while ((line = get_next_line(0)) != NULL)
    // {
    //     printf("Línea leída: %s\n", line);
    //     free(line);
    // }
    // printf("Fin de la lectura.\n");
    // return 0;
	
	
	int		fd;
	char	*buffer;

	fd = open("archivo.txt", O_RDONLY);
	//if (fd == -1)
	//	perror("Error al abrir el archivo");
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	// printf("%s", get_next_line(fd));
	
}
*/