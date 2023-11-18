/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:34:41 by acandela          #+#    #+#             */
/*   Updated: 2023/11/18 16:24:01 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = lst[0];
	lst[0] = new;
}
/*
#include <stdio.h>
int	main(void)
{
	char	*c;
	char	letra;
	char	*c2;
	char	letra2;
	t_list	*new;
	t_list	*new2;
	t_list	**lst;

	letra = 'a';
	letra2 = 'w';
	c = &letra;
	c2 = &letra2;
	new = ft_lstnew(c);
	new2 = ft_lstnew(c2);
	lst = malloc(sizeof(t_list *)*2);
	lst[0] = new;
	ft_lstadd_front(lst, new2);
	printf("%c", *(char *)lst[0]->content);
	printf("%c", *(char *)(lst[0]->next)->content);
}
*/