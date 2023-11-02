/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:24:53 by acandela          #+#    #+#             */
/*   Updated: 2023/11/02 16:32:11 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "get_next_line.h"
#include "get_next_line_bonus.h"
#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	int fd1;
	int fd2;
	int fd3;
	
	fd1 = open("archivo1.txt", O_RDONLY);
	fd2 = open("archivo2.txt", O_RDONLY);
	fd3 = open("archivo3.txt", O_RDONLY);
	if (fd1 == -1)
		perror("Error al abrir el archivo");
	// ARCHIVO 1
	printf("ARCH1: %s", get_next_line(fd1));
	printf("ARCH1: %s", get_next_line(fd1));
	printf("ARCH1: %s\n\n", get_next_line(fd1));
	// ARCHIVO 2
	printf("ARCH2: %s", get_next_line(fd2));
	printf("ARCH2: %s", get_next_line(fd2));
	printf("ARCH2: %s\n", get_next_line(fd2));
	// ARCHIVO 3
	printf("ARCH3: %s", get_next_line(fd3));
	printf("ARCH3: %s", get_next_line(fd3));
	printf("ARCH3: %s", get_next_line(fd3));

}
