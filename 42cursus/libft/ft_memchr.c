/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 11:17:26 by acandela          #+#    #+#             */
/*   Updated: 2023/09/16 13:09:04 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	if (n == 0)
		return (0);
	while (i + 1 < n && ((unsigned char)str[i] != (unsigned char)c))
		i++;
	if ((unsigned char)str[i] == (unsigned char)c)
		return ((void *)s + i);
	else
		return (0);
}
/*
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	if (n == 0)
		return (0);
	while (i + 1 < n && str[i] && (unsigned char)str[i] != (unsigned char)c)
		i++;
	if ((unsigned char)str[i] == (unsigned char)c)
		return ((void *)s + i);
	else
		return (0);
}
*/