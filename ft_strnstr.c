/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamkoum <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:39:43 by rkamkoum          #+#    #+#             */
/*   Updated: 2025/10/19 15:39:47 by rkamkoum         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		while (i + j < len && big[i + j] && little[j] == big[i + j])
		{
			if (little[j + 1] == '\0')
				return ((char *)(big + i));
			j++;
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	test_str[] = "this is an example";

	printf("%s", ft_strnstr(test_str, "example", 12));
	return (0);
}*/
