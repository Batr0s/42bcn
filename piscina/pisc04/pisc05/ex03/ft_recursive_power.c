/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 12:17:17 by acandela          #+#    #+#             */
/*   Updated: 2023/08/29 12:19:16 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	result = ft_recursive_power(nb, power - 1);
	result *= nb;
	return (result);
}
/*
int main(void)
{
  int result;
  
  result = ft_recursive_power(-2, 4);
  printf("%d\n", result);
}*/
