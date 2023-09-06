/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 13:33:16 by acandela          #+#    #+#             */
/*   Updated: 2023/08/23 11:05:52 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	sizefind(char *to_find)
{
	int	i;

	i = 0;
	while (to_find[i] != 0)
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	size;
	int	j;

	j = 0;
	size = sizefind(to_find);
	if (size == 0)
		return (str);
	while (*str != 0)
	{
		while ((*str == *to_find) && (*str != 0) && (*to_find != 0))
		{
			str++;
			to_find++;
			j++;
		}
		str -= j;
		if (*to_find == 0)
			return (str);
		to_find -= j;
		j = 0;
		str++;
	}
	return (NULL);
}
/*
int main(void)
{
    char str[] = "hola holita vecinito";
    char to_find[] = "l";
    char *result;
    result = ft_strstr(str, to_find);
    //result = strstr(str, to_find);
    printf("%s", result);
}*/
