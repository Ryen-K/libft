/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamkoum <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 17:08:35 by rkamkoum          #+#    #+#             */
/*   Updated: 2025/10/18 17:39:33 by rkamkoum         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *s, int	c, size_t n);

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

int	main(void)
{
	char	*buffer;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	buffer = "tests only";
	printf("before:\n");
	while (i < 10)
	{
		printf("%zu: %c\n", i, buffer[i]);
		i++;
	}

	ft_bzero(buffer, sizeof(char) * 5);
	ft_bzero(buffer+5, sizeof(char));
	ft_bzero(buffer+6, sizeof(char) * 4);	

	printf("after:\n");
	    while (j < 10)
    {
        printf("%zu: %c\n", j, buffer[j]);
        j++;
    }
	return (0);
}

// TO BE CONTINUED
