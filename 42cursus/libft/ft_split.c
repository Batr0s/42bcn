/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:25:22 by acandela          #+#    #+#             */
/*   Updated: 2023/10/05 16:28:50 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_cntwds(char const *s, char c)
{
	int	i;
	int	num_words;

	i = 0;
	num_words = 0;
	while (s[i])
	{
		if (i && s[i] == c && s[i - 1] != c)
			num_words++;
		i++;
	}
	if ((i > 0) && s[i - 1] != c)
		num_words++;
	return (num_words);
}

static void	ft_free(char **split, int numw)
{
	while (numw >= 0)
	{
		free(split[numw]);
		numw--;
	}
	free(split);
}

static char	*ft_splitstr(const char *s, int start, int end)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc(end + 1);
	if (str == NULL)
		return (NULL);
	while (i < end)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}

static char	**ft_itsplit(char **split, char const *s, char c)
{
	size_t	start;
	size_t	end;
	int		numw;

	start = 0;
	numw = 0;
	while (numw != ft_cntwds(s, c))
	{
		while (s[start] == c)
			start++;
		end = 0;
		while (s[start + end] && s[start + end] != c)
			end++;
		split[numw] = ft_splitstr(s, start, end);
		if (split[numw] == NULL)
		{
			ft_free(split, numw);
			return (NULL);
		}
		start += end;
		numw++;
	}
	split[ft_cntwds(s, c)] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		maxwords;

	if (s == NULL)
		return (NULL);
	maxwords = ft_cntwds(s, c);
	split = malloc(sizeof(char *) * (maxwords + 1));
	if (split == NULL)
		return (NULL);
	split = ft_itsplit(split, s, c);
	return (split);
}
/*
int	main(void)
{
	char	**string;

	string = ft_split("  hola que ", ' ');
	printf("%s\n", string[0]);
	printf("%s\n", string[1]);
	printf("%s\n", string[2]);
	printf("%s\n", string[3]);
	printf("%s\n", string[4]);
}
*/
