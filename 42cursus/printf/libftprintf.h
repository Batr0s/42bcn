/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:02:15 by acandela          #+#    #+#             */
/*   Updated: 2023/10/10 18:27:08 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include "libftprintf.h"
# include <stdlib.h>

int		ft_printf(char const *str, ...);
char	*ft_itoa(int n);
int		ft_itoa_cnt(int n);
int		ft_putchar_cnt(char c);
int		ft_putstr_cnt(char *s);

#endif
