/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:52:32 by acandela          #+#    #+#             */
/*   Updated: 2023/10/10 13:37:32 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	ft_printarg(va_list vargs, char type)
{
    char *str;
    
	if (type == 'c')
		ft_putchar(va_arg(vargs, int));
	else if (type == 'd')
		ft_putchar(va_arg(vargs, int) + 48);
	else if (type == 's')
	{
	str = va_arg(vargs, char *);
		while (*str != '\0')
		{
			ft_putchar(*str);
			str++;
		}
	}
}

void	ft_printf(char *str, ...)
{
	va_list	vargs;
	int		i;
	int		type;

	i = 0;
	va_start(vargs, str);
	while (str[i] != '\0')
	{
		type = '?';
		if (str[i] == '%')
		{
            i++;
            type = str[i];
            ft_printarg(vargs, type);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
	va_end(vargs);
}

// int	main(void)
// {
// 	char x[] = "hola";
// 	int y = -2147483648;

// 	ft_printf("hola 20 %s\n %d %c\n", "que tal", 55, 'a');
// 	printf("hola 20 %s\n %d %c", "que tal", y, 'a');
// }