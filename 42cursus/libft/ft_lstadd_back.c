/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:43:19 by acandela          #+#    #+#             */
/*   Updated: 2023/11/18 16:25:24 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	if (lst[0] == NULL)
	{
		lst[0] = new;
	}
	else
	{
		node = lst[0];
		while (node->next)
		{
			node = node->next;
		}
		node->next = new;
	}
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
	lst[0] = new2;
	// ft_lstadd_front(lst, new2);
	// printf("%c", *(char *)lst[0]->content);
	// printf("%c", *(char *)(lst[0]->next)->content);
	ft_lstadd_back(lst, new);
	printf("%c", *(char *)lst[0]->content);
	printf("%c", *(char *)(lst[0]->next)->content);
}
*/