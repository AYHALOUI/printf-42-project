/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_unsigned.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 21:31:31 by ahaloui           #+#    #+#             */
/*   Updated: 2022/11/18 19:22:50 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	help_unsigned(char dst[], int *result, unsigned int nb, int *i)
{
	*result = nb % 10;
	if (result >= 0 && *result <= 9)
		dst[*i] = *result + '0';
	else if (*result == 10)
		dst[*i] = 'a';
	else if (*result == 11)
		dst[*i] = 'b';
	else if (*result == 12)
		dst[*i] = 'c';
	else if (*result == 13)
		dst[*i] = 'd';
	else if (*result == 14)
		dst[*i] = 'e';
	else if (*result == 15)
		dst[*i] = 'f';
}

void	ft_putnbr_fd_unsigned(unsigned int nb, int fd, int *len)
{
	char	dst[15];
	int		i;
	int		result;

	i = 0;
	result = 0;
	if (!nb)
		ft_putchar_fd((nb + '0'), fd, len);
	while (nb)
	{
		help_unsigned(dst, &result, nb, &i);
		nb /= 10;
		i++;
	}
	while (i--)
	{
		write(1, &dst[i], 1);
		(*len)++;
	}
}
