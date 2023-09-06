/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 09:06:57 by acandela          #+#    #+#             */
/*   Updated: 2023/08/15 12:28:25 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	ia;
	int	ib;

	ia = *a;
	ib = *b;
	*a = ib;
	*b = ia;
}
/*
int	main(void)
{
	int numa, numb;
	int *pta, *ptb;

	pta = &numa;
	ptb = &numb;
	numa = '1';
	numb = '7';
	ft_swap(pta, ptb);
}*/
