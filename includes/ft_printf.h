/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamkoum <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 18:20:41 by rkamkoum          #+#    #+#             */
/*   Updated: 2025/11/17 23:53:50 by rkamkoum         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "libft.h"

int	ft_printf(const char *format, ...);

int	ft_print_char(int c);
int	ft_print_str(char *str);
int	ft_print_x(unsigned int num, int c);
int	ft_print_p(unsigned long long ptr);
int	ft_print_d_i(int num);
int	ft_print_u(unsigned int num);

#endif
