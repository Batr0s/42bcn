/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 13:16:36 by acandela          #+#    #+#             */
/*   Updated: 2023/08/28 15:35:14 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	patito(void)
{
	write(1, "-2147483648", 11);
}

int	error(char *base)
{
	int		j;
	int		i;
	int		rep;
	char	temp;

	j = 0;
	i = 0;
	while (base[j] != 0)
	{
		temp = base[j];
		rep = 0;
		while (base[i] != 0)
		{
			if (temp == base[i])
				rep++;
			if (rep > 1 || base[j] == '+' || base[j] == '-')
				return (1);
			i++;
		}
		i = 0;
		j++;
	}
	return (0);
}

void	ft_putnbr(int nb, char *base, int nbase)
{
	if (nb == -2147483648)
		patito();
	else
	{
		if (nb < 0)
		{
			nb = -nb;
			ft_putchar ('-');
		}
		if (nb >= nbase)
		{
			ft_putnbr(nb / nbase, base, nbase);
			ft_putnbr(nb % nbase, base, nbase);
		}
		else if (nb < nbase)
		{
			if (nb >= '0' && nb <= '9')
				ft_putchar (nb + 48);
			else
				ft_putchar(base[nb]);
		}
	}
}

void	ft_putnbr_base(int nb, char *base)
{
	int	nbase;
	int	fail;

	fail = error(base);
	nbase = 0;
	while (base[nbase] != 0)
		nbase++;
	if (nbase != 0 && nbase != 1 && fail != 1)
		ft_putnbr(nb, base, nbase);
}
/*
int	main(void)
{
  char base[] = "poniguay";
  int nb = 1;
  ft_putnbr_base(nb, base);
}*/
