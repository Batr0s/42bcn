/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:06:23 by acandela          #+#    #+#             */
/*   Updated: 2023/09/21 17:52:57 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

/*
Allocates enought space for 'count' parameter, and it's size is 'size'.
If size is 0 then malloc function will return NULL because it will lead to
an allocation error. In that case I have protected my function ft_calloc 
returning NULL in that case. (if I did not, it can be problematic).
*/

void	*ft_calloc(size_t count, size_t size)
{
	void		*ret;

	ret = malloc(count * size);
	if (ret == NULL)
		return (NULL);
	ft_bzero(ret, count * size);
	return (ret);
}
/*
int main(void)
{
	int size = 8539;
 
        void * d1 = ft_calloc(size, sizeof(int));
        void * d2 = calloc(size, sizeof(int));
	int result = ft_memcmp(d1, d2, size * sizeof(int));
	printf("%d", result);
}


void	*ft_calloc(size_t count, size_t size)
{
	int		*ret;
	size_t	i;

	ret = malloc(count * size);
	if (ret == NULL)
		return (NULL);
	i = 0;
	while (i < count)
	{
		ret[i] = 0;
		i++;
	}
	return ((void *)ret);
}
*/