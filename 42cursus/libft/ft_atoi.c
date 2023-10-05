/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:32:32 by acandela          #+#    #+#             */
/*   Updated: 2023/10/03 12:57:29 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	resta;
	int	result;

	result = 0;
	resta = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			resta = 1;
		i++;
	}
	while (ft_isdigit(str[i]))
		result = result * 10 + str[i++] - 48;
	if (result && resta)
		return (-result);
	else if (result)
		return (result);
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	char str[] = "  1	-2147s48364i8";
	int result = ft_atoi(str);
	printf("%d\n", result);
}*/
