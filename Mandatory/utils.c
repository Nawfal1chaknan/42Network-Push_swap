/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 21:44:50 by nchaknan          #+#    #+#             */
/*   Updated: 2023/04/11 22:17:06 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	print_error(t_mylist *stack)
{
	ft_printf("Error\n");
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
