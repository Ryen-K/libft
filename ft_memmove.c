/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamkoum <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:36:05 by rkamkoum          #+#    #+#             */
/*   Updated: 2025/10/19 15:36:08 by rkamkoum         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

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
/*
int	main(void)
{
	char a[] = "12345";
	char b[] = "ABCDE";

	printf("Test 1 : %s\n", (char *)ft_memmove(b, a, 5));
	char c[] = "12345";
	printf("Test 2 : %s\n", (char *)ft_memmove(c + 1, c, 3));
	char d[] = "ABCDE";
	printf("Test 3 : %s\n", (char *)ft_memmove(d, d + 2, 3));
	char e[] = "HELLO";
	printf("Test 4 : %s\n", (char *)ft_memmove(e, "WORLD", 0));
	return (0);
}*/
