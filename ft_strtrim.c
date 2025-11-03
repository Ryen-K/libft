/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamkoum <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:42:22 by rkamkoum          #+#    #+#             */
/*   Updated: 2025/11/03 14:32:35 by rkamkoum         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	verif(char input, const char *set)
{
	size_t	index;

	index = 0;
	while (set[index])
	{
		if (set[index] == input)
			return (1);
		index++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*dest;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && verif(s1[start], set))
		start++;
	if (s1[start] == '\0')
		return (ft_strdup(""));
	end = ft_strlen(s1);
	while (end > start && verif(s1[end - 1], set))
		end--;
	dest = ft_calloc(end - start + 1, sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (start < end)
		dest[i++] = s1[start++];
	return (dest);
}
