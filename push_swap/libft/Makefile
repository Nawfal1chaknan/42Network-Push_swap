NAME = libft.a

CC = cc ${FLAGS}

FLAGS = -Wall -Werror -Wextra

FILES = ft_isdigit.c \
	  ft_strlen.c \
	  ft_atoi.c \
	  ft_substr.c \
	  ft_split.c \

OBJS = ${FILES:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
		ar rcs ${NAME} ${OBJS}
		
clean:
	rm -rf ${OBJS}

fclean: clean
		rm -rf ${NAME}

re: fclean $(NAME)

.PHONY: all bonus clean fclean re