/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 20:45:01 by ahaloui           #+#    #+#             */
/*   Updated: 2022/11/21 15:08:07 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_printf(const char *str, ...);
void	ft_putchar_fd(char c, int fd, int *len);
void	ft_check_pattern(char str, va_list arg, int *len);
void	ft_putnbr_fd(int nb, int fd, int *len);
void	ft_putstr_fd(char *s, int fd, int *len);

void	ft_putnbr_on_hexalower(unsigned int nb, int *len);
void	ft_putnbr_on_hexaupper(unsigned int nb, int *len);
void	ft_putnbr_fd_unsigned(unsigned int nb, int fd, int *len);

void	ft_putnbr_on_hexabase(size_t nb, int *len, int X);
#endif
