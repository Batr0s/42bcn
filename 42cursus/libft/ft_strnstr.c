/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:13:08 by acandela          #+#    #+#             */
/*   Updated: 2023/10/04 18:04:23 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Locates the FIRST ocurrence of 'to_find' in 'str' and no more than 'len'
characters are searched.
If 'len' = 0 returns a pointer to 'str'.
If there is no ocurrence returns NULL.
If there is an ocurrence returns a pointer to 'str' to
the first character of the first ocurrence of 'to_find'.
*/

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	j;
	size_t	i;

	if (ft_strlen(to_find) == 0)
		return ((char *)str);
	i = 0;
	while (str[i] && (i < len))
	{
		j = 0;
		while ((str[i + j] == to_find[j]) && (str[i + j]) && (to_find[j]) && i
			+ j < len)
			j++;
		if (to_find[j] == 0)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*str;

	str = ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15);
	printf("%s\n", str);
}
*/