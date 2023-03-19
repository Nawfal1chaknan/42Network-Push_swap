/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 11:17:22 by nchaknan          #+#    #+#             */
/*   Updated: 2023/03/19 14:47:57 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	sa(t_mylist list)
{
	int	swap;
	int	top;

	if (arrlen(list.a) >= 2)
	{
		printf("* sa *\n");
		top = arrlen(list.a) - 1;
		swap = list.a[top];
		list.a[top] = list.a[top - 1];
		list.a[top - 1] = swap;
	}
}

void	sb(t_mylist list)
{
	int	swap;
	int	top;

	if (arrlen(list.b) >= 2)
	{
		printf("* sb *\n");
		top = arrlen(list.b) - 1;
		swap = list.b[top];
		list.b[top] = list.b[top - 1];
		list.b[top - 1] = swap;
	}
}

void	ss(t_mylist list)
{
	printf("* ss *\n");
	sa(list);
	sb(list);
}
