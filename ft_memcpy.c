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

//#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr_dest;
	const unsigned char	*ptr_src;

	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	while (n--)
		*(ptr_dest++) = *(ptr_src++);
	return (dest);
}
/*
int	main(void)
{
	char test1[] = "ABCDE";
	char test2[] = "12345";
	char test3[] = "HELLO";

	printf("Test 1 : %s (expected: 12345)\n",
		(char *)ft_memcpy(test1, "12345", 6));
	printf("Test 2 : %s (expected: undefined)\n",
		(char *)ft_memcpy(test2 + 1, test2, 3));
	printf("Test 3 : %s (expected: HELLO)\n",
		(char *)ft_memcpy(test3, "WORLD", 0));
	return (0);
}*/
