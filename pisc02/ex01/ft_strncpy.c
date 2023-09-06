/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 09:29:16 by acandela          #+#    #+#             */
/*   Updated: 2023/08/20 16:34:06 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	int				j;

	j = 0;
	i = 0;
	while (i < n)
	{
		if (src[j] == 0)
		{
			dest[i] = 0;
		}
		else
		{
			dest[i] = src[j];
			j++;
		}
		i++;
	}
	return (dest);
}
/*
int main(void)
{
    char dest[] = "hamburguesa";
    char src[] = "aloha";
    unsigned int n = 15;
	  char *result;
    result = ft_strncpy(dest, src, n);
    int i = 0;
    while(i < 15)
    {
      printf("|%c|", result[i]);
      i++;
    }
    return 0;
}*/
