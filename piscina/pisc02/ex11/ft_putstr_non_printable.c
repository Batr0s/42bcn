/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 11:41:28 by acandela          #+#    #+#             */
/*   Updated: 2023/08/19 10:51:41 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	imp_letra(char temp)
{
	char	letra;

	if ((temp -32 == -6) || (temp -16 == -6))
		letra = 'a';
	else if ((temp -32 == -5) || (temp -16 == -5))
		letra = 'b';
	else if ((temp -32 == -4) || (temp -16 == -4))
		letra = 'c';
	else if ((temp -32 == -3) || (temp -16 == -3))
		letra = 'd';
	else if ((temp -32 == -2) || (temp -16 == -2))
		letra = 'e';
	else if ((temp -32 == -1) || (temp -16 == -1) || (temp -32 == 95))
		letra = 'f';
	write(1, &letra, 1);
}

void	digit(char *str, char numero)
{
	char	temp;

	temp = *str;
	write(1, &numero, 1);
	if (temp < 10)
	{
		temp = temp + 48;
		write(1, &temp, 1);
	}
	else if ((temp >= 10) && (temp <= 15))
		imp_letra(temp);
	else if (temp >= 16 && temp <= 25)
	{
		temp = temp + 48 - 16;
		write(1, &temp, 1);
	}
	else if (((temp >= 26) && (temp <= 31)) || (temp == 127))
		imp_letra(temp);
}

void	write_no_imp(char *str)
{
	if (*str < 16)
	{
		digit(str, '0');
	}
	else if ((*str >= 16) && (*str < 127))
	{
		digit(str, '1');
	}
	else if (*str == 127)
	{
		digit(str, '7');
	}
}

void	ft_putstr_non_printable(char *str)
{
	char	temp;

	while (*str != 0)
	{
		if ((*str <= 31) || (*str == 127))
		{
			temp = '\\';
			write(1, &temp, 1);
			write_no_imp(str);
		}
		else
		{
			temp = *str;
			write(1, &temp, 1);
		}
		str++;
	}
}
/*
int main(void)
{
    char str[] = "Coucou\x7Ftu vas bien ?";
	ft_putstr_non_printable(str);
    return 0;
}*/
