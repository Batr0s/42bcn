/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:22:48 by acandela          #+#    #+#             */
/*   Updated: 2023/08/17 14:10:06 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 1;
	while (*str != '\0')
	{
		if (*str < 'a' || *str > 'z')
		{
			i = 0;
		}
		str++;
	}
	return (i);
}
/*
int main(void)
{
    char str[] = "45"; 
    int n;
    n = ft_str_is_lowercase(str);
    write(1, &n, 1);
   // printf("%d", n);
    return 0;
}*/
