/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamkoum <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:05:13 by rkamkoum          #+#    #+#             */
/*   Updated: 2025/10/18 12:16:18 by rkamkoum         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
/*
int main(void)
{
	printf("'1'-> %d\n", ft_isdigit('1'));
	printf("1 -> %d\n", ft_isdigit(1));
	return (0);
}
*/
