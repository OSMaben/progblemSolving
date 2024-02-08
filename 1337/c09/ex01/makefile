SRC_FILES = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJ_FILES = $(SRC_FILES:.c=.o)
INCDIR = includes
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIB_NAME = libft.a

.c.o:
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o} -I ${INCDIR}

$(LIB_NAME): $(OBJ_FILES)
	ar rc $(LIB_NAME) $(OBJ_FILES)

all: $(LIB_NAME)

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(LIB_NAME)

re: fclean all
