/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:43:11 by acandela          #+#    #+#             */
/*   Updated: 2023/08/30 12:05:07 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	result;

	result = 1;
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	if (nb < 0)
		nb = -nb;
	while ((nb != result * result) && (nb > result * result) && result < 46341)
		result++;
	if (nb % (result * result) != 0)
		return (0);
	else
		return (result);
}
/*
int main(void)
{
    int result;
    
    result = ft_sqrt(2147483647);
    printf("%d", result);
}*/
