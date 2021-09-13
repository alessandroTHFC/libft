CC	= gcc
CFLAGS	= -Wall -Wextra -Werror -c

NAME	= libft.a
HEAD	= libft.h
SRCS	= ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_calloc.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strcpy.c \
		ft_strdup.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strjoin.c \
		ft_strlen.c \
		ft_striteri.c \
		ft_split.c \
		ft_atoi.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_islower.c \
		ft_isprint.c \
		ft_isspace.c \
		ft_isupper.c \
		ft_itoa.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putstr_fd.c \

OBJ	= $(FILES:.c=.o)
all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(FILES)

$(OBJ): $(FILES)
	gcc $(CFLAGS) $(FILES)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
