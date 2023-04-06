/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 21:44:50 by nchaknan          #+#    #+#             */
/*   Updated: 2023/04/05 22:23:41 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	print_error(void)
{
	printf("Error\n");
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

int	check_if_sorted(t_mylist *list, int *array)
{
    int	i;

    i = 0;
    while(i < list->end_a)
    {
        if (array[i] > array[i + 1])
            return (0);
        i++;
    }
    return (1);
}

void swap(int *i1, int *i2)
{
    int tmp;

    tmp = *i1;
    *i1 = *i2;
    *i2 = tmp;
}

void sort_tmp(t_mylist *stack, int *arr, int len)
{
    int i;
    
    i = 0;

	while(!check_if_sorted(stack, arr))
	{
    	i = 0;
    	while(i < len)
    	{
    	    if(arr[i] > arr[i+1])
    	        swap(&arr[i], &arr[i+1]);
    	    i++;
    	}
	}
}

int find_big(t_mylist *stack)
{
    int big_index;
    int i;
    
    big_index = 0;
    i = 1;
    
    while (i <= stack->end_b)
    {
        if (stack->b[big_index] < stack->b[i])
        {
            big_index = i;
        }
        i++;
    }
    return (big_index);
}
