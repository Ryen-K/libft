/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamkoum <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 18:20:56 by rkamkoum          #+#    #+#             */
/*   Updated: 2025/11/17 23:57:09 by rkamkoum         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	f_handler(va_list args, const char *format)
{
	if (*format == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (*format == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (*format == 'p')
		return (ft_print_p((unsigned long long)va_arg(args, void *)));
	else if (*format == 'd' || *format == 'i')
		return (ft_print_d_i(va_arg(args, int)));
	else if (*format == 'u')
		return (ft_print_u(va_arg(args, unsigned int)));
	else if (*format == 'x' || *format == 'X')
		return (ft_print_x(va_arg(args, unsigned int), *format));
	else
		return (ft_print_char('%'));
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		total_len;
	int		i;

	va_start(args, format);
	total_len = 0;
	i = 0;
	if (!format)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				break ;
			i++;
			total_len += f_handler(args, &format[i]);
		}
		else
			total_len += ft_print_char(format[i]);
		i++;
	}
	va_end(args);
	return (total_len);
}
