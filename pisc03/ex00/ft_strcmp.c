/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 12:10:26 by acandela          #+#    #+#             */
/*   Updated: 2023/08/23 08:56:30 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	diff;
	int	i;

	i = 0;
	diff = 0;
	while ((s1[i] != 0) && (s2[i] != 0) && (s1[i] == s2[i]))
	{
		i++;
	}
	diff = s1[i] - s2[i];
	return (diff);
}
/*
int main(void)
{
	char s1[] = "aA";
    char s2[] = "aa";
    int result;
    //result = ft_strcmp(s1, s2);
	result = strcmp(s1, s2);
    printf("%d", result);
}*/
