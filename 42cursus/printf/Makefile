NAME = libftprintf.a

SRC = \
ft_printf.c ft_putchar_cnt.c ft_putstr_cnt.c ft_itoa_cnt.c ft_itoa_cnt_u.c \

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
