/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 22:17:11 by nchaknan          #+#    #+#             */
/*   Updated: 2023/04/12 00:59:24 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

void	fill_stack(t_mylist *stack, int ac, char **av)
{
	int		i;
	int		s;
	char	**split;

	check_input(stack, ac, av);
	stack->end_a = -1;
	stack->end_b = -1;
	stack->end_tmp = -1;
	i = 1;
	while (i < ac)
	{
		split = ft_split(av[i], ' ');
		s = -1;
		while (split[++s])
		{
			stack->a[++stack->end_a] = ft_atoi(split[s]);
			stack->tmp[++stack->end_tmp] = ft_atoi(split[s]);
		}
		i++;
	free_split(split);
	}
	if (stack->end_a == -1)
		print_error(stack);
	check_if_double(stack, stack->a);
	sort_tmp(stack, stack->tmp, stack->end_tmp);
}
