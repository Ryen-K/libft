/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamkoum <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 13:25:30 by rkamkoum          #+#    #+#             */
/*   Updated: 2025/10/18 13:39:00 by rkamkoum         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("-1 -> %d (expected 0)\n", ft_isprint(-1));
    printf("31 -> %d (expected 0)\n", ft_isprint(31));
    printf("100 -> %d (expected 1)\n", ft_isprint(100));
    printf("127 -> %d (expected 0)\n", ft_isprint(127));
    printf("128 -> %d (expected 0)\n", ft_isprint(128));
	return (0);
}*/
