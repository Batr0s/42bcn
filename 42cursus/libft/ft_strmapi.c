/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:19:34 by acandela          #+#    #+#             */
/*   Updated: 2023/10/04 17:59:03 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Then ft_strmapi creates a string (and makes the reservation of memmory with 
malloc) that will be the result of iterate 'str' and apply the 'f' function 
to every char of str.
*/

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	size_t	lens;
	int		i;
	char	*strret;

	if (str == NULL)
		return (NULL);
	lens = ft_strlen(str);
	strret = malloc(lens + 1);
	if (strret == NULL)
		return (NULL);
	i = 0;
	while (str[i] != 0)
	{
		strret[i] = f(i, str[i]);
		i++;
	}
	strret[i] = '\0';
	return (strret);
}
/*
#include <stdio.h>
char	funcion(unsigned int num, char c)
{
	c = '1';
	return (c);
}
int	main(void)
{
	char str[] = "asd";
	char *str2 = ft_strmapi(str, funcion);
	printf("%s\n", str2);
}
*/