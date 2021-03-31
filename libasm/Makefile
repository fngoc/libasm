.PHONY: all bonus clean bonus fclean re

NAME = libasm.a

HEADER = libasm.h

HEADER_BONUS = libasm_bonus.h

SRC = ft_strlen.s ft_strcpy.s\
		ft_strcmp.s ft_write.s\
		ft_read.s ft_strdup.s

SRC_BONUS = ft_list_size.s

OBJ = $(SRC:.s=.o)

OBJ_BONUS = $(SRC_BONUS:.s=.o)

DEL = rm -rf

GREEN ='\033[1;32m'

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@ar rc $(NAME) $(OBJ)
	@echo ${GREEN}"libasm is built!"

bonus: $(OBJ) $(OBJ_BONUS) $(HEADER) $(HEADER_BONUS)
	@ar rc $(NAME) $(OBJ) $(OBJ_BONUS)
	@echo ${GREEN}"libasm with bonus is built!"

%.o: %.s
	@nasm -f macho64 $< -o $@

clean:
	@$(DEL) $(OBJ) $(OBJ_BONUS)
	@echo $(GREEN)"All cleared."

fclean: clean
	@$(DEL) $(NAME)
	@$(DEL) $(OBJ)
	@echo $(GREEN)"library deleted."

re: fclean all
