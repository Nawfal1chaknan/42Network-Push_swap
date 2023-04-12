/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 21:44:50 by nchaknan          #+#    #+#             */
/*   Updated: 2023/04/12 18:35:06 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	print_error(t_bonuslist *stack)
{
	write(2,"Error\n",6);
	free(stack->a);
	free(stack->b);
	exit(1);
}

int	count_inputs(char *str)
{
	int	check;
	int	input;
	int	i;

	check = 0;
	input = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			check = 0;
		else if (check == 0)
		{
			check = 1;
			input++;
		}
		i++;
	}
	return (input);
}

int	num_of_args(int ac, char **str)
{
	int	count;
	int	j;

	count = 0;
	j = 1;
	while (j < ac)
	{
		count = count + count_inputs(str[j]);
		j++;
	}
	return (count);
}

int	check_if_sorted(t_bonuslist *list, int *array)
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

void	apply_rule(t_bonuslist	*stack, char *str)
{
	if (ft_strncmp(str, "pa\n", 3) == 0)
		pa(stack);
	else if (ft_strncmp(str, "pb\n", 3) == 0)
		pb(stack);
	else if (ft_strncmp(str, "sa\n", 3) == 0)
		sa(stack);
	else if (ft_strncmp(str, "sb\n", 3) == 0)
		sb(stack);
	else if (ft_strncmp(str, "ra\n", 3) == 0)
		ra(stack);
	else if (ft_strncmp(str, "rb\n", 3) == 0)
		rb(stack);
	else if (ft_strncmp(str, "ss\n", 3) == 0)
		ss(stack);
	else if (ft_strncmp(str, "rr\n", 3) == 0)
		rr(stack);
	else if (ft_strncmp(str, "rra\n", 4) == 0)
		rra(stack);
	else if (ft_strncmp(str, "rrb\n", 4) == 0)
		rrb(stack);
	else if (ft_strncmp(str, "rrr\n", 4) == 0)
		rrr(stack);
	else
	{
		free(str);
		print_error(stack);
	}
}
