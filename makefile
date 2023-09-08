NAME = program
SRC = main.c funciones.c
OBJ = $(SRC:.c=.o)
CC = cc
CFLAGS = -Werror -Wextra -Wall

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
