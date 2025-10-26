/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamkoum <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:36:28 by rkamkoum          #+#    #+#             */
/*   Updated: 2025/10/19 15:36:31 by rkamkoum         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	i;

	i = 0;
	if (dsize == 0)
		return (ft_strlen(src));
	while (src[i] && i < dsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
int main(void)
{
	char	src[] = "bonjour";
	char	dest1[10];
	char	dest2[4];
	size_t	ret;

	ret = ft_strlcpy(dest1, src, sizeof(dest1));
	printf("src= '%s' \n", src);
	printf("dest1= '%s' \n", dest1);
	printf("ret= %zu & len of src= %zu \n", ret, ft_strlen(src));

	ret = ft_strlcpy(dest2, src, sizeof(dest2));
	printf("src= '%s' \n", src);
        printf("dest2= '%s' \n", dest2);
        printf("ret= %zu & len of src= %zu \n", ret, ft_strlen(src));
	
        ret = ft_strlcpy(dest1, src, 0);
        printf("src= '%s' \n", src);
        printf("dest2= '%s' \n", dest1);
        printf("ret= %zu & len of src= %zu \n", ret, ft_strlen(src));

	return(0);
}*/
