# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fngoc <fngoc@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/13 18:20:13 by fngoc             #+#    #+#              #
#    Updated: 2021/02/13 18:20:15 by fngoc            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean bonus fclean re

NAME = libasm.a

HEADER = libasm.h

SRC = ft_strlen.s ft_strcpy.s\
		ft_strcmp.s ft_write.s\
		ft_read.s ft_strdup.s

OBJ = $(SRC:.s=.o)

DEL = rm -rf

GREEN ='\033[1;32m'

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@ar rc $(NAME) $(OBJ)
	@echo ${GREEN}"libasm is built!"

%.o: %.s
	@nasm -f macho64 $< -o $@

clean:
	@$(DEL) $(OBJ)
	@echo $(GREEN)"All cleared."

fclean: clean
	@$(DEL) $(NAME)
	@$(DEL) $(OBJ)
	@echo $(GREEN)"library deleted."

re: fclean all
