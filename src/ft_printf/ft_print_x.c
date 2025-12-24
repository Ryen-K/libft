/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamkoum <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 18:46:27 by rkamkoum          #+#    #+#             */
/*   Updated: 2025/11/17 23:56:27 by rkamkoum         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*set_base(int c)
{
	char	*base;

	if (c == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	return (base);
}

int	ft_print_x(unsigned int arg, int c)
{
	int		i;
	int		count;
	char	*base;
	char	buffer[9];

	count = 0;
	i = 0;
	if (arg == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	base = set_base(c);
	while (arg > 0)
	{
		buffer[i++] = base[arg % 16];
		arg /= 16;
	}
	while (i > 0)
	{
		ft_putchar_fd(buffer[--i], 1);
		count++;
	}
	return (count);
}
