/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:52:32 by acandela          #+#    #+#             */
/*   Updated: 2023/10/17 12:07:43 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdarg.h>

static int	ft_printarg(va_list vargs, char type)
{
	if (type == 'c')
		return (ft_putchar_print(va_arg(vargs, int)));
	else if (type == '%')
		return (ft_putchar_print('%'));
	else if (type == 's')
		return (ft_putstr_s(va_arg(vargs, char *)));
	else if (type == 'p')
		return (ft_itoa_printptr(va_arg(vargs, void *)));
	else if (type == 'd' || type == 'i')
		return (ft_itoa_print(va_arg(vargs, int)));
	else if (type == 'u')
		return (ft_itoa_printu(va_arg(vargs, unsigned int)));
	else if (type == 'x')
		return (ft_itoa_printx(va_arg(vargs, unsigned int)));
	else if (type == 'X')
		return (ft_itoa_printxm(va_arg(vargs, unsigned int)));
	return (0);
}

int	ft_printf(char const *str, ...)
{
	va_list	vargs;
	int		size;
	int		numchar;

	size = 0;
	va_start(vargs, str);
	while (*str != '\0')
	{
		if (*str == '%')
		{
			numchar = ft_printarg(vargs, *(++str));
			if (numchar == -1)
				return (-1);
			size += numchar;
		}
		else
		{
			size++;
			if (ft_putchar_print(*str) == -1)
				return (-1);
		}
		str++;
	}
	va_end(vargs);
	return (size);
}

#include <stdio.h>
int	main(void)
{
	int result = 0;
	
	//result = printf("%p", NULL);
	printf("\n%x\n", result); 
}
