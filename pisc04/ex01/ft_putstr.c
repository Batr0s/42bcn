/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 12:46:08 by acandela          #+#    #+#             */
/*   Updated: 2023/08/28 15:24:26 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;
	char	temp;

	i = 0;
	while (str[i] != 0)
	{
		temp = str[i];
		write(1, &temp, 1);
		i++;
	}
}
/*
int main()
{
    char frase[] = "hola caracola";
    ft_putstr(frase);
}*/
