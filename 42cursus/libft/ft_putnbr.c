/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:33:26 by acandela          #+#    #+#             */
/*   Updated: 2023/10/10 16:38:40 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

static void	patito(void)
{
	write(1, "-2147483648", 11);
}

void	ft_putnbr(int n)
{
	int	i;

	if (n == -2147483648)
		patito();
	else
	{
		if (n < 0)
		{
			n = -n;
			ft_putchar('-');
		}
		i = 0;
		if (n >= 10)
		{
			ft_putnbr(n / 10);
			ft_putnbr(n % 10);
		}
		else if (n < 10)
			ft_putchar(n + 48);
	}
}

int	main(void)
{
	ft_putnbr(-2147483648);
}
