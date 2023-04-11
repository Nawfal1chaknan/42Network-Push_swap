/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_swap_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 11:17:22 by nchaknan          #+#    #+#             */
/*   Updated: 2023/04/11 21:10:40 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	sa(t_bonuslist *stack)
{
	int	swap;

	if (stack->end_a > 0)
	{
		swap = stack->a[0];
		stack->a[0] = stack->a[1];
		stack->a[1] = swap;
	}
}

void	sb(t_bonuslist *stack)
{
	int	swap;

	if (stack->end_b > 0)
	{
		swap = stack->b[0];
		stack->b[0] = stack->b[1];
		stack->b[1] = swap;
	}
}

void	ss(t_bonuslist *stack)
{
	sa(stack);
	sb(stack);
}
