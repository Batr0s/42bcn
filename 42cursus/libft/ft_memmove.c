/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:50:33 by acandela          #+#    #+#             */
/*   Updated: 2023/09/16 10:39:12 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
Copies 'n' bytes from 'src' to 'dst' but with good management of the overlaping.
It ensures that the bytes will be copied even with overlaping.
Also if 'src' and 'dst' are both 0 it returns 'dst'
*/
void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (src == 0 && dst == 0)
		return (dst);
	if ((char *)src < (char *)dst)
	{
		while (n--)
			((char *)dst)[n] = ((char *)src)[n];
	}
	else
		return (ft_memcpy(dst, src, n));
	return (dst);
}
