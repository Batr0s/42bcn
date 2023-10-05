/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:14:35 by acandela          #+#    #+#             */
/*   Updated: 2023/10/04 13:30:54 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i] != 0)
	{
		f(i, (s + i));
		i++;
	}
	s[i] = '\0';
}
/*#include <stdio.h>
void	mifuncion(unsigned int num, char *ptr)
{
	*ptr = '5';
}

int	main(void)
{
	char str[] = "hola";
	ft_striteri(str, mifuncion);
	printf("%s\n", str);
}
*/