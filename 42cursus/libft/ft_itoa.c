/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:25:39 by acandela          #+#    #+#             */
/*   Updated: 2023/09/29 19:10:01 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_countdigits(int n)
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

char	*ft_isitoa(char *itoa, int i, int n, int sign)
{
	while (i > 0)
	{
		if (i == 1 && sign)
			itoa[--i] = '-';
		else
			itoa[--i] = (n % 10) + 48;
		n /= 10;
	}
	return (itoa);
}

int	ft_ismax(int n)
{
	int	max;

	max = 0;
	if (n == -2147483648)
	{
		n = (n + 1) * -1;
		max = 1;
	}
	return (max);
}

char	*ft_itoa(int n)
{
	int		size;
	int		sign;
	char	*itoa;
	int		max;

	sign = 0;
	if (n < 0)
	{
		n = n * (-1);
		sign = 1;
	}
	max = ft_ismax(n);
	if (max)
		n = (n + 1) * -1;
	size = ft_countdigits(n) + sign;
	itoa = malloc(size + 1);
	if (itoa == NULL)
		return (NULL);
	itoa = ft_isitoa(itoa, size, n, sign);
	if (max)
		itoa[10] = '8';
	itoa[size] = '\0';
	return (itoa);
}
/*
int	main(void)
{
	int		n;
	char	*string;

	n = -2147483648;
	string = ft_itoa(n);
	printf("%s\n", string);
	printf("%c\n", string[0]);
	printf("%c\n", string[1]);
	printf("%c\n", string[2]);
}
*/