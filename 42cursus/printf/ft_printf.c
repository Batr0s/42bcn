/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:52:32 by acandela          #+#    #+#             */
/*   Updated: 2023/10/11 13:32:22 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

static int	ft_printarg(va_list vargs, char type)
{
	if (type == 'c')
		return (ft_putchar_cnt(va_arg(vargs, int)));
	else if (type == '%')
		return (ft_putchar_cnt('%'));
	else if (type == 's')
		return (ft_putstr_cnt(va_arg(vargs, char *)));
	else if (type == 'd' || type == 'i')
		return (ft_itoa_cnt(va_arg(vargs, int)));
	else if (type == 'u')
		return (ft_itoa_cnt_u(va_arg(vargs, unsigned int)));
	return (0);
}

int ft_printf(char const *str, ...)
{
	va_list	vargs;
	int		i;
	int		type;
	int		size;

	i = 0;
	size = 0;
	va_start(vargs, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			type = str[++i];
			size += ft_printarg(vargs, type);
		}
		else
		{
			size++;
			write(1, &str[i], 1);
		}
		i++;
	}
	va_end(vargs);
	return (size);
}
/*
int	main(void)
{ 
	char *ptr;
	int ptrlong = (int)ptr;
	printf("%p\n", ptr);
	printf("%dx", ptrlong);
}
*/