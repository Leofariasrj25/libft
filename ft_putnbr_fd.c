/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfarias- <leofariasrj25@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:43:07 by lfarias-          #+#    #+#             */
/*   Updated: 2022/05/12 14:57:44 by lfarias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr(unsigned long nbr, int fd)
{
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10, fd);
	}
	ft_putchar_fd(nbr % 10 + 48, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned long	nbr;

	nbr = 0;
	if (nbr < 0)
	{
		nbr = n * -1;
		ft_putchar_fd('-', fd);
	}
	else
		nbr = n;
	ft_putnbr(fd, nbr);
}
