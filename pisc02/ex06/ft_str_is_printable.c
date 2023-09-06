/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:24:31 by acandela          #+#    #+#             */
/*   Updated: 2023/08/18 13:44:17 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	j;

	j = 0;
	i = 1;
	while (str[j] != 0)
	{
		if ((str[j] <= 31) || (str[j] == 127))
		{
			i = 0;
		}
		j++;
	}
	return (i);
}
/*
int main(void)
{
    char str[] = "\n";
    int n;
    n = ft_str_is_printable(str);
    char result = n + 48;
    write(1, &result, 1);
    return 0;
}*/
