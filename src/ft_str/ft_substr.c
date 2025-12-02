/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamkoum <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:41:41 by rkamkoum          #+#    #+#             */
/*   Updated: 2025/11/03 14:30:21 by rkamkoum         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
