/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:30:18 by acandela          #+#    #+#             */
/*   Updated: 2023/09/19 17:39:16 by acandela         ###   ########.fr       */
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
	int	numcoin;
	int	coin;

	coin = 0;
	numcoin = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			coin = 1;
			numcoin = i;
		}
		i++;
	}
	if (coin)
		return ((char *)s + numcoin);
	else if (s[i] == 0 && (char)c == '\0')
		return ((char *)s + i);
	else
		return (0);
}
