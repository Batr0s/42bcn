/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:19:34 by acandela          #+#    #+#             */
/*   Updated: 2023/10/02 17:12:25 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
The function parameter of ft_strmapi called 'f' is any function that returns
a char and its parameters must be (unsigned int, char) that's the only thing 
that matters.
Then ft_strmapi creates a string (and makes the reservation of memmory with 
malloc) that will be the result of iterate 'str' and apply the 'f' function 
to every char of str.
*/
char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	size_t	lens;
	int		i;
	char	*sret;

	lens = ft_strlen(str);
	sret = malloc(lens + 1);
	if (sret == NULL)
		return (NULL);
	i = 0;
	while (str[i] != 0)
	{
		sret[i] = f(i, str[i]);
		i++;
	}
	sret[i] = '\0';
	return (sret);
}
/*
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
}*/