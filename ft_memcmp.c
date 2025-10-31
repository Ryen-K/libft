/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamkoum <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:39:28 by rkamkoum          #+#    #+#             */
/*   Updated: 2025/10/19 15:39:30 by rkamkoum         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}
/*
int     main(void)
{
        printf("result = %d (exp 0) \n", ft_memcmp("hello1", "hello2", 3));
        printf("result = %d (exp pos)\n", ft_memcmp("hello7", "hello2", 6));
        printf("result = %d (exp neg)\n", ft_memcmp("hello1", "hello2", 12));
        printf("result = %d (exp 0) \n", ft_memcmp("hello", "hello", 5));
        return (0);
}
*/
