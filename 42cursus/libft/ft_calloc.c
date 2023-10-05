/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:06:23 by acandela          #+#    #+#             */
/*   Updated: 2023/10/04 13:26:55 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Allocates enought space for 'count' parameter with size 'size'.
If size is 0 then malloc function will return NULL because it will lead to
an allocation error. In that case I have protected my function ft_calloc 
returning NULL.
The allocated memmory is filled with bytes of value 0.
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
#include <stdio.h>
int main(void)
{
	int size = 8539;
	
    void * d1 = ft_calloc(size, sizeof(int));
    void * d2 = calloc(size, sizeof(int));
	
	int result = ft_memcmp(d1, d2, size * sizeof(int));
	printf("%d", result);
}
*/