/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 19:36:08 by nchaknan          #+#    #+#             */
/*   Updated: 2023/04/12 00:59:39 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_mylist	stack;

	if (ac < 2)
		exit(0);
	stack.a = malloc(sizeof(int) * num_of_args(ac, av));
	stack.b = malloc(sizeof(int) * num_of_args(ac, av));
	stack.tmp = malloc(sizeof(int) * num_of_args(ac, av));
	ft_memset(stack.a, 0, sizeof(int) * num_of_args(ac, av));
	ft_memset(stack.b, 0, sizeof(int) * num_of_args(ac, av));
	ft_memset(stack.tmp, 0, sizeof(int) * num_of_args(ac, av));
	fill_stack(&stack, ac, av);

	if (stack.end_a > 100)
		range(&stack, 35);
	else if (stack.end_a >= 15 && stack.end_a <= 100)
		range(&stack, 15);
	else if (stack.end_a == 2)
		little_sort(&stack);
	else
		sort(&stack);
	free(stack.a);
	free(stack.b);
	free(stack.tmp);
}
