/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 22:17:11 by nchaknan          #+#    #+#             */
/*   Updated: 2023/04/12 00:57:57 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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

void	fill_stack(t_bonuslist *stack, int ac, char **av)
{
	int		i;
	int		s;
	char	**split;

	check_input(stack, ac, av);
	stack->end_a = -1;
	stack->end_b = -1;
	i = 1;
	while (i < ac)
	{
		split = ft_split(av[i], ' ');
		s = -1;
		while (split[++s])
		{
			stack->a[++stack->end_a] = ft_atoi(split[s]);
		}
		i++;
	free_split(split);
	}
	check_if_double(stack, stack->a);
}
