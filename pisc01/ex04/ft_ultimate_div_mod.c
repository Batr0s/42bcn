/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 11:38:09 by acandela          #+#    #+#             */
/*   Updated: 2023/08/13 11:50:54 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	numa;
	int	numb;

	numa = *a;
	numb = *b;
	*a = numa / numb;
	*b = numa % numb;
}
/*
int	main(void)
{
	
}*/
