/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 19:56:56 by nchaknan          #+#    #+#             */
/*   Updated: 2023/03/18 20:15:33 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include<stdio.h>
# include<stdlib.h>
# include<string.h>
# include"./libft/libft.h"

typedef struct list
{
    int	*a;
	int	*b;
    int top;
    
}	t_mylist;


void	check_input(int ac, char **data);
int		arrlen(int *arr);
void	print_error(void);

// Rules :
void    sa(t_mylist list);
void    sb(t_mylist list);
void    ss(t_mylist list);
void    pa(t_mylist list);
void    pb(t_mylist list);
void    ra(t_mylist list);
void    rb(t_mylist list);
void    rr(t_mylist list);
void    rra(t_mylist list);
void    rrb(t_mylist list);
void    rrr(t_mylist list);

#endif