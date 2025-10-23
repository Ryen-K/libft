/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamkoum <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:35:41 by rkamkoum          #+#    #+#             */
/*   Updated: 2025/10/19 15:35:43 by rkamkoum         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_dest;
	const unsigned char	*ptr_src;

	ptr_dest = (unsigned char*)dest;
	ptr_src = (unsigned char*)src;
	while (n--)
		*(ptr_dest++) = *(ptr_src++);
	return (dest);
}
