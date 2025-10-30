/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamkoum <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:40:27 by rkamkoum          #+#    #+#             */
/*   Updated: 2025/10/19 15:40:29 by rkamkoum         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	res;
	void	*ptr;

	res = nmemb * size;
	ptr = malloc(res);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, res);
	return (ptr);
}
/*
int	main(void)
{
	int	*t1 = ft_calloc(5, sizeof(int));
	char	*t2 = ft_calloc(10, sizeof(char));
	double	*t3 = ft_calloc(3, sizeof(double));
	void	*t4 = ft_calloc(0, sizeof(int));
	int 	i = 0;
	
	printf("t1 (5 * int):\n");
	while (i < 5)
	{
		printf("%d \n", t1[i]);
		i++;
	}
	i = 0;
	printf("t2 (10 * char):\n");
	while (i < 10)
	{
		printf("%d \n", t2[i]);
		i++;
	}
	printf("t3 (3 * double):\n");
	i = 0;
	while (i < 3)
	{
		printf("%.1f \n", t3[i]);
		i++;
	}
	printf("t4 (0 * int): %p\n", t4);
	free(t1);
	free(t2);
	free(t3);
	free(t4);
	return (0);
}*/
