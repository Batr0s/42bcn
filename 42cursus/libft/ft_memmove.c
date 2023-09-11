/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:50:33 by acandela          #+#    #+#             */
/*   Updated: 2023/09/11 17:46:49 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, int n)
{
	int		i;
	char	*srce;
	char	*dest;

	i = 0;
	if (src == 0 && dst == 0)
		return (dst);
	srce = (char *)src;
	dest = (char *)dst;
	if (srce < dest)
	{
		while (n--)
			dest[n] = srce[n];
	}
	else
		return (ft_memcpy(dst, src, n));
	return (dst);
}
