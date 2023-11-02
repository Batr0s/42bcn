/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:49:58 by acandela          #+#    #+#             */
/*   Updated: 2023/11/02 11:34:13 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "stdio.h"

static int	ft_strlcpy(char *dest, char *src, int dstsize)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	if (dstsize == 0)
		return (i);
	while ((dstsize > j + 1) && src[j])
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = 0;
	return (i);
}

static int	ft_strlcat(char *dest, char *src, int dstsize)
{
	int	i;
	int	lensrc;
	int	lendest;
	int	result;

	if (dest == NULL || src == NULL)
		lensrc = ft_strlen(src);
	lendest = ft_strlen(dest);
	i = 0;
	if (dstsize < lendest)
		return (lensrc + dstsize);
	else
		result = lendest + lensrc;
	while (src[i] && lendest + 1 < dstsize)
		dest[lendest++] = src[i++];
	dest[lendest] = '\0';
	return (result);
}

int	ft_strlen(char *s)
{
	int	i;

	if (s == NULL)
		return (-1);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	char	*str;

	if (s == NULL)
		return (NULL);
	str = (char *)s;
	while (*str != 0)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if ((*str == '\0') && ((char)c == '\0'))
		return ((char *)str);
	else
		return (NULL);
}

char	*ft_strjoin(char *next_line, char *buffer)
{
	int		strlen;
	char	*join_line;

	if (buffer == NULL)
		return (NULL);
	if (next_line == NULL)
	{
		next_line = malloc(sizeof(char *) * 1);
		if (next_line == NULL)
			return (NULL);
		next_line[0] = '\0';
	}
	strlen = ft_strlen(next_line) + ft_strlen(buffer);
	join_line = malloc(strlen + 1);
	if (join_line == NULL)
	{
		free(next_line);
		return (NULL);
	}
	ft_strlcpy(join_line, next_line, ft_strlen(next_line) + 1);
	ft_strlcat(join_line, buffer, strlen + 1);
	free(next_line);
	next_line = NULL;
	return (join_line);
}
