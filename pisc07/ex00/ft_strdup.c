/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 11:16:40 by acandela          #+#    #+#             */
/*   Updated: 2023/08/31 12:27:55 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>

char	*ft_strdup(char *src)
{
	char	*pter;
	int		i;

	i = 0;
	pter = (char *) malloc(sizeof(src));
	while (src[i] != 0)
	{
		pter[i] = src[i];
		i++;
	}
	pter[i] = src[i];
	return (pter);
}
/*
int main(void)
{
	char src[] = "hola";
	char *result = ft_strdup(src);
	int i = 0;
	while(result[i] != 0)
	{
		write(1, &result[i], 1);
		i++;
	}
}*/
