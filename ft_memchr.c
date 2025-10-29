/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamkoum <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:39:07 by rkamkoum          #+#    #+#             */
/*   Updated: 2025/10/19 15:39:08 by rkamkoum         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;

	p = s;
	while (n--)
	{
		if (*p == (unsigned char)c)
			return ((void *)p);
		p++;
	}
	return (0);
}
/*
int     main(void)
{
        char    str[] = "hello";
        char    ch = 'z';
        char    *res;

        res = ft_memchr(str, ch, 5);
	if (res)
		printf("first occ of %c is %s\n", ch, res);
        else
		printf("%c not found in %s \n", ch, str);
	return (0);
}*/
