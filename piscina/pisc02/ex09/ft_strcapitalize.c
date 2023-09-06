/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:27:19 by acandela          #+#    #+#             */
/*   Updated: 2023/08/21 09:21:03 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	to_upper_case(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	to_upper_case(str);
	i = 0;
	if ((str[i] >= 97) && (str[i] <= 122))
		str[i] = str[i] -32;
	while (str[i] != 0)
	{
		if ((str[i] < 48) || ((str[i] < 65) && (str[i] > 57))
			|| ((str[i] < 97) && (str[i] > 90))
			|| ((str[i] > 122) && (str[i] < 127)))
		{
			i++;
			if ((str[i] >= 97) && (str[i] <= 122))
			{
				str[i] = str[i] - 32;
			}
			i--;
		}
		i++;
	}
	return (str);
}
/*
int main(void)
{
    char frase[] = "sat, coeNt tu vas ? 42ts qUTe-deux; cite?et+un";
    int i;
    i = 0;
    while (frase[i] != 0)
	  {
		  write(1, &frase[i], 1);
		  i++;
	  }
   	char *result;
    result = ft_strcapitalize(frase);
    char esp;
    esp = ' ';
    write(1, &esp, 1);
    write(1, &esp, 1);
    write(1, &esp, 1);
    i = 0;
    while (result[i] != 0)
	{
		write(1, &result[i], 1);
		i++;
	}
}*/
