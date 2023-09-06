/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 13:14:24 by acandela          #+#    #+#             */
/*   Updated: 2023/08/28 17:47:12 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

// verifica que la base no tenga caracteres repetidos excepto '+' o '-'. 
// En ese caso devuelve 0.
int	error(char *base)
{
	int	j;
	int	i;
	int	rep;

	j = 0;
	while (base[j] != 0)
	{
		rep = 0;
		i = 0;
		while (base[i] != 0)
		{
			if (base[j] == base[i])
				rep++;
			if (rep > 1 && (base[j] != '+' || base[j] != '-'))
				return (1);
			i++;
		}
		j++;
	}
	if (j == 0 || j == 1)
		return (1);
	return (0);
}

// comprueba el char de str no este en isspace(3) ni sea '+' o '-'
// en el caso de que el caracter no este en la base, devuelve 0.
int	verificar(int i, int inicio, char *str, char *base)
{
	int	j;

	j = 0;
	if (((str[i] < 9 || str[i] > 13) && str[i] != 32) 
		&& (str[i] != '+' || str[i] != '-') && inicio == 0)
	{
		while (base[j] != 0)
		{
			if (str[i] == base[j])
				return (1);
			j++;
		}
		return (0);
	}
	else if (inicio == 1)
	{
		while (base[j] != 0)
		{
			if (str[i] == base[j])
				return (1);
			j++;
		}
	}
	return (0);
}

// consigue el valor en base decimal y lo devuelve
int	valor(int i, int power, char *base, char *str)
{
	int	nbase;
	int	result;

	result = 0;
	nbase = 0;
	while (base[nbase] != 0)
	{
		if (str[i] == base[nbase])
			result = result + (nbase * power);
		nbase++;
	}
	return (result);
}

int	bucle(int i, int exist, char *str, char *base)
{
	int	inicio;
	int	power;
	int	result;
	int	sizeb;

	power = 1;
	inicio = i;
	sizeb = 0;
	result = 0;
	while (base[sizeb] != 0)
		sizeb++;
	while (str[i] != 0 && exist == 1)
	{
		i++;
		exist = verificar(i, 1, str, base);
	}
	i--;
	while (i >= inicio)
	{
		result = result + valor(i, power, base, str);
		power *= sizeb;
		i--;
	}
	return (result);
}

// si encuentra '-' impar agrega un '-'.
// Si se encuentra con un caracter que NO esta en la base, retorna 0
// Si se encuentra con un caracter que SI esta en la base, entra en fn 'bucle'
int	ft_atoi(char *str, char *base)
{
	int	i;
	int	resta;
	int	exist;
	int	fail;

	fail = error(base);
	i = 0;
	resta = 0;
	while (str[i] != 0 && fail == 0)
	{
		exist = verificar(i, 0, str, base);
		if (exist == 0 && str[i] != '-' && str[i] != '+')
			return (0);
		if (str[i] == '-')
			resta++;
		if (exist == 1 && (resta % 2) == 1)
			return (-bucle(i, exist, str, base));
		else if (exist == 1 && (resta % 2) == 0)
			return (bucle(i, exist, str, base));
		i++;
	}
	return (0);
}

int	main(void)
{
  char base[] = "pony";
  char str[] = "yno";
  int result;

  result = ft_atoi(str, base);
  printf("%d", result);
}
