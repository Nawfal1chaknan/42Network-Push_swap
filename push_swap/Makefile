NAME = push_swap

CFLAGS = -Wall -Wextra -Werror

LIBFT = ./libft/libft.a

FILES = $(LIBFT) push_swap.c check_errors.c utils.c rules_push.c rules_swap.c rules_shift_up.c rules_shift_down.c sort.c

OBJS = $(FILES:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS) $(LIBFT)
		@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(LIBFT) :
	make -C libft

clean :
		@$(RM) $(OBJS)
		make fclean -C libft

fclean : clean
		@$(RM) $(NAME)

re : fclean all
