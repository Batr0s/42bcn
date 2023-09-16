/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:39:21 by acandela          #+#    #+#             */
/*   Updated: 2023/08/29 16:40:39 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	while (nb % i != 0 && nb > i)
		i++;
	if (nb == i || nb == 2)
		return (1);
	else
		return (0);
}
/*
int main(void)
{
    int result;
    
    result = ft_is_prime(29);
    printf("%d", result);
}*/
