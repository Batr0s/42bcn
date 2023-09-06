/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:39:10 by acandela          #+#    #+#             */
/*   Updated: 2023/08/17 14:10:42 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 1;
	while (*str != '\0')
	{
		if (*str < 'A' || *str > 'Z')
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
    char str[] = "45A"; 
    int n;
    n = ft_str_is_uppercase(str);
    write(1, &n, 1);
   // printf("%d", n);
    return 0;
}*/
