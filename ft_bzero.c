/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamkoum <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 17:08:35 by rkamkoum          #+#    #+#             */
/*   Updated: 2025/10/18 18:59:30 by rkamkoum         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
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
/*
int	main(void)
{
	char	buffer[] = "test";
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	printf("before:\n");
	while (buffer[i])
	{
		printf("%zu: %c\n", i, buffer[i]);
		i++;
	}

	ft_bzero(buffer+2, sizeof(char) * 2);
	printf("after:\n");
	    while (buffer[j])
    {
        printf("%zu: %c\n", j, buffer[j]);
        j++;
    }
	return (0);
}*/
