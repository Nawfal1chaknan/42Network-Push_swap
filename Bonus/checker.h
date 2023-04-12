/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 22:06:53 by nchaknan          #+#    #+#             */
/*   Updated: 2023/04/12 18:17:22 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include<stdio.h>
# include<stdlib.h>
# include<string.h>
# include<unistd.h>
# include "../ft_printf/ft_printf.h"
# include "./get_next_line/get_next_line.h"

typedef struct list
{
	int	*a;
	int	*b;
	int	end_a;
	int	end_b;
}	t_bonuslist;

int		num_of_args(int ac, char **str);
void	print_error(t_bonuslist *stack);
void	fill_stack(t_bonuslist *stack, int ac, char **av);
void	check_input(t_bonuslist *stack, int ac, char **data);
void	check_if_double(t_bonuslist *list, int *arr);
int		check_if_sorted(t_bonuslist *list, int *array);
void	apply_rule(t_bonuslist	*stack, char *str);

// Libft :
long	ft_atoi(char *str);
int		ft_isdigit(int n);
char	**ft_split(const char *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	*ft_memset(void *b, int c, size_t len);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

// Rules :
void	sa(t_bonuslist *stack);
void	sb(t_bonuslist *stack);
void	ss(t_bonuslist *list);
void	ra(t_bonuslist *list);
void	rb(t_bonuslist *list);
void	rr(t_bonuslist *list);
void	rra(t_bonuslist *list);
void	rrb(t_bonuslist *list);
void	rrr(t_bonuslist *list);
void	pa(t_bonuslist *list);
void	pb(t_bonuslist *list);

#endif