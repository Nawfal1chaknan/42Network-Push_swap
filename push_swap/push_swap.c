/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 19:36:08 by nchaknan          #+#    #+#             */
/*   Updated: 2023/03/18 20:15:53 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_mylist list;
	int		i;
	int		s;
	char	**split;

	check_input(ac, av);
	
	list.a = malloc(sizeof(int) * ac);
	list.b = malloc(sizeof(int) * ac);
	
	/////////////////////////// Fill a ////////////////////////////
	
	list.top = -1;
	i = 1;
	while (i < ac)
	{
		split = ft_split(av[i], ' ');
		s = 0;
		while (split[s])
		{
			list.a[++list.top] = ft_atoi(split[s]);
			s++;
		}
		i++;
	}
	if (list.top == -1)
		print_error();
		
	/////////////////////////// Fill b /////////////////////////////
	
	list.b[0] = 1;
    list.b[1] = 2;
    list.b[2] = 3;
	
	////////////////////////// Make rule ///////////////////////////
							   rrr(list);
	////////////////////////////////////////////////////////////////
	
	printf("\na : "); ///////// Print a ////////////////////////////
	
	i = 0;	
	while (list.a[i] != '\0')
	{
		printf("[%d] ", list.a[i]);
		i++;
	}
		
	printf("\n\nb : ");	/////// Print b /////////////////////////////
	
	i = 0;	
	while (list.b[i] != '\0')
	{
		printf("[%d] ", list.b[i]);
		i++;
	}

	printf("\n\n");	////////////////////////////////////////////////
}
