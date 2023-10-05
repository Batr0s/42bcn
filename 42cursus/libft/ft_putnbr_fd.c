/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:15:21 by acandela          #+#    #+#             */
/*   Updated: 2023/10/05 16:28:23 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

static void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

static void	patito(int fd)
{
	write(fd, "-2147483648", 11);
}

void	ft_putnbr_fd(int n, int fd)
{
	int	i;

	if (n == -2147483648)
		patito(fd);
	else
	{
		if (n < 0)
		{
			n = -n;
			ft_putchar('-', fd);
		}
		i = 0;
		if (n >= 10)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putnbr_fd(n % 10, fd);
		}
		else if (n < 10)
			ft_putchar(n + 48, fd);
	}
}
/*
int	main(void)
{
	int num = -987441;
	ft_putnbr_fd(-2147483648, 4);
}*/