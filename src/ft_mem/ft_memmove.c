/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamkoum <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:36:05 by rkamkoum          #+#    #+#             */
/*   Updated: 2025/11/03 15:51:14 by rkamkoum         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr_dest;
	const unsigned char	*ptr_src;

	ptr_dest = (unsigned char *)dest;
	ptr_src = (const unsigned char *)src;
	if (!src && !dest)
		return (dest);
	if (src < dest)
	{
		while (n--)
			ptr_dest[n] = ptr_src[n];
	}
	else
	{
		while (n--)
			*(ptr_dest++) = *(ptr_src++);
	}
	return (dest);
}
