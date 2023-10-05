/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:48:33 by acandela          #+#    #+#             */
/*   Updated: 2023/10/04 13:30:30 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Creates a substring of 's' delimiting it's size using 'start' and 'len'.
If 'start' its higher than the length of 's', then 'start' = length of 's'.
If value of 'len' it's higher than the value of 'lenstr', then len = lenstr.
If malloc returns NULL then ft_substr return NULL.
substr = malloc(len + 1);   el + 1 es para reservar espacio para el '\0'
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	lenstr;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		start = ft_strlen(s);
	lenstr = ft_strlen(s + start);
	if (lenstr < len)
		len = lenstr;
	substr = malloc(len + 1);
	if (substr == NULL)
		return (NULL);
	while (s[start] && (i < len))
		substr[i++] = s[start++];
	substr[i] = 0;
	return (substr);
}
/*
#include <stdio.h>
int	main(void)
{
	char  s[] = "lorem ipsum dolor sit amet";
	char *substr = ft_substr(s, 7, 10);
	printf("%s", substr);
}
*/