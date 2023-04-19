NAME = push_swap

BONUS = checker

CFLAGS = -Wall -Wextra -Werror

GNL = Bonus/get_next_line/get_next_line.c Bonus/get_next_line/get_next_line_utils.c

PRINTF = ./ft_printf/libftprintf.a

FILES = Mandatory/push_swap.c Mandatory/check_errors.c Mandatory/utils.c Mandatory/utils2.c Mandatory/utils_libft.c Mandatory/utils_libft2.c \
		Mandatory/rules_push.c Mandatory/rules_swap.c Mandatory/rules_shift_up.c Mandatory/rules_shift_down.c Mandatory/fill_stack.c \
		Mandatory/range.c Mandatory/sort.c Mandatory/little_sort.c

BFILES = $(GNL) Bonus/checker.c Bonus/check_errors_bonus.c Bonus/fill_stack_bonus.c \
		Bonus/utils_bonus.c Bonus/utils_bonus2.c Bonus/utils_libft_bonus.c Bonus/utils_libft2_bonus.c \
		Bonus/rules_push_bonus.c Bonus/rules_swap_bonus.c Bonus/rules_shift_up_bonus.c Bonus/rules_shift_down_bonus.c

OBJS = $(FILES:.c=.o)

BOBJS = $(BFILES:.c=.o)

all : $(NAME)

bonus : $(BONUS)

$(PRINTF) :
	make -C ft_printf

$(NAME) : $(OBJS)  $(PRINTF)
		@$(CC) $(CFLAGS) $(OBJS) $(PRINTF) -o $(NAME)

$(BONUS) : $(BOBJS)  $(PRINTF)
		@$(CC) $(CFLAGS) $(BOBJS) $(PRINTF) -o $(BONUS)

clean :
		@$(RM) $(OBJS) $(BOBJS) ./ft_printf/*.o ./ft_printf/libftprintf.a

fclean : clean
		@$(RM) $(NAME) $(BONUS)

re : fclean all