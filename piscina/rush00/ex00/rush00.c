/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 08:39:56 by acandela          #+#    #+#             */
/*   Updated: 2023/08/13 18:31:16 by jludena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int	cx;
	int	fy;

	cx = 0;
	fy = 0;
	while (fy <= y - 1)
	{
		while (cx <= x - 1)
		{
			if ((cx == 0 || cx == x - 1) && (fy == 0 || fy == y - 1))
				ft_putchar('o');
			else if ((cx > 0 && cx < x - 1) && (fy == 0 || fy == y - 1))
				ft_putchar('-');
			else if ((fy < y - 1 && fy > 0) && (cx == 0 || cx == x - 1))
				ft_putchar('|');
			else if ((cx < x - 1 && cx > 0) && (fy < y - 1 && fy > 0))
				ft_putchar(' ');
			cx++;
		}
		ft_putchar('\n');
		cx = 0;
		fy++;
	}
}
