/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_shift_down_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 11:20:29 by nchaknan          #+#    #+#             */
/*   Updated: 2023/04/11 21:10:40 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	rra(t_bonuslist *stack)
{
	int	tmp;
	int	i;

	tmp = stack->a[stack->end_a];
	i = 0;
	if (stack->end_a > 0)
	{
		while (i < stack->end_a)
		{
			stack->a[stack->end_a - i] = stack->a[stack->end_a - 1 - i];
			i++;
		}
		stack->a[0] = tmp;
	}
}

void	rrb(t_bonuslist *stack)
{
	int	tmp;
	int	i;

	tmp = stack->b[stack->end_b];
	i = 0;
	if (stack->end_b > 0)
	{
		while (i < stack->end_b)
		{
			stack->b[stack->end_b - i] = stack->b[stack->end_b - 1 - i];
			i++;
		}
		stack->b[0] = tmp;
	}
}

void	rrr(t_bonuslist *stack)
{
	rra(stack);
	rrb(stack);
}
