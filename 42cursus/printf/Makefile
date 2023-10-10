NAME = libft.a

SRC = \
ft_itoa.c ft_printf.c\

OBJ = $(SRC:.c=.o)

INC = libft.h

CC = cc
CFLAGS = -Werror -Wextra -Wall -I $(INC)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib	$(NAME)

%.o : %.c  $(INC) Makefile
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
