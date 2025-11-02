/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamkoum <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:45:54 by rkamkoum          #+#    #+#             */
/*   Updated: 2025/10/19 15:45:56 by rkamkoum         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd(n % 10 + 48, fd);
}
/*
int	main(void)
{
	ft_putnbr_fd(25, 1);
	ft_putchar_fd('\n', 1);
        ft_putnbr_fd(-25, 1);
        ft_putchar_fd('\n', 1);
        ft_putnbr_fd(0, 1);
        ft_putchar_fd('\n', 1);
        ft_putnbr_fd(-2147483648, 1);
        ft_putchar_fd('\n', 1);
        ft_putnbr_fd(2147483647, 1);
        ft_putchar_fd('\n', 1);
	return (0);
}*/
