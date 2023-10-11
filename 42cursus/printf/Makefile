NAME = libftprintf.a

SRC = \
ft_printf.c ft_putchar_print.c ft_putstr_print.c ft_itoa_print.c ft_itoa_printu.c \
ft_itoa_printx.c ft_itoa_printxm.c ft_itoa_printptr.c\

OBJ = $(SRC:.c=.o)

INC = libftprintf.h

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
