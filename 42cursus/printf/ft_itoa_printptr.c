/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_printptr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:44:33 by acandela          #+#    #+#             */
/*   Updated: 2023/10/15 13:15:58 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

/*
itoa function recieves an int and creates a string with the digits of that int
it can manage negative numbers and the max and min number of the int variable.
*/
static int	ft_countdigits(unsigned long long numb)
{
	int	digits;

	if (numb < 0)
		numb = numb * -1;
	digits = 0;
	if (numb == 0)
		return (1);
	while (numb >= 1)
	{
		digits++;
		numb /= 16;
	}
	return (digits);
}

static char	*ft_isitoa(char *itoa, int size, unsigned long long numb)
{
	itoa[size] = '\0';
	while (size > 0)
	{
		if (size == 1)
			itoa[--size] = '0';
		else if (size == 2)
			itoa[--size] = 'x';
		else if (numb % 16 < 10 && size > 1)
			itoa[--size] = (numb % 16) + 48;
		else if (numb % 16 == 10 && size > 1)
			itoa[--size] = 'a';
		else if (numb % 16 == 11 && size > 1)
			itoa[--size] = 'b';
		else if (numb % 16 == 12 && size > 1)
			itoa[--size] = 'c';
		else if (numb % 16 == 13 && size > 1)
			itoa[--size] = 'd';
		else if (numb % 16 == 14 && size > 1)
			itoa[--size] = 'e';
		else if (numb % 16 == 15 && size > 1)
			itoa[--size] = 'f';
		numb /= 16;
	}
	return (itoa);
}

static int	ft_itoa_cnt_long(unsigned long long numb)
{
	int		size;
	char	*itoa;
	int		result;

	size = ft_countdigits(numb) + 2;
	itoa = malloc(size + 1);
	if (itoa == NULL)
		return (ft_putstr_print(NULL));
	itoa = ft_isitoa(itoa, size, numb);
	result = ft_putstr_print(itoa);
	free(itoa);
	return (result);
}

int	ft_itoa_printptr(void *ptr)
{
	long	numb;

	numb = (unsigned long long)ptr;
	return (ft_itoa_cnt_long(numb));
}
/*
int	main(void)
{
	void	*ptr;
	char	*ptr2;
	int		*ptr3;
	int		result;

	result = ft_itoa_printptr(ptr);
	printf("\nprintf: %p\n", ptr);
	result = ft_itoa_printptr(ptr2);
	printf("\nprintf2: %p\n", ptr2);
	result = ft_itoa_printptr(ptr3);
	printf("\nprintf3: %p\n", ptr3);
}
*/