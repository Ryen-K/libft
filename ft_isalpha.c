/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamkoum <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:39:14 by rkamkoum          #+#    #+#             */
/*   Updated: 2025/10/18 12:01:43 by rkamkoum         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
/*
int main(void)
{
	printf("for '1' expected 0 -> %d \n", ft_isalpha('1'));
	printf("for 'a' expected 1 -> %d \n", ft_isalpha('a'));
	printf("for 6 expected 0 -> %d \n", ft_isalpha(6));
	printf("for 120  expected 1 -> %d \n", ft_isalpha(120));
	printf("for '/' expected 0 -> %d \n", ft_isalpha('/'));
	printf("for 666 expected 0 -> %d \n", ft_isalpha(666));
	printf("for -6 expected 0 -> %d \n", ft_isalpha(-6));


	
	return (0);
}
*/
