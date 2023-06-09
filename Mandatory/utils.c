/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 21:44:50 by nchaknan          #+#    #+#             */
/*   Updated: 2023/04/19 18:38:46 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	print_error(t_mylist *stack)
{
	write(2, "Error\n", 6);
	free(stack->a);
	free(stack->b);
	free(stack->tmp);
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

int	check_max(char *str)
{
	size_t	i;
	int		check;
	int		count;

	i = 0;
	check = 0;
	count = 0;
	while (i < ft_strlen(str))
	{
		while (i < ft_strlen(str) && check == 0)
		{
			if (str[i] == '0' || str[i] == '+' || str[i] == '-')
				i++;
			else
				check = 1;
		}
		count++;
		i++;
	}
	return (count);
}
