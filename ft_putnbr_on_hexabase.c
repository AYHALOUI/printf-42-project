/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_on_hexabase.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:57:52 by ahaloui           #+#    #+#             */
/*   Updated: 2022/11/21 16:05:15 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	help_hexabase(char dst[], int *result, unsigned int nb, int *i)
{
	*result = nb % 16;
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
	else
		dst[*i] = *result + '0';
}

void	ft_putnbr_on_hexabase(size_t nb, int *len, int X)
{
	int		i;
	char	dst[20];
	int		result;

	i = 0;
	result = 0;
	if (X == 'p')
		ft_putstr_fd("0x", 1, len);
	if (!nb)
		ft_putchar_fd((nb + '0'), 1, len);
	while (nb)
	{
		help_hexabase(dst, &result, nb, &i);
		nb /= 16;
		i++;
	}
	while (i--)
		ft_putchar_fd(dst[i], 1, len);
}
