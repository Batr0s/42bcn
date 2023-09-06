/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:11:54 by acandela          #+#    #+#             */
/*   Updated: 2023/08/17 14:08:59 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 1;
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
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
    char str[] = "asd65"; 
    int n;
    n = ft_str_is_numeric(str);
    write(1, &n, 1);
    //printf("%d", n);
    return 0;
}*/
