/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 09:22:54 by acandela          #+#    #+#             */
/*   Updated: 2023/08/22 09:57:08 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int destsize)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i] != 0)
		i++;
	while ((destsize > j + 1) && (src[j] != 0))
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = 0;
	return (i);
}

int main(void)
{
    char dest[] = "hola";
    char src[] = "limoncello";
    unsigned int destsize = sizeof(dest);
	unsigned int result;
    result = ft_strlcpy(dest, src, destsize);

    printf("%d", result);
    printf("%s", dest);
    return 0;
}
