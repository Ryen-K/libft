/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamkoum <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:36:45 by rkamkoum          #+#    #+#             */
/*   Updated: 2025/10/19 15:36:48 by rkamkoum         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

//#include <bsd/string.h>
//#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = 0;
	if (dsize <= len_dst)
		return (len_src + dsize);
	while (src[i] && len_dst + i < dsize - 1)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}
/*
int main(void)
{
        char dst1b[100] = "1234";
	char dst1a[100] = "1234";
        char src1[100] = "ABCD";
    	char dst2[100] = "1234";
    	char src2[100] = "ABCD";

    	printf("// dst = %s\n", dst1a);
	printf("// src = %s\n", src1);
        printf("size = 7, result = %zu, expected 8\n", 
		ft_strlcat(dst1a, src1, 7));
	printf("size = 7, result = %zu, expected 8\n", 
		strlcat(dst1b, src1, 7));
        printf("// dst = %s\n", dst1b);
        printf("// src = %s\n", src1);
        printf("size = 2, result = %zu, expected 6\n", 
		ft_strlcat(dst2, src2, 2));
	printf("size = 2, result = %zu, expected 6\n", 
		strlcat(dst2, src2, 2));
        printf("// dst = %s\n", dst2);
        printf("// src = %s\n", src2);
        return (0);
}*/
