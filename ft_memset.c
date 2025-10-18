/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamkoum <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:17:50 by rkamkoum          #+#    #+#             */
/*   Updated: 2025/10/18 17:06:17 by rkamkoum         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*result;

	i = 0;
	result = (unsigned char *)s;
	while (i < n)
	{
		result[i] = (unsigned char)c;
		i++;
	}
	return (result);
}
/*
int	main(void)
{
	char	buffer[10];
	size_t	i;
	size_t	j;
	i = 0;
	j = 0;
	printf("before:\n");
	while (i < 10)
	{
		printf("%zu: %c\n", i, buffer[i]);
		i++;
	}

	ft_memset(buffer, 'a', sizeof(char) * 5);
	ft_memset(buffer+5, 'b', sizeof(char));
	ft_memset(buffer+6, 'c', sizeof(char) * 4);	

	printf("after:\n");
	    while (j < 10)
    {
        printf("%zu: %c\n", j, buffer[j]);
        j++;
    }
	return (0);
}*/
