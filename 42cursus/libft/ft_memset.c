/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:46:08 by acandela          #+#    #+#             */
/*   Updated: 2023/09/11 13:34:21 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *str, int c, unsigned long n)
{
	unsigned long	i;
	unsigned char	*strc;

	i = 0;
	strc = str;
	while (i < n)
		strc[i++] = (unsigned char)c;
	return (str);
}
