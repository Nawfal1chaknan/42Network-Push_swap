/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 13:38:38 by nchaknan          #+#    #+#             */
/*   Updated: 2023/03/19 16:22:10 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	sort(t_mylist list)
{
	printf("%d, %d\n", list.top, list.top - 1);
	
		if(list.a[list.top] < list.a[list.top - 1])
			rr(list);
}