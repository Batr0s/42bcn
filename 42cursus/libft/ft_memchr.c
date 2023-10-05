/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 11:17:26 by acandela          #+#    #+#             */
/*   Updated: 2023/10/04 17:23:06 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Localiza la primera coincidencia de 'c' en el string 's' en 'n' bytes.
No tiene en cuenta la terminacion en nulo.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	if (n == 0)
		return (0);
	while ((i + 1 < n) && ((unsigned char)str[i] != (unsigned char)c))
		i++;
	if ((unsigned char)str[i] == (unsigned char)c)
		return ((void *)s + i);
	else
		return (0);
}
/*
#include <stdio.h>
int main(void)
{
	char str[] = "bonjourno";
	char *result = ft_memchr(str, 'n', 2);
	printf("%s\n", result);
}
*/