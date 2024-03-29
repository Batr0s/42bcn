/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:44:33 by acandela          #+#    #+#             */
/*   Updated: 2023/10/17 11:40:02 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

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

static char	*ft_isitoa(char *itoa, int size, long cast, int sign)
{
	itoa[size] = '\0';
	while (size > 0)
	{
		if (size == 1 && sign)
			itoa[--size] = '-';
		else
			itoa[--size] = (cast % 10) + 48;
		cast /= 10;
	}
	return (itoa);
}

int	ft_itoa_print(int n)
{
	int		size;
	int		sign;
	char	*itoa;
	long	cast;
	int		result;

	cast = (long)n;
	sign = 0;
	if (cast < 0)
	{
		cast *= -1;
		sign = 1;
	}
	size = ft_countdigits(cast) + sign;
	itoa = malloc(size + 1);
	if (itoa == NULL)
		return (ft_putstr_print(NULL));
	itoa = ft_isitoa(itoa, size, cast, sign);
	result = ft_putstr_print(itoa);
	free(itoa);
	return (result);
}
