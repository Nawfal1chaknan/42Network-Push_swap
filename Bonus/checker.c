/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 21:31:58 by nchaknan          #+#    #+#             */
/*   Updated: 2023/04/11 22:29:40 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	apply_rule(t_bonuslist	*stack, char *str)
{
	if (ft_strncmp(str, "pa\n", 3) == 0)
		pa(stack);
	else if (ft_strncmp(str, "pb\n", 3) == 0)
		pb(stack);
	else if (ft_strncmp(str, "sa\n", 3) == 0)
		sa(stack);
	else if (ft_strncmp(str, "sb\n", 3) == 0)
		sb(stack);
	else if (ft_strncmp(str, "ra\n", 3) == 0)
		ra(stack);
	else if (ft_strncmp(str, "rb\n", 3) == 0)
		rb(stack);
	else if (ft_strncmp(str, "ss\n", 3) == 0)
		ss(stack);
	else if (ft_strncmp(str, "rr\n", 3) == 0)
		rr(stack);
	else if (ft_strncmp(str, "rra\n", 4) == 0)
		rra(stack);
	else if (ft_strncmp(str, "rrb\n", 4) == 0)
		rrb(stack);
	else if (ft_strncmp(str, "rrr\n", 4) == 0)
		rrr(stack);
	else
		print_error(stack);
}

int	main(int ac, char **av)
{
    t_bonuslist	stack;
    char		*str;
	
    if (ac < 2)
		exit(0);
	stack.a = malloc(sizeof(int) * num_of_args(ac, av));
	stack.b = malloc(sizeof(int) * num_of_args(ac, av));
	ft_memset(stack.a, 0, sizeof(int) * num_of_args(ac, av));
	ft_memset(stack.b, 0, sizeof(int) * num_of_args(ac, av));
    
	fill_stack(&stack, ac, av);
	str = get_next_line(0);
    while (str)
    {
		apply_rule(&stack,str);
		free(str);
		str = get_next_line(0);
    }
	free(str);
	if (check_if_sorted(&stack, stack.a) && stack.end_b == -1)
		printf("OK\n");
	else if (!check_if_sorted(&stack, stack.a) || stack.end_b != -1)
		printf("KO\n");
	free(stack.a);
	free(stack.b); //helloooo
	// while(1);
}