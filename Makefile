# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/17 21:15:10 by ahaloui           #+#    #+#              #
#    Updated: 2022/11/22 15:39:10 by ahaloui          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = 	ft_printf.c ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_check_pattern.c \
		ft_putnbr_on_hexalower.c ft_putnbr_fd_unsigned.c ft_putnbr_on_hexaupper.c ft_putnbr_on_hexabase.c \

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Werror -Wextra

CC = cc

all : $(NAME)

%.o: %.c ft_printf.h
	$(CC) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)

clean :
	rm -rf $(OBJ)
	
fclean : clean
	rm -rf $(NAME)
	
re :fclean all