/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:46:08 by acandela          #+#    #+#             */
/*   Updated: 2023/09/16 11:22:26 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

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
