/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:35:36 by acandela          #+#    #+#             */
/*   Updated: 2023/09/16 11:40:31 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/* 
Rellena con '\0', 'n' veces la seccion de memoria 's'.
*/
void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	str = s;
	i = 0;
	if (n)
	{
		while (i < n)
		{
			str[i] = '\0';
			i++;
		}
	}
}
/*
int main()
{
  char s[5];
    memset(s, 'A', sizeof(s)); 
    printf("s antes de bzero: %s\n", s);

    ft_bzero(s, sizeof(s));
    printf("s después de bzero: %s\n", s);
}
*/