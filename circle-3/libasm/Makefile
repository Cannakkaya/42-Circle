# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/03 14:51:46 by caakkaya          #+#    #+#              #
#    Updated: 2024/08/03 14:51:46 by caakkaya         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a


NASM = nasm

FLAGS = -f macho64

SRC =	src/ft_strlen.s\
	src/ft_strcpy.s\
	src/ft_strcmp.s\
	src/ft_write.s\
	src/ft_read.s\
	src/ft_strdup.s

OBJS = $(SRC:.s=.o)


%.o : %.s
	$(NASM) $(FLAGS) $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: clean all fclean re

	

