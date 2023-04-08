/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 22:20:29 by nchaknan          #+#    #+#             */
/*   Updated: 2023/04/07 22:25:30 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	check_if_sorted(t_mylist *list, int *array)
{
	int	i;

	i = 0;
	while (i < list->end_a)
	{
		if (array[i] > array[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	swap(int *i1, int *i2)
{
	int	tmp;

	tmp = *i1;
	*i1 = *i2;
	*i2 = tmp;
}

void	sort_tmp(t_mylist *stack, int *arr, int len)
{
	int	i;

	i = 0;
	while (!check_if_sorted(stack, arr))
	{
		i = 0;
		while (i < len)
		{
			if (arr[i] > arr[i + 1])
				swap(&arr[i], &arr[i + 1]);
			i++;
		}
	}
}

int	find_big(t_mylist *stack)
{
	int	big_index;
	int	i;

	big_index = 0;
	i = 1;
	while (i <= stack->end_b)
	{
		if (stack->b[big_index] < stack->b[i])
		{
			big_index = i;
		}
		i++;
	}
	return (big_index);
}
