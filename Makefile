NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_strlen.c ft_memset.c ft_memmove.c ft_memcpy.c ft_isprint.c ft_isdigit.c ft_isascii.c ft_isalpha.c ft_isalnum.c ft_bzero.c ft_toupper.c ft_tolower.c ft_strlcpy.c ft_strlcat.c ft_strncmp.c ft_strchr.c ft_strrchr.c ft_memchr.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		 ar rc $(NAME) $(OBJ)

%.o: %.c	
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all 