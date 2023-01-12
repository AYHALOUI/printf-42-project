/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_on_hexalower.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 21:21:38 by ahaloui           #+#    #+#             */
/*   Updated: 2022/11/21 15:08:45 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	help_hexa_lower(char dst[], int *result, unsigned int nb, int *i)
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

void	ft_putnbr_on_hexalower(unsigned int nb, int *len)
{
	int		i;
	char	dst[15];
	int		result;

	i = 0;
	result = 0;
	if (!nb)
		ft_putchar_fd((nb + '0'), 1, len);
	while (nb)
	{
		help_hexa_lower(dst, &result, nb, &i);
		nb /= 16;
		i++;
	}
	while (i--)
		ft_putchar_fd(dst[i], 1, len);
}
