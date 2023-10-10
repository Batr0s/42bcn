/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_cnt.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:25:39 by acandela          #+#    #+#             */
/*   Updated: 2023/10/10 18:26:48 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

/*
itoa function recieves an int and creates a string with the digits of that int
it can manage negative numbers and the max and min number of the int variable.
*/

int	ft_itoa_cnt(int n)
{
	long	cast;
	int		sign;
	char	*str;

	str = ft_itoa(n);
	cast = (long)n;
	sign = 0;
	if (cast < 0)
	{
		cast *= -1;
		sign = 1;
	}
	return (ft_putstr_cnt(str));
}
/*
int	main(void)
{
	int		n;
	char	*string;

	n = -654;
	n = ft_itoa_count(n);
	printf("%d\n", n);
}
*/