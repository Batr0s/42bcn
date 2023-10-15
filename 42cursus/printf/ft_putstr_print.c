/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:13:07 by acandela          #+#    #+#             */
/*   Updated: 2023/10/15 13:14:55 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <unistd.h>

int	ft_putstr_print(char *s)
{
	int	i;

	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (-1);
	}
	i = 0;
	while (s[i] != '\0')
	{
		if (ft_putchar_print(s[i]) == -1)
			return (-1);
		i++;
	}
	return (i);
}
