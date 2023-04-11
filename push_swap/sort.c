/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 13:38:38 by nchaknan          #+#    #+#             */
/*   Updated: 2023/04/07 23:23:49 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	handle_sort(t_mylist *stack, int end_a, int end_b)
{
	if (end_a < stack->a[0] && end_b > stack->b[0])
		rrr(stack);
	else if (stack->a[0] > stack->a[1] && stack->b[0] < stack->b[1])
		ss(stack);
	else if (end_a < stack->a[0])
		rra(stack, "rra\n");
	else if (end_b > stack->b[0] && stack->end_b >= 1)
		rrb(stack, "rrb\n");
	else if (stack->a[0] > stack->a[1])
		sa(stack, "sa\n");
	else if (stack->b[0] < stack->b[1] && stack->end_b >= 1)
		sb(stack, "sb\n");
	else if (check_if_sorted(stack, stack->a))
		pa(stack);
	else
		pb(stack);
}

void	sort(t_mylist *stack)
{
	int	end_a;
	int	end_b;

	while (!(check_if_sorted(stack, stack->a) && stack->end_b == -1))
	{
		end_b = 0;
		end_a = stack->a[stack->end_a];
		if (stack->end_b > 0)
			end_b = stack->b[stack->end_b];
		handle_sort(stack, end_a, end_b);
	}
}
