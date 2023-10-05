/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:30:18 by acandela          #+#    #+#             */
/*   Updated: 2023/10/04 18:19:07 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
Devuelve un puntero a la posicion en la que encuentra la ULTIMA coincidencia
 con el int 'c'. Si no encuentra coincidencias devuelve null.
 El int 'c' puede ser '\0'.
*/

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	char s[] = "lorem ipsum ";
	char *result = ft_strrchr(s, 'm');
	printf("%s\n", result);
}
*/