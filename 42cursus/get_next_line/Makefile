NAME = get_next_line.a

SRC = \
get_next_line.c get_next_line_utils.c 

OBJ = $(SRC:.c=.o)

INC = get_next_line.h

CC = cc
CFLAGS = -Werror -Wextra -Wall -I $(INC)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

%.o : %.c  $(INC) Makefile
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
