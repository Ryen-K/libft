/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamkoum <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 18:45:22 by rkamkoum          #+#    #+#             */
/*   Updated: 2025/11/17 23:56:00 by rkamkoum         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	count_utoa(unsigned int num)
{
	int	len;

	len = 0;
	if (num == 0)
		return (1);
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*utoa(unsigned int num)
{
	int		len;
	char	*dest;

	if (num == 0)
		return (ft_strdup("0"));
	len = count_utoa(num);
	dest = ft_calloc(len + 1, sizeof(char));
	if (!dest)
		return (NULL);
	while (num > 0)
	{
		dest[len - 1] = num % 10 + '0';
		len--;
		num /= 10;
	}
	return (dest);
}

int	ft_print_u(unsigned int num)
{
	int		count;
	char	*s;

	count = 0;
	s = utoa(num);
	if (!s)
		return (0);
	ft_putstr_fd(s, 1);
	count = ft_strlen(s);
	free(s);
	return (count);
}
