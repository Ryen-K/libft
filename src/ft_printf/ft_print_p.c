/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamkoum <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 18:43:34 by rkamkoum          #+#    #+#             */
/*   Updated: 2025/11/17 23:55:14 by rkamkoum         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_p(unsigned long long ptr)
{
	char	buffer[17];
	char	*base;
	int		i;
	int		count;

	if (!ptr)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	base = "0123456789abcdef";
	count = 2;
	i = 0;
	ft_putstr_fd("0x", 1);
	while (ptr > 0)
	{
		buffer[i++] = base[ptr % 16];
		ptr /= 16;
	}
	while (i > 0)
	{
		ft_putchar_fd(buffer[--i], 1);
		count++;
	}
	return (count);
}
