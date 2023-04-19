/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 19:36:08 by nchaknan          #+#    #+#             */
/*   Updated: 2023/04/19 20:16:29 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_mylist	stack;

	if (ac < 2)
		exit(0);
	stack.a = calloc(num_of_args(ac, av), sizeof(int));
	stack.b = calloc(num_of_args(ac, av), sizeof(int));
	stack.tmp = calloc(num_of_args(ac, av), sizeof(int));
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
