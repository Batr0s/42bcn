/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:18:18 by acandela          #+#    #+#             */
/*   Updated: 2023/10/04 18:00:20 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Compara los strings s1 y s2 terminados en '\0' 'n' caracteres.
La comparacion se debe hacer con unsigned char, por eso la conversion.
Si s1 y s2 o bien n = 0 devuelve 0.
Return:
Si encuentra una diferencia entre s1 y s2 o se han comparado 'n' caracteres
sale del bucle y retorna la diferencia entre s1 y s2.
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if ((n == 0) || (!s1[i] && !s2[i]))
		return (0);
	while ((i + 1 < n) && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>
int main(void)
{
	char s1[] = "aaa";
	char s2[] = "aab";
	int result = ft_strncmp(s1, s2, 3);
	printf("%d\n", result);
}
*/