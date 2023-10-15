/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:02:15 by acandela          #+#    #+#             */
/*   Updated: 2023/10/15 13:09:32 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include "libftprintf.h"
# include <stdlib.h>

int	ft_printf(char const *str, ...);
int	ft_itoa_print(int n);
int	ft_itoa_printu(int n);
int	ft_itoa_printx(int n);
int	ft_itoa_printxm(int n);
int	ft_itoa_printptr(void *ptr);
int	ft_putchar_print(char c);
int	ft_putstr_print(char *s);
int	ft_putstr_s(char *s);

#endif
