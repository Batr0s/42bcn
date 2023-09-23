/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:48:47 by acandela          #+#    #+#             */
/*   Updated: 2023/09/23 18:06:14 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trim;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]) != NULL)
		start++;
	while (ft_strrchr(set, s1[end]) != NULL && end != 0)
		end--;
	trim = ft_substr(s1, start, end - start + 1);
	if (trim == 0)
		return (0);
	else
		return (trim);
}
/*
int	main(void)
{
	ft_strtrim("", "");
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trim;

	start = 0;
	while (s1[start] && ft_strchr(s1, set[start]) != NULL)
		start++;
	end = ft_strlen(s1);
	while (ft_strrchr(s1, set[end - 1]) != NULL)
		end--;
	trim = ft_substr(s1, start, end - start + 1);
	return (trim);
}
*/