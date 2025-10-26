/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamkoum <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:38:13 by rkamkoum          #+#    #+#             */
/*   Updated: 2025/10/19 15:38:16 by rkamkoum         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return ((char *)s + len);
		len--;
	}
	return (0);
}
/*
int	main(void)
{
        char    *str = "abcdefghijklmnopqrstuvwxyz";
        char    ch = 'l';
        char    *res;

        res = ft_strrchr(str, ch);
        printf("last occ of '%c':  %s\n", ch, res);
        return (0);
}*/
