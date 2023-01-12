/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_pattern.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 20:54:11 by ahaloui           #+#    #+#             */
/*   Updated: 2022/11/21 19:10:11 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_check_pattern(char str, va_list arg, int *len)
{
	if (str == 'd' || str == 'i')
		ft_putnbr_fd(va_arg(arg, int), 1, len);
	else if (str == 'c')
		ft_putchar_fd(va_arg(arg, int), 1, len);
	else if (str == 's')
		ft_putstr_fd(va_arg(arg, char *), 1, len);
	else if (str == '%')
		ft_putchar_fd('%', 1, len);
	else if (str == 'p')
		ft_putnbr_on_hexabase(va_arg(arg, size_t), len, str);
	else if (str == 'x')
		ft_putnbr_on_hexalower(va_arg(arg, unsigned int), len);
	else if (str == 'u')
		ft_putnbr_fd_unsigned(va_arg(arg, unsigned int), 1, len);
	else if (str == 'X')
		ft_putnbr_on_hexaupper(va_arg(arg, unsigned int), len);
	else
		ft_putchar_fd(str, 1, len);
}
