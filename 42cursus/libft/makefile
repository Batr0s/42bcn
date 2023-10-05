# variable with the name (libft.a) of the output static library
NAME = libft.a
# the wildcard function is used to find all .c files in the current directory. SRC contain all .c files
SRC = \
ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c\
ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c\
ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c\
 ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c\
ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c\
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
# replaces the .c extension with .o creating a list of object file names
OBJ = $(SRC:.c=.o)
CC = cc
INC = libft.h
CFLAGS = -Werror -Wextra -Wall -I $(INC)

all: $(NAME)

# defines a rule to build the target specified in 'NAME'. The rule depends on the object files defined in OBJ
# ar rc: command to create a static library $NAME from the object files $OBJ
# ranlib: command to create an index on the static library file named $(NAME)
$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib	$(NAME)

# rule that specifies how to compile .o files from .c files
# $< represents the source file
# $@ represents the target object file
%.o : %.c  $(INC) Makefile
	$(CC) $(CFLAGS) -c $< -o $@

# 'make clean' deletes the object files
clean:
	rm -f $(OBJ)

# 'make fclean' deletes .o files and also the static library file
fclean: clean
	rm -f $(NAME)

# first runs the 'fclean' rule and then the 'all' rule to build the project
re: fclean all

# the phony rules are always executed when called regardless of whether a file with the same name exists.
.PHONY: clean fclean all re
