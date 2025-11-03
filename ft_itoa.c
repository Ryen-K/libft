/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamkoum <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:42:55 by rkamkoum          #+#    #+#             */
/*   Updated: 2025/11/03 14:34:23 by rkamkoum         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*dest;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	len = count(n);
	dest = ft_calloc(len + 1, sizeof(char));
	if (!dest)
		return (NULL);
	if (n < 0)
	{
		dest[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		dest[len - 1] = n % 10 + '0';
		len--;
		n /= 10;
	}
	return (dest);
}
