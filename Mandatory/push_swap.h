/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 19:56:56 by nchaknan          #+#    #+#             */
/*   Updated: 2023/04/19 20:13:51 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include<stdlib.h>
# include "../ft_printf/ft_printf.h"

typedef struct list
{
	int	*a;
	int	*b;
	int	*tmp;
	int	end_a;
	int	end_b;
	int	end_tmp;
}	t_mylist;

int		num_of_args(int ac, char **str);
void	print_error(t_mylist *stack);
void	fill_stack(t_mylist *stack, int ac, char **av);
void	check_input(t_mylist *stack, int ac, char **data);
void	check_min_max(t_mylist *stack, char *data);
int		check_max(char *str);
void	check_if_double(t_mylist *list, int *arr);
int		check_if_sorted(t_mylist *list, int *array);
int		find_big(t_mylist *stack);
void	sort_tmp(t_mylist *stack, int *arr, int len);
void	sort(t_mylist *list);
void	little_sort(t_mylist *stack);
void	range(t_mylist *stack, int range);

// Libft :
void	*ft_calloc(size_t count, size_t size);
size_t	ft_strlen(const char *s);
long	ft_atoi(char *str);
char	*ft_itoa(int n);
int		ft_isdigit(int n);
char	**ft_split(const char *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	*ft_memset(void *b, int c, size_t len);

// Rules :
void	sa(t_mylist *list, char *s);
void	sb(t_mylist *list, char *s);
void	ss(t_mylist *list);
void	ra(t_mylist *list, char *s);
void	rb(t_mylist *list, char *s);
void	rr(t_mylist *list);
void	rra(t_mylist *list, char *s);
void	rrb(t_mylist *list, char *s);
void	rrr(t_mylist *list);
void	pa(t_mylist *list);
void	pb(t_mylist *list);

#endif