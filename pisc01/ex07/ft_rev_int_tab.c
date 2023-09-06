/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 08:24:10 by acandela          #+#    #+#             */
/*   Updated: 2023/08/14 16:40:31 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	itp;
	int	itn;

	itp = 0;
	itn = size - 1;
	while (itp < size / 2)
	{
		temp = tab[itp];
		tab[itp] = tab [itn];
		tab[itn] = temp;
		itn--;
		itp++;
	}
}
/*
int main(void)
{
    int num = 4;
    int arrayint[num];
    arrayint[0] = 3;
    arrayint[1] = 4;
    arrayint[2] = 5;
    arrayint[3] = 6;
    int size = sizeof(arrayint)/4;
    ft_rev_int_tab(arrayint, size);
}*/
