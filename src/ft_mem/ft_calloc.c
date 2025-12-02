/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamkoum <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:40:27 by rkamkoum          #+#    #+#             */
/*   Updated: 2025/11/03 16:06:02 by rkamkoum         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
