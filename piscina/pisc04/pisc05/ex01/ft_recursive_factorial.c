/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 09:39:23 by acandela          #+#    #+#             */
/*   Updated: 2023/08/29 09:47:21 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	fact;
	int	result;

	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	result = ft_recursive_factorial(nb - 1);
	fact = nb * result;
	return (fact);
}
/*
int main (void)
{
  int result;
  
  result = ft_recursive_factorial(8);
  printf("%d\n", result);
}*/
