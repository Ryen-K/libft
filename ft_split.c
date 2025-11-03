/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamkoum <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:42:37 by rkamkoum          #+#    #+#             */
/*   Updated: 2025/10/19 15:42:39 by rkamkoum         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (count);
}

static size_t	count_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char	**fill_arr(char **arr, char const *s, char c)
{
	size_t	i;
	size_t	len;
	size_t	start;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		len = 0;
		start = 0;
		while (s[i] == c && s[i])
			i++;
		start = i;
		len = count_len(&s[i], c);
		i += len;
		if (len > 0)
		{
			arr[count] = ft_substr(s, start, len);
			count++;
		}
	}
	arr[count] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**arr;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	arr = ft_calloc(words + 1, sizeof(char *));
	if (!arr)
		return (NULL);
	return (fill_arr(arr, s, c));
}
