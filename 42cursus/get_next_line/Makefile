NAME = get_next_line.a

SRC = \
get_next_line.c get_next_line_utils.c 
BSRC = \
get_next_line_bonus.c get_next_line_utils_bonus.c 

OBJ = $(SRC:.c=.o)
BOBJ = $(BSRC:.c=.o)

INC = get_next_line.h

CC = cc
CFLAGS = -Werror -Wextra -Wall -I $(INC)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

%.o : %.c  $(INC) Makefile
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(BOBJ) $(BNAME)

clean:
	rm -f $(OBJ) $(BOBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re bonus
