# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/03 14:31:08 by caakkaya          #+#    #+#              #
#    Updated: 2024/08/03 14:31:09 by caakkaya         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

SRC = ./ft_printf.c\
		./ft_parse_flags.c\
		./ft_status_init.c\
		./ft_correct_flags.c\
		./ft_correct_precision_zero.c\
		./ft_check_status.c\
		./ft_check_flags_length.c\
		./ft_conv_int.c\
		./ft_conv_unsigned_int.c\
		./ft_conv_base.c\
		./ft_conv_string.c\
		./ft_conv_char.c\
		./ft_conv_addr.c\
		./ft_print_int.c\
		./ft_print_unsigned_int.c\
		./ft_print_hex.c\
		./ft_print_string.c\
		./ft_print_char.c\
		./ft_print_char_special.c\
		./ft_print_addr.c\
		./ft_print_padding.c\
		./ft_print_precision.c\
		./ft_misc_putchar.c\
		./ft_misc_putstr.c\
		./ft_misc_strlen.c\
		./ft_misc_isdigit.c\

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o : %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean all fclean re
