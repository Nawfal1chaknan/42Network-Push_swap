/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 11:15:49 by nchaknan          #+#    #+#             */
/*   Updated: 2023/04/07 18:17:54 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	pa(t_mylist *stack)
{
	int	i;

	if (stack->end_b >= 0)
	{
		printf("pa\n");
		stack->end_a++;
		i = 0;
		while (i < stack->end_a)
		{
			stack->a[stack->end_a - i] = stack->a[stack->end_a - 1 - i];
			i++;
		}
		stack->a[0] = stack->b[0];
		i = 0;
		while (i < stack->end_b)
		{
			stack->b[i] = stack->b[i + 1];
			i++;
		}
		stack->end_b--;
	}
}

void	pb(t_mylist *stack)
{
	int	i;

	if (stack->end_a >= 0)
	{
		printf("pb\n");
		stack->end_b++;
		i = 0;
		while (i < stack->end_b)
		{
			stack->b[stack->end_b - i] = stack->b[stack->end_b - 1 - i];
			i++;
		}
		stack->b[0] = stack->a[0];
		i = 0;
		while (i < stack->end_a)
		{
			stack->a[i] = stack->a[i + 1];
			i++;
		}
		stack->end_a--;
	}
}
