/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:09:06 by acandela          #+#    #+#             */
/*   Updated: 2023/10/17 18:46:13 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#define BUFFER_SIZE 1024

/*
char	*get_next_line(int fd)
{
}
*/

int	main(void)
{
	int		fd;
    char *buffer;
    int bytes_read;
    
    fd = open("archivo.txt", O_RDONLY);
    if (fd == -1)
        perror("Error al abrir el archivo");
    buffer = malloc(BUFFER_SIZE + 1);
    if (buffer == NULL)
            return (-1);
    bytes_read = read(fd, buffer, BUFFER_SIZE);
    if (bytes_read == -1) {
        perror("Error al leer el archivo");
    } else {
        buffer[bytes_read] = '\0';
    }
    printf("Datos leídos: %s\n", buffer);
    free(buffer);
}
