/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:25:39 by acandela          #+#    #+#             */
/*   Updated: 2023/10/05 16:28:00 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
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

char	*ft_itoa(int n)
{
	int		size;
	int		sign;
	char	*itoa;
	long	cast;

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
		return (NULL);
	itoa = ft_isitoa(itoa, size, cast, sign);
	return (itoa);
}
/*
#include <stdio.h>

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