/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 13:13:28 by acandela          #+#    #+#             */
/*   Updated: 2023/10/04 16:50:22 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Compares bytes (not characters) from s1 against bytes from s2. 
'n' is the size for both s1 and s2.
Returns:
1. 0 if s1 and s2 are identical. 
2. The diference between the first two differing bytes (as UNSIGNED CHAR).
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;

	i = 0;
	if (n == 0)
		return (0);
	while ((i + 1 < n) && ((unsigned char *)s1)[i] == ((unsigned char *)s2)[i])
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
/*
#include <stdio.h>
int main(void)
{
	char s1[] = "aaa";
	char s2[] = "aab";
	int result = ft_memcmp(s1, s2, 3);
	printf("%d\n", result);
}
*/