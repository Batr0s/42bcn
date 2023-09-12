/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:03:54 by acandela          #+#    #+#             */
/*   Updated: 2023/09/12 18:35:43 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Copies src to dest ang guarantee null termination. Returns the length of the string
they tried to create */
unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int destsize)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i] != 0)
		i++;
	if (destsize == 0)
		return (i);
	while ((destsize > j + 1) && (src[j] != 0))
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = 0;
	return (i);
}
