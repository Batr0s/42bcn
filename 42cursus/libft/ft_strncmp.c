/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:18:18 by acandela          #+#    #+#             */
/*   Updated: 2023/09/15 19:55:43 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
Compara los strings s1 y s2 terminados en '\0' 'n' caracteres.
La comparacion se debe hacer con unsigned char, por eso la conversion.
Returns:
	num positivo si s1 es superior a s2.
	num negativo si s1 es inferior a s2.
	0 si s1 es igual a s2.
Bucle while, condicion de salida:
	Si encuentra diferencias (returns).
	Si encuentra el final de s1 o s2 ('\0').
	Si 'i' es igual a 'n' (ha verificado 'n' caracteres).
*/
int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
		{
			if ((unsigned char)s1[i] > (unsigned char)s2[i])
				return (1);
			else if ((unsigned char)s1[i] < (unsigned char)s2[i])
				return (-1);
			else
				return (0);
		}
		++i;
	}
	if ((unsigned char)s1[i] > (unsigned char)s2[i] && i != n)
		return (1);
	else if ((unsigned char)s1[i] < (unsigned char)s2[i] && i != n)
		return (-1);
	else
		return (0);
}
