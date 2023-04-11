/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_shift_down.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 11:20:29 by nchaknan          #+#    #+#             */
/*   Updated: 2023/04/07 18:19:37 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	rra(t_mylist *stack, char *s)
{
	int	tmp;
	int	i;

	tmp = stack->a[stack->end_a];
	i = 0;
	if (stack->end_a > 0)
	{
		printf("%s", s);
		while (i < stack->end_a)
		{
			stack->a[stack->end_a - i] = stack->a[stack->end_a - 1 - i];
			i++;
		}
		stack->a[0] = tmp;
	}
}

void	rrb(t_mylist *stack, char *s)
{
	int	tmp;
	int	i;

	tmp = stack->b[stack->end_b];
	i = 0;
	if (stack->end_b > 0)
	{
		printf("%s", s);
		while (i < stack->end_b)
		{
			stack->b[stack->end_b - i] = stack->b[stack->end_b - 1 - i];
			i++;
		}
		stack->b[0] = tmp;
	}
}

void	rrr(t_mylist *stack)
{
	printf("rrr\n");
	rra(stack, "");
	rrb(stack, "");
}
