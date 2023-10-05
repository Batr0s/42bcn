/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:42:17 by acandela          #+#    #+#             */
/*   Updated: 2023/10/04 18:28:20 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
1. Si dstsize > lendest --> hay espacio dentro de dest. Devuelve el tamaño
del string que intenta crear (lendest + lensrc).

2. Si NO hay espacio devuelve el tamaño de dest (dstsize) + lensrc.
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
	if (dstsize < lendest)
		return (lensrc + dstsize);
	else
		result = lendest + lensrc;
	while (src[i] && lendest + 1 < dstsize)
		dest[lendest++] = src[i++];
	dest[lendest] = '\0';
	return (result);
}
/*
#include <stdio.h>
int main(void)
{
	char dest[] = "chipiron";
	char src[] = "aceitunas";
	printf("lendest: %zu\n", ft_strlen(dest));
	printf("lensrc: %zu\n\n", ft_strlen(src));
	size_t result = ft_strlcat(dest, src, 10);
	printf("dest:   %s\n", dest);
	printf("result: %zu\n", result);
}
*/