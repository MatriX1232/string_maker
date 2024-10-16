CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = libstrmaker.a

SRC = \
	strmaker.c \
	utils.c \
	ft_itoa.c \
	ft_uitoa.c \
	ft_uitoa_base.c

OBJ = $(SRC:.c=.o)


all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean
