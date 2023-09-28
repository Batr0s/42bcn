/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:25:22 by acandela          #+#    #+#             */
/*   Updated: 2023/09/28 18:08:44 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
ft_cntwds counts the number of words inside 's' taking into account
the separator and the posibility that the pointer 's' could be an empty string
or be a pointer to NULL.

ft_free uses free function in every char * inside the char ** and also with
the char **. And it's used below the malloc(char **) and below the ft_substr.

ft_itsplit iterates 's' pointer and if it finds a separator or the end of the
string 's', then uses ft_substr function to create an char * with the same size
of the word finishing in '\0'. When finds a separator or null 'start' updates
its value.
*/

int	ft_cntwds(char const *s, char c)
{
	int	i;
	int	num_words;

	i = 0;
	num_words = 0;
	if (s == NULL || *s == '\0')
		return (0);
	while (s[i])
	{
		if (i && s[i] == c && s[i - 1] != c)
			num_words++;
		i++;
	}
	if (s[i - 1] != c && (i > 0))
		num_words++;
	return (num_words);
}

void	ft_free(char **split, size_t numw)
{
	while (numw > 0)
	{
		free(split[numw]);
		numw--;
	}
	free(split);
}

char	**ft_itsplit(char **split, char const *s, char c)
{
	size_t	start;
	size_t	i;
	size_t	numw;

	start = 0;
	i = 0;
	numw = 0;
	while (i < ft_strlen(s) + 1)
	{
		if (s[i] == c || s[i] == '\0')
		{
			if (i > start)
			{
				split[numw++] = ft_substr(s, start, i - start);
				if (split[numw - 1] == NULL)
				{
					ft_free(split, numw - 1);
					return (NULL);
				}
			}
			start = i + 1;
		}
		i++;
	}
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		numwords;

	numwords = ft_cntwds(s, c);
	split = malloc(sizeof(char *) * (numwords + 1));
	if (split == NULL)
		return (NULL);
	split = ft_itsplit(split, s, c);
	split[numwords] = 0;
	return (split);
}
/*
int	main(void)
{
	char	**string;

	string = ft_split("", ' ');
	printf("%s\n", string[0]);
	printf("%s\n", string[1]);
	printf("%s\n", string[2]);
	printf("%s\n", string[3]);
	printf("%s\n", string[4]);
}
*/
