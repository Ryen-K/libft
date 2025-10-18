/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamkoum <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 14:26:54 by rkamkoum          #+#    #+#             */
/*   Updated: 2025/10/18 14:29:14 by rkamkoum         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}
/*
int	main(void)
{
	printf("'A' -> %c\n", ft_toupper('a'));
	printf("' ' -> %c\n", ft_toupper(' '));
	printf("'' -> %c\n", ft_toupper(0));
	return (0);
}*/
