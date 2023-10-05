/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:13:08 by acandela          #+#    #+#             */
/*   Updated: 2023/10/04 17:23:19 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Devuelve un puntero a la posicion en la que encuentra la PRIMERA coincidencia
con el int 'c' pasado a char.
Si no encuentra coincidencias devuelve null.
*/

char	*ft_strchr(const char *s, int c)
{
	while (*s != 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((*s == '\0') && ((char)c == '\0'))
		return ((char *)s);
	else
		return (0);
}
