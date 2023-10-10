/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:52:32 by acandela          #+#    #+#             */
/*   Updated: 2023/10/10 12:24:59 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

static char	ft_type(char *str, int i)
{
	char	letra;

	i++;
	return (str[i]);
}

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static int	ft_numargs(char *str)
{
	int	i;
    int args;

	i = 0;
    args = 0;
	while (str[i] != '\0')
    {
        if (str[i++] == '%')
    }

	return (i);
}

void	ft_printf(char *str, ...)
{
	va_list	vargs;
	int		i;
	int		type;
	char	*str2;

	i = 0;
	va_start(vargs, ft_numargs(str));
	while (str[i] != '\0')
	{
		type = 'Y';
		if (str[i] == '%')
			type = ft_type(str, i);
		if (type == 'c' || type == 'd')
		{
			i++;
			if (type == 'c')
				ft_putchar(va_arg(vargs, int));
			else if (type == 'd')
				ft_putchar(va_arg(vargs, int) + 48);
			/*else if (type == 's')
			{
				str2 = va_arg(vargs, int);
				while (*str2 != '\0')
				{
					ft_putchar(*str2);
					str2++;
				}
			}*/
		}
		else
			write(1, &str[i], 1);
		i++;
	}
	va_end(vargs);
}

int	main(void)
{
	char x[] = "hola";
	int y = 18;
	float z = 12.3;

	ft_printf("hola %c", 's');
	// printf("hola %s", "que tal");
}