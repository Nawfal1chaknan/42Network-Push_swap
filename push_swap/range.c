/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 20:00:19 by nchaknan          #+#    #+#             */
/*   Updated: 2023/04/05 23:18:43 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void push_to_b(t_mylist *stack, int range)
{
    int min;
    int max;
	int len;

	len = stack->end_a;
    min = 0;
    max = range;
	while (stack->end_a != -1)
	{
		if (stack->a[0] >= stack->tmp[min] && stack->a[0] <= stack->tmp[max])
		{
			pb(stack);
			if(max <= len - 1)
			{
				min++;
				max++;
			}
		}
		else if (stack->a[0] < stack->tmp[min])
		{
			pb(stack);
			rb(stack, "rb\n");
			if(max <= len - 1)
			{
				min++;
				max++;
			}
		}
		else if ((stack->a[0] > stack->tmp[max]))
			ra(stack, "ra\n");
	}
}

void	push_to_a(t_mylist *stack)
{
	int big;
	
	while(stack->end_b != -1)
	{
		big = stack->b[find_big(stack)];
		if (find_big(stack) <= stack->end_b / 2)
			while(stack->b[0] != big)
				rb(stack, "rb\n");
		else if (find_big(stack) > stack->end_b / 2)
			while(stack->b[0] != big)
				rrb(stack, "rrb\n");
		pa(stack);
	}
}

void	range(t_mylist *stack, int range)
{
	push_to_b(stack, range);
	push_to_a(stack);
}









// printf("\na : "); ///////// Print a ////////////////////////////
	
// 	int i = 0;	
// 	while (i <= stack->end_a)
// 	{
// 		printf("[%d] ", stack->a[i]);
// 		i++;
// 	}
		
	// printf("\n\nb : ");	/////// Print b /////////////////////////////
	
	// i = 0;	
	// while (i <= stack->end_b)
	// {
	// 	printf("[%d] ", stack->b[i]);
	// 	i++;
	// }

// 	printf("\n\n");	////////////////////////////////////////////////
	
// 	usleep(100000);