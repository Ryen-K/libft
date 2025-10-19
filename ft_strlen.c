/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamkoum <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 13:40:16 by rkamkoum          #+#    #+#             */
/*   Updated: 2025/10/19 15:14:05 by rkamkoum         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*
int	main(void)
{
	printf("%lu \n",ft_strlen(""));
    printf("%lu \n",ft_strlen("driss"));
    printf("%lu \n",ft_strlen("six-cent-soixante-six"));
    printf("%lu \n",ft_strlen("j'suis a court d'idees"));
	return (0);
}*/
