/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 09:27:33 by acandela          #+#    #+#             */
/*   Updated: 2023/08/29 09:49:16 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	result = nb * (nb - 1);
	nb--;
	while (nb > 1)
	{
		result *= (nb - 1);
		nb--;
	}
	return (result);
}
/*
int main(void)
{
  int result;

  result = ft_iterative_factorial(10);
}*/
