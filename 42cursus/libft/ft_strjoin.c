/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:59:41 by acandela          #+#    #+#             */
/*   Updated: 2023/09/22 18:09:21 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
strlcat and strlcpy the third parameter is destsize, that includes the size
of the '\0' character, because of that I have to increment 1 the result of
ft_strlen.
this function concats s1 and s2 and allocates enought memmory space.
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	strlen;
	char	*str;

	strlen = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(strlen + 1);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, (char *)s1, ft_strlen(s1) + 1);
	ft_strlcat(str, (char *)s2, strlen + 1);
	return (str);
}
