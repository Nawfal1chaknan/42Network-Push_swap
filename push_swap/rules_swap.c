/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 11:17:22 by nchaknan          #+#    #+#             */
/*   Updated: 2023/03/31 21:58:48 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	sa(t_mylist *stack, char *s)
{
	int	swap;

	if (stack->end_a > 0)
	{
		printf("%s", s);
		swap = stack->a[0];
		stack->a[0] = stack->a[1];
		stack->a[1] = swap;
	}
}

void	sb(t_mylist *stack, char *s)
{
	int	swap;

	if (stack->end_b > 0)
	{
		printf("%s", s);
		swap = stack->b[0];
		stack->b[0] = stack->b[1];
		stack->b[1] = swap;
	}
}

void	ss(t_mylist *stack)
{
	printf("ss\n");
	sa(stack, "");
	sb(stack, "");
}
