/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:05:31 by acandela          #+#    #+#             */
/*   Updated: 2023/10/06 11:24:03 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
I used function ft_strlen + 1 to take into consideration the \0 at the end of s1
We cannot use sizeof(s1) because it takes the size of a pointer (8) instead of
the size of the string.
*/

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;

	s2 = malloc(ft_strlen(s1) + 1);
	if (s2 == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char s1[] = "lorem ipsum dolor sit amet";
	char *s1_dup = ft_strdup(s1);
	char *s1_dup = strdup(s1);
    printf("%s\n", s1_dup);
	printf("%zu", sizeof(s1));
}
*/