/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   little_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 23:40:58 by nchaknan          #+#    #+#             */
/*   Updated: 2023/04/07 18:08:25 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	little_sort(t_mylist *stack)
{
	if (stack->a[0] > stack->a[1] && stack->a[1] < stack->a[2]
		&& stack->a[0] < stack->a[2])
		sa(stack, "sa\n");
	else if (stack->a[0] < stack->a[1] && stack->a[1] > stack->a[2]
		&& stack->a[0] < stack->a[2])
	{
		rra(stack, "rra\n");
		sa(stack, "sa\n");
	}
	else if (stack->a[0] > stack->a[1] && stack->a[1] > stack->a[2]
		&& stack->a[0] > stack->a[2])
	{
		sa(stack, "sa\n");
		rra(stack, "rra\n");
	}
	else if (stack->a[0] < stack->a[1] && stack->a[1] > stack->a[2]
		&& stack->a[0] > stack->a[2])
	{
		rra(stack, "rra\n");
	}
	else if (stack->a[0] > stack->a[1] && stack->a[1] < stack->a[2]
		&& stack->a[0] > stack->a[2])
	{
		ra(stack, "ra\n");
	}
}
