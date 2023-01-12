/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_on_hexaupper.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 21:43:10 by ahaloui           #+#    #+#             */
/*   Updated: 2022/11/21 15:18:07 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	help_hexa_upper(char dst[], int *result, unsigned int nb, int *i)
{
	*result = nb % 16;
	if (result >= 0 && *result <= 9)
		dst[*i] = *result + '0';
	else if (*result == 10)
		dst[*i] = 'A';
	else if (*result == 11)
		dst[*i] = 'B';
	else if (*result == 12)
		dst[*i] = 'C';
	else if (*result == 13)
		dst[*i] = 'D';
	else if (*result == 14)
		dst[*i] = 'E';
	else if (*result == 15)
		dst[*i] = 'F';
	else
		dst[*i] = *result + '0';
}

void	ft_putnbr_on_hexaupper(unsigned int nb, int *len)
{
	char	dst[20];
	int		i;
	int		result;

	i = 0;
	result = 0;
	if (!nb)
		ft_putchar_fd((nb + '0'), 1, len);
	while (nb)
	{
		help_hexa_upper(dst, &result, nb, &i);
		nb /= 16;
		i++;
	}
	while (i--)
		ft_putchar_fd(dst[i], 1, len);
}
