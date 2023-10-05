/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:56:22 by acandela          #+#    #+#             */
/*   Updated: 2023/10/04 17:16:24 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Copia 'n' bytes de memoria de 'src' a 'dst'
 * si 'src' y 'dst' apuntan a la misma direccion de memoria, devuelve 'dst'. */

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (src == dst)
		return (dst);
	i = 0;
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>
int main(void)
{
	char str[] = "Hello, World!";
    char *src = str + 7; 
    char *dst = str + 13;
	ft_memcpy(dst, src, 7);
	printf("src: %s\n", src);
	printf("dst: %s\n", dst);
}
*/