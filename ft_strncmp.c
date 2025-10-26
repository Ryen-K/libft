/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamkoum <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:38:44 by rkamkoum          #+#    #+#             */
/*   Updated: 2025/10/19 15:38:46 by rkamkoum         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && s1[i] && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int	main(void)
{
	printf("result = %d (exp 0) \n", ft_strncmp("hello1", "hello2", 3));
	printf("result = %d (exp pos)\n", ft_strncmp("hello7", "hello2", 6));
	printf("result = %d (exp neg)\n", ft_strncmp("hello1", "hello2", 12));
	printf("result = %d (exp 0) \n", ft_strncmp("hello", "hello", 5));
	return (0);
}*/
