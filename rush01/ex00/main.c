/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 12:17:39 by acandela          #+#    #+#             */
/*   Updated: 2023/08/20 11:07:27 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
/*
void	ft_print(char caracter)
{
	write(1, &caracter, 1);
}

void	rush(char *keyup)
{	
}
*/
int	main(int num, char **args)
{
	char	keyrows[8];
	char	keycols[8];
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (args[1][i] != 0)
	{
		if (j > 7)
			j = 0;
		if ((args[1][i] >= '1') && (args[1][i] <= '4'))
		{
			if (i < 16)
				keyrows[j] = args[1][i];
			else
				keycols[j] = args[1][i];
			j++;
		}
		i++;
	}
	//	rush(args[1]);
}
