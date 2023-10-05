/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:35:36 by acandela          #+#    #+#             */
/*   Updated: 2023/10/05 12:11:36 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Rellena 'n' veces con BYTES 0 el string 's'.
*/

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
		((char *)s)[i++] = 0;
}
/*
#include <stdio.h>
int main()
{
  char s[] = "AAAAA";
    printf("s antes de bzero: %s\n", s);

    ft_bzero(s, sizeof(s));
    printf("s después de bzero: %s\n", s);
}
*/