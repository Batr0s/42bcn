/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:56:22 by acandela          #+#    #+#             */
/*   Updated: 2023/09/11 16:47:48 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/* Copia n bytes de memoria de src a dst
 * si src y dst son NULL devuelve dst*/
void	*ft_memcpy(void *dst, const void *src, int n)
{
	int	i;

	if (src == 0 && dst == 0)
		return (dst);
	i = 0;
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}
