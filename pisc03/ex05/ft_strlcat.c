/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:17:15 by acandela          #+#    #+#             */
/*   Updated: 2023/08/23 11:45:19 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <unistd.h>

unsigned int	sizestring(char *string)
{
	unsigned int	i;

	i = 0;
	while (string[i] != 0)
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	sizedest;
	unsigned int	sizesrc;

	sizesrc = sizestring(src);
	sizedest = sizestring(dest);
	sizedest += sizesrc;
	i = 0;
	j = 0;
	while (dest[i] != 0)
		i++;
	if (i < size)
	{
		while (src[j] != 0 && i < size - 1)
			dest[i++] = src[j++];
		dest[i] = 0;
	}
	return (sizedest);
}
/*
int main(void)
{
  char dest[8];
  dest [0] = 'a';
  dest [1] = 'b';
  dest [2] = 'c';
  dest [3] = '\0';
  unsigned int size;
  unsigned int result;
  size = sizeof(dest);
  char src[] = "holaholita";

  result = ft_strlcat(dest, src, size);
  //result = strlcat(dest, src, size);
  printf("%d\n", result);
  printf("%s", dest);
}*/
