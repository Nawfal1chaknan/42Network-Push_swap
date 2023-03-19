/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_shift_down.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 11:20:29 by nchaknan          #+#    #+#             */
/*   Updated: 2023/03/19 14:46:37 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	rra(t_mylist list)
{
	int	*tmp_arr;
	int	i;
	int	j;

	if (arrlen(list.a) >= 2)
	{
		printf("* rra *\n");
		tmp_arr = malloc(sizeof(list.a));
		i = 1;
		j = 0;
		while (list.a[i] != '\0')
			tmp_arr[j++] = list.a[i++];
		tmp_arr[j] = list.a[0];
		i = 0;
		j = 0;
		while (tmp_arr[j] != '\0')
			list.a[i++] = tmp_arr[j++];
	}
}

void	rrb(t_mylist list)
{
	int	*tmp_arr;
	int	i;
	int	j;

	if (arrlen(list.b) >= 2)
	{
		printf("* rrb *\n");
		tmp_arr = malloc(sizeof(list.b));
		i = 1;
		j = 0;
		while (list.b[i] != '\0')
			tmp_arr[j++] = list.b[i++];
		tmp_arr[j] = list.b[0];
		i = 0;
		j = 0;
		while (tmp_arr[j] != '\0')
			list.b[i++] = tmp_arr[j++];
	}
}

void	rrr(t_mylist list)
{
	printf("* rrr *\n");
	rra(list);
	rrb(list);
}
