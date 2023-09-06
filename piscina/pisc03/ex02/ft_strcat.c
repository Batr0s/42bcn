/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 12:40:35 by acandela          #+#    #+#             */
/*   Updated: 2023/08/23 08:56:40 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i] != 0)
		i++;
	while (src[j] != 0)
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
  
  char src[] = "hola";
  char *result;
  result = ft_strcat(dest, src);
  //result = strcat(dest, src);
  printf("%s", result);
}*/
