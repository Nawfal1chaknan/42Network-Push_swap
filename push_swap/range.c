/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 20:00:19 by nchaknan          #+#    #+#             */
/*   Updated: 2023/04/11 01:22:07 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	handle_pb(t_mylist *stack, int min, int max, int len)
{
	while (stack->end_a != -1)
	{
		if (stack->a[0] >= stack->tmp[min] && stack->a[0] <= stack->tmp[max])
		{
			pb(stack);
			if (max <= len - 1)
			{
				min++;
				max++;
			}
		}
		else if (stack->a[0] < stack->tmp[min])
		{
			pb(stack);
			rb(stack, "rb\n");
			if (max <= len - 1)
			{
				min++;
				max++;
			}
		}
		else if ((stack->a[0] > stack->tmp[max]))
			ra(stack, "ra\n");
	}
}

void	push_to_b(t_mylist *stack, int range)
{
	int	min;
	int	max;
	int	len;

	len = stack->end_a;
	min = 0;
	max = range;
	handle_pb(stack, min, max, len);
}

void	push_to_a(t_mylist *stack)
{
	int	big;

	while (stack->end_b != -1)
	{
		big = stack->b[find_big(stack)];
		if (find_big(stack) <= stack->end_b / 2)
			while (stack->b[0] != big)
				rb(stack, "rb\n");
		else if (find_big(stack) > stack->end_b / 2)
			while (stack->b[0] != big)
				rrb(stack, "rrb\n");
		pa(stack);
	}
}

void	range(t_mylist *stack, int range)
{
	push_to_b(stack, range);
	push_to_a(stack);
}
