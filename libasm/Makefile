.PHONY: all clean bonus fclean re

NAME = libasm.a

MAKE = make

OBJ = *.o

DEL = rm -rf

GREEN ='\033[1;32m'

all: $(NAME)

$(NAME):
	@nasm -f macho64 ft_putchar.s
	@nasm -f macho64 ft_putstr.s
	@nasm -f macho64  ft_strlen.s
	@nasm -f macho64  ft_strcpy.s
	@ar rc $(NAME) $(OBJ)
	@echo ${GREEN}"libasm is built!"
	gcc main.c libasm.a

clean:
	@$(DEL) $(OBJ)
	@echo $(GREEN)"All cleared."

fclean: clean
	@$(DEL) $(NAME)
	@$(DEL) $(OBJ)
	@echo $(GREEN)"All libs cleared."

re: fclean all
