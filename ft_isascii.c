/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamkoum <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:37:13 by rkamkoum          #+#    #+#             */
/*   Updated: 2025/10/19 15:23:11 by rkamkoum         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("-1 -> %d\n", ft_isascii(-1));
    printf("1 -> %d\n", ft_isascii(1));
    printf("120 -> %d\n", ft_isascii(120));
    printf("660 -> %d\n", ft_isascii(660));
    printf("'/' -> %d\n", ft_isascii('/'));
	return (0);
}*/
