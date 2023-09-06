/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 08:39:56 by acandela          #+#    #+#             */
/*   Updated: 2023/08/13 18:23:05 by jludena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char a);

void	impresion(int x, int y, int c, int f)
{
	int	rx;

	rx = x - 1;
	if ((c == 0 && f == 0) || (c == rx && f == y - 1 && c > 0 && f > 0))
		ft_putchar('/');
	else if ((c == 0 && f == y -1) || (c == rx && f == 0))
		ft_putchar('\\');
	if ((c > 0 && c < rx && f == 0) || (c > 0 && c < rx && f == y -1))
		ft_putchar('*');
	if ((f < y - 1 && f > 0) && (c == 0 || c == rx))
		ft_putchar('*');
	if ((c < rx && c > 0) && (f < y - 1 && f > 0))
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	c;
	int	f;

	c = 0;
	f = 0;
	while (f <= y - 1)
	{
		while (c <= x - 1)
		{
			impresion(x, y, c, f);
			c++;
		}
		ft_putchar('\n');
		c = 0;
		f++;
	}
}
