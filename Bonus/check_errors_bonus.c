/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 22:00:45 by nchaknan          #+#    #+#             */
/*   Updated: 2023/04/19 18:54:45 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	check_if_empty(t_bonuslist *stack, int ac, char **data)
{
	int	i;
	int	j;
	int	c;

	j = 1;
	while (j < ac)
	{
		i = 0;
		c = 0;
		while (data[j][i] != '\0')
		{
			if (data[j][i] != ' ')
				c++;
			i++;
		}
		if (data[1][0] == '\0' || c == 0)
			print_error(stack);
		j++;
	}
}

void	check_if_only_digit(t_bonuslist *stack, int ac, char **data)
{
	int	i;
	int	j;
	int	before;
	int	after;

	j = 1;
	while (j < ac)
	{
		i = 0;
		while (data[j][i] != '\0')
		{
			before = data[j][i - 1];
			after = data[j][i + 1];
			if ((!ft_isdigit(data[j][i]) && data[j][i] != ' '
				&& data[j][i] != '-' && data[j][i] != '+')
				|| (data[j][i] == '-' &&
					(!ft_isdigit(after) || ft_isdigit(before)))
				|| (data[j][i] == '+' &&
					(!ft_isdigit(after) || ft_isdigit(before))))
				print_error(stack);
			i++;
		}
		j++;
	}
}

void	check_min_max(t_bonuslist *stack, char *data)
{
	if (check_max(data) > 10)
		print_error(stack);
	if (ft_atoi(data) > 2147483647 || ft_atoi(data) < -2147483648)
		print_error(stack);
}

void	check_if_double(t_bonuslist *stack, int *arr)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j <= stack->end_a)
	{
		i = j;
		while (++i <= stack->end_a)
			if (arr[j] == arr[i])
				print_error(stack);
		j++;
	}
}

void	check_input(t_bonuslist *stack, int ac, char **data)
{
	check_if_empty(stack, ac, data);
	check_if_only_digit(stack, ac, data);
}
