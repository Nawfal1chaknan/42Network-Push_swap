/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 11:15:49 by nchaknan          #+#    #+#             */
/*   Updated: 2023/03/19 14:45:33 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	pa(t_mylist list)
{
	int	top_a;
	int	top_b;

	if (list.b[0] != '\0')
	{
		printf("* pa *\n");
		top_a = arrlen(list.a);
		top_b = arrlen(list.b) - 1;
		list.a[top_a] = list.b[top_b];
		list.b[top_b] = 0;
	}
}

void	pb(t_mylist list)
{
	int	top_b;
	int	top_a;

	if (list.a[0] != '\0')
	{
		printf("* pb *\n");
		top_b = arrlen(list.b);
		top_a = arrlen(list.a) - 1;
		list.b[top_b] = list.a[top_a];
		list.a[top_a] = 0;
	}
}
