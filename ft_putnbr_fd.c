/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 20:57:44 by ahaloui           #+#    #+#             */
/*   Updated: 2022/11/21 12:59:26 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_fd(int n, int fd, int *len)
{
	int		rest;
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		nbr *= -1;
		write(fd, "-", 1);
		(*len)++;
	}
	rest = (nbr % 10) + '0';
	nbr /= 10;
	if (nbr != 0)
		ft_putnbr_fd(nbr, fd, len);
	write(fd, &rest, 1);
	(*len)++;
}
