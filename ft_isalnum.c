/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamkoum <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:18:43 by rkamkoum          #+#    #+#             */
/*   Updated: 2025/10/18 12:33:24 by rkamkoum         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("-1 -> %d\n", ft_isalnum(-1));
    printf("1 -> %d\n", ft_isalnum(1));
    printf("120 -> %d\n", ft_isalnum(120));
    printf("660 -> %d\n", ft_isalnum(660));
    printf("'/' -> %d\n", ft_isalnum('/'));
	return (0);
}
*/
