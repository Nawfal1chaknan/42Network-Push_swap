/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 22:00:45 by nchaknan          #+#    #+#             */
/*   Updated: 2023/03/18 11:11:05 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	check_if_empty(int ac, char **data)
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
		if (data[0] == '\0' || c == 0)
			print_error();
		j++;
	}
}

void	check_if_only_digit(int ac, char **data)
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
				print_error();
			i++;
		}
		j++;
	}
}

void	check_min_max(int ac, char **data)
{
	int	j;

	j = 1;
	while (j < ac)
	{
		if (ft_atoi(data[j]) > 2147483647 || ft_atoi(data[j]) < -2147483648)
		{
			print_error();
		}
		j++;
	}
}

void	check_if_double(int ac, char **data)
{
	int	i;
	int	j;

	j = 1;
	while (j < ac)
	{
		i = j;
		while (++i < ac)
			if (ft_atoi(data[j]) == ft_atoi(data[i]))
				print_error();
		j++;
	}
}

void	check_input(int ac, char **data)
{
	check_if_empty(ac, data);
	check_if_only_digit(ac, data);
	check_min_max(ac, data);
	check_if_double(ac, data);
}
