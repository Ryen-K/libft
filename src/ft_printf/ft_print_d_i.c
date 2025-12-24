/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d_i.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamkoum <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 18:44:59 by rkamkoum          #+#    #+#             */
/*   Updated: 2025/11/17 23:54:49 by rkamkoum         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_d_i(int num)
{
	int		count;
	char	*s;

	count = 0;
	s = ft_itoa(num);
	if (!s)
		return (0);
	ft_putstr_fd(s, 1);
	count = ft_strlen(s);
	free(s);
	return (count);
}
