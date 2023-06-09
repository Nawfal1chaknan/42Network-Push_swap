/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 21:31:58 by nchaknan          #+#    #+#             */
/*   Updated: 2023/04/19 20:22:04 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int ac, char **av)
{
	t_bonuslist	stack;
	char		*str;

	if (ac < 2)
		exit(0);
	stack.a = calloc(num_of_args(ac, av), sizeof(int));
	stack.b = calloc(num_of_args(ac, av), sizeof(int));
	fill_stack(&stack, ac, av);
	str = get_next_line(0);
	while (str)
	{
		apply_rule(&stack, str);
		free(str);
		str = get_next_line(0);
	}
	free(str);
	if (check_if_sorted(&stack, stack.a) && stack.end_b == -1)
		ft_printf("OK\n");
	else if (!check_if_sorted(&stack, stack.a) || stack.end_b != -1)
		ft_printf("KO\n");
	free(stack.a);
	free(stack.b);
}
