/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:46:08 by acandela          #+#    #+#             */
/*   Updated: 2023/10/04 17:19:00 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
Copia el caracter 'c', 'n' veces dentro de 'str'
*/

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*strc;

	i = 0;
	strc = str;
	while (i < n)
		strc[i++] = (unsigned char)c;
	return (str);
}
/*
#include <stdio.h>
int main(void)
{
	char str[] = "hola";
	printf("%s\n", ft_memset(str, '3', 5));
}
*/