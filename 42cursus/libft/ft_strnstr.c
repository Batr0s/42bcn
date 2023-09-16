/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:13:08 by acandela          #+#    #+#             */
/*   Updated: 2023/09/16 18:30:50 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
Locates the first ocurrence of 'to_find' in 'str' and no more than 'len'
characters are searched.
If 'len' = 0 returns a pointer to 'str'.
If there is no ocurrence returns NULL.
If there is an ocurrence returns a pointer to 'str' to
the first character of the first ocurrence of 'to_find'.
*/
char	*strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	j;
	size_t	i;

	if (!ft_strlen(to_find))
		return ((char *)str);
	i = 0;
	while (str[i] && (i + 1 < len))
	{
		j = 0;
		while ((str[i + j] == to_find[j]) && (*str) && (to_find[j]))
			j++;
		if (to_find[j] == 0)
			return ((char *)str + i - j);
		i++;
	}
	return (NULL);
}
