/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 13:20:07 by acandela          #+#    #+#             */
/*   Updated: 2023/08/22 12:21:27 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (dest[i] != 0)
		i++;
	while ((src[j] != 0) && (j < nb))
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
/*
int main(void)
{
  char dest[15];
  dest [0] = 'a';
  dest [1] = 'b';
  dest [2] = 'c';
  dest [3] = '\0';
  unsigned int nb;
  nb = 2;
  char src[] = "hola";
  char *result;
  result = ft_strncat(dest, src, nb);
  //result = strncat(dest, src, nb);
  printf("%s", result);
}*/
