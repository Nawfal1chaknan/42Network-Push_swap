/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_shift_up.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 11:19:09 by nchaknan          #+#    #+#             */
/*   Updated: 2023/03/19 14:47:17 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ra(t_mylist list)
{
	int	top;
	int	*tmp_arr;
	int	i;
	int	j;

	if (arrlen(list.a) >= 2)
	{
		printf("* ra *\n");
		top = arrlen(list.a) - 1;
		tmp_arr = malloc(sizeof(list.a));
		tmp_arr[0] = list.a[top];
		list.a[top] = '\0';
		i = 0;
		j = 1;
		while (list.a[i] != '\0')
			tmp_arr[j++] = list.a[i++];
		i = 0;
		j = 0;
		while (tmp_arr[j] != '\0')
			list.a[i++] = tmp_arr[j++];
	}
}

void	rb(t_mylist list)
{
	int	top;
	int	*tmp_arr;
	int	i;
	int	j;

	if (arrlen(list.b) >= 2)
	{
		printf("* rb *\n");
		top = arrlen(list.b) - 1;
		tmp_arr = malloc(sizeof(list.b));
		tmp_arr[0] = list.b[top];
		list.b[top] = '\0';
		i = 0;
		j = 1;
		while (list.b[i] != '\0')
			tmp_arr[j++] = list.b[i++];
		i = 0;
		j = 0;
		while (tmp_arr[j] != '\0')
			list.b[i++] = tmp_arr[j++];
	}
}

void	rr(t_mylist list)
{
	printf("* rr *\n");
	ra(list);
	rb(list);
}
