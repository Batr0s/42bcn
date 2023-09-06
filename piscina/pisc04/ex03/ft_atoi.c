/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 13:35:05 by acandela          #+#    #+#             */
/*   Updated: 2023/08/28 15:27:47 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	bucle(int i, int result, int resta, char *str)
{
	int	num1;

	num1 = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		if (num1++ == 0)
			result = str[i] - 48;
		else
			result = (result * 10) + (str[i] - 48);
		i++;
	}
	if (resta % 2 == 1)
		result = -result;
	return (result);
}

int	ft_atoi(char *str)
{
	int	i;
	int	resta;
	int	result;

	result = 0;
	i = 0;
	resta = 0;
	while (str[i] != 0)
	{
		if ((str[i] < 48 || str[i] > 57) && ((str[i] < 9 || str[i] > 13) 
				&& str[i] != 32) && (str[i] != '+' && str[i] != '-'))
			return (0);
		if (str[i] == '-')
			resta++;
		if (str[i] >= 48 && str[i] <= 57)
		{
			result = bucle(i, result, resta, str);
			break ;
		}
		i++;
	}
	return (result);
}
/*
int	main(void)
{
  char str[]= "-- \n 123a456";
  int result;

  result = 0;
  result = ft_atoi(str);
  //result = atoi(str);
  printf("%d", result);
}*/
// isspace  '\n'	'\v'	'\f'	'\r'	' '  '\t'
// 9, 10, 11, 12, 13, 32
