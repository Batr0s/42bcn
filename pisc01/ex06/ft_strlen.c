/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:28:20 by acandela          #+#    #+#             */
/*   Updated: 2023/08/14 12:43:33 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	letras;

	letras = 0;
	while (*str != '\0')
	{
		letras = letras + 1;
		str = str + 1;
	}
	return (letras);
}
