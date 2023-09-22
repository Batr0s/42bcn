/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:42:17 by acandela          #+#    #+#             */
/*   Updated: 2023/09/16 10:46:45 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
1. Si dstsize > lendest --> hay espacio dentro de dest. Devuelve el tamaño
del string que intenta crear (lendest + lensrc).

2. Si NO hay espacio devuelve el tamaño de dest (dstsize) + lensrc.

Bucle: lendest + 1 para tener en cuenta el '\0' de la ultima posición.
Ya que en un array de tamaño 5, la última posición sera la 4.
*/
size_t	ft_strlcat(char *dest, char *src, size_t dstsize)
{
	int		i;
	size_t	lensrc;
	size_t	lendest;
	size_t	result;

	lensrc = ft_strlen(src);
	lendest = ft_strlen(dest);
	i = 0;
	if (dstsize > lendest)
		result = lendest + lensrc;
	else
		result = lensrc + dstsize;
	while (src[i] && lendest + 1 < dstsize)
	{
		dest[lendest++] = src[i];
		i++;
	}
	dest[lendest] = '\0';
	return (result);
}