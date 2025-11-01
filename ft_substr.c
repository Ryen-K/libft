/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamkoum <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:41:41 by rkamkoum          #+#    #+#             */
/*   Updated: 2025/10/19 15:41:44 by rkamkoum         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	src_len;
	size_t	i;
	char	*dest;

	if (!s)
		return (NULL);
	src_len = ft_strlen(s);
	if ((size_t)start >= src_len)
		return (ft_strdup(""));
	if (start + len > src_len)
		len = src_len - start;
	dest = ft_calloc(len + 1, sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest[i] = s[start + i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	printf("result: %s\n", ft_substr("this is a test", 10, 4));
	printf("result: %s\n", ft_substr("this is a test", 13, 4));
	printf("result: %s\n", ft_substr("this is a test", 15, 4));	
	printf("result: %s\n", ft_substr("this is a test", 2, 15));
	return (0);
}*/
