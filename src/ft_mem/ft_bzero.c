/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamkoum <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 17:08:35 by rkamkoum          #+#    #+#             */
/*   Updated: 2025/11/03 15:49:29 by rkamkoum         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*res;
	size_t			i;

	i = 0;
	res = (unsigned char *)s;
	while (i < n)
	{
		res[i] = 0;
		i++;
	}
}
