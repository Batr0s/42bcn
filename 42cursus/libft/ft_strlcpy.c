/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:03:54 by acandela          #+#    #+#             */
/*   Updated: 2023/09/16 11:42:35 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/* Copies 'src' to 'dest' and guarantee null termination.
Returns the length of the string they tried to create */
size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	int		i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	if (dstsize == 0)
		return (i);
	while ((dstsize > j + 1) && src[j])
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = 0;
	return (i);
}
