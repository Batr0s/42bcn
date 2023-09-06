/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 09:37:35 by acandela          #+#    #+#             */
/*   Updated: 2023/08/17 14:09:34 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 1;
	while (*str != '\0')
	{
		if ((*str < 'A' || *str > 'z') || (*str > 'Z' && *str < 'a'))
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
    char str[] = "asd7";
    int n;
    n = ft_str_is_alpha(str);
	write(1, &n, 1);
    //printf("%d", n);
    return 0;
}*/
