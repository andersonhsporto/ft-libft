NAME = libft.a

CC = clang

CFLAGS = -Wall -Werror -Wextra -O2

SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
ft_memset.c ft_strchr.c ft_strlen.c ft_strncmp.c ft_strrchr.c \
ft_tolower.c ft_toupper.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_strlcpy.c \
ft_strlcat.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_strmapi.c \
ft_striteri.c ft_split.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putnbr_fd.c \

OBJ := $(SRC:%.c=%.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	rm -f $@$
	ar cq $@ $(OBJ)

clean:	clean
	rm -rf ./a.out
	rm -rf *.o

fclean:	clean
	rm -rf $(NAME)

re:	fclean all

push:
	make clean
	git add .
	git commit -m "update"
	git push
