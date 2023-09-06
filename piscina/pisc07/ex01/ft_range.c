/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 12:30:53 by acandela          #+#    #+#             */
/*   Updated: 2023/08/31 15:45:10 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	n;
	int	i;

	max -= 1;
	i = 0;
	n = max - min;
	result = (int *) malloc(4 * n);
	while (min <= max)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (result);
}
/*
int main(void)
{
	int *result = ft_range(-5, 20);
	int i = 0;
	int n = 20 - -5;
	while (i < n)
	{
		printf("%d\n", result[i]);
		i++;
	}
}*/
