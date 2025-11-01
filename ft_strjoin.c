/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamkoum <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:42:00 by rkamkoum          #+#    #+#             */
/*   Updated: 2025/10/19 15:42:02 by rkamkoum         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_1;
	size_t	len_2;
	char	*dest;

	if (!s1 || !s2)
		return (NULL);
	len_1 = ft_strlen(s1);
	len_2 = ft_strlen(s2);
	dest = ft_calloc(len_1 + len_2 + 1, sizeof(char));
	if (!dest)
		return (NULL);
	ft_memcpy(dest, s1, len_1);
	ft_memcpy(dest + len_1, s2, len_2);
	return (dest);
}
/*
int	main(void)
{
	printf("%s \n", ft_strjoin("foo ", "bar"));
	return (0);
}*/
