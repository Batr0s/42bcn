/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:49:58 by acandela          #+#    #+#             */
/*   Updated: 2023/10/20 13:02:29 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	int		i;
	size_t	j;

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

static size_t	ft_strlcat(char *dest, char *src, size_t dstsize)
{
	int		i;
	size_t	lensrc;
	size_t	lendest;
	size_t	result;

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

int	ft_strlen(const char *s)
{
	int	i;

	if (s == NULL)
		return (-1);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;

	s2 = malloc(ft_strlen(s1) + 1);
	if (s2 == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

char	*ft_strchr(const char *s, int c)
{
	char	*str;

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
		return (0);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	strlen;
	char	*str;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	strlen = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(strlen + 1);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, (char *)s1, ft_strlen(s1) + 1);
	ft_strlcat(str, (char *)s2, strlen + 1);
	return (str);
}
