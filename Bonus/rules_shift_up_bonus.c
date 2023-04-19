/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_shift_up_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 11:19:09 by nchaknan          #+#    #+#             */
/*   Updated: 2023/04/11 21:10:40 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"checker.h"

void	ra(t_bonuslist *stack)
{
	int	tmp;
	int	i;

	tmp = stack->a[0];
	i = 0;
	if (stack->end_a > 0)
	{
		while (i < stack->end_a)
		{
			stack->a[i] = stack->a[i + 1];
			i++;
		}
		stack->a[i] = tmp;
	}
}

void	rb(t_bonuslist *stack)
{
	int	tmp;
	int	i;

	tmp = stack->b[0];
	i = 0;
	if (stack->end_b > 0)
	{
		while (i < stack->end_b)
		{
			stack->b[i] = stack->b[i + 1];
			i++;
		}
		stack->b[i] = tmp;
	}
}

void	rr(t_bonuslist *stack)
{
	ra(stack);
	rb(stack);
}
