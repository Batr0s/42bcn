/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_printu.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:44:33 by acandela          #+#    #+#             */
/*   Updated: 2023/10/11 18:15:40 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

/*
itoa function recieves an int and creates a string with the digits of that int
it can manage negative numbers and the max and min number of the int variable.
*/
static int	ft_countdigits(long n)
{
	int	digits;

	if (n < 0)
		n = n * -1;
	digits = 0;
	if (n == 0)
		return (1);
	while (n >= 1)
	{
		digits++;
		n /= 10;
	}
	return (digits);
}

static char	*ft_isitoa(char *itoa, int size, long n)
{
	itoa[size] = '\0';
	while (size > 0)
	{
		itoa[--size] = (n % 10) + 48;
		n /= 10;
	}
	return (itoa);
}

static int	ft_itoa_cnt_long(long n)
{
	int		size;
	char	*itoa;

	size = ft_countdigits(n);
	itoa = malloc(size + 1);
	if (itoa == NULL)
		return (ft_putstr_print(NULL));
	itoa = ft_isitoa(itoa, size, n);
	return (ft_putstr_print(itoa));
}

int	ft_itoa_printu(int n)
{
	long	cast;
	long	max_uint;

	max_uint = 4294967295;
	cast = (long)n;
	if (cast < 0)
	{
		cast = -cast;
		return (ft_itoa_cnt_long(max_uint - cast + 1));
	}
	return (ft_itoa_cnt_long(cast));
}
/*
int	main(void)
{
	int	n;
	int	result;

	n = -1;
	result = ft_itoa_printu(n);
	ft_printf("\n%d\n", result);
}
*/
