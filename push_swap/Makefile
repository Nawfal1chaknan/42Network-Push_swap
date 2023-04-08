NAME = push_swap

CFLAGS = -Wall -Wextra -Werror -fsanitize=address -g
# -fsanitize=address -g

FILES = push_swap.c check_errors.c utils.c utils2.c utils_libft.c utils_libft2.c fill_stack.c rules_push.c rules_swap.c rules_shift_up.c rules_shift_down.c range.c sort.c little_sort.c

OBJS = $(FILES:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
		@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean :
		@$(RM) $(OBJS)

fclean : clean
		@$(RM) $(NAME)

re : fclean all
