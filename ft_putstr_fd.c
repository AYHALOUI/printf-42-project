/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 21:07:06 by ahaloui           #+#    #+#             */
/*   Updated: 2022/11/22 15:07:27 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_fd(char *s, int fd, int *len)
{
	if (!s)
	{
		write (1, "(null)", 6);
		(*len) += 6;
		return ;
	}
	while (*s)
	{
		ft_putchar_fd(*s, fd, len);
		s++;
	}
}
