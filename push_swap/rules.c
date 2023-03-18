/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 12:17:22 by nchaknan          #+#    #+#             */
/*   Updated: 2023/03/18 20:15:25 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void    sa(t_mylist list)
{
    int swap;
    int top;

    if (arrlen(list.a) >= 2)
    {
        top = arrlen(list.a) - 1;
        swap = list.a[top];
        list.a[top] = list.a[top - 1];
        list.a[top - 1] = swap;
    }
}

void    sb(t_mylist list)
{
    int swap;
    int top;

    if (arrlen(list.b) >= 2)
    {
        top = arrlen(list.b) - 1;
        swap = list.b[top];
        list.b[top] = list.b[top - 1];
        list.b[top - 1] = swap;
    }
}

void    ss(t_mylist list)
{
    sa(list);
    sb(list);
}

void    pa(t_mylist list)
{
    int top_a;
    int top_b;

    if (list.b[0] != '\0')
    {
        top_a = arrlen(list.a);
        top_b = arrlen(list.b) - 1;
        list.a[top_a] = list.b[top_b];
        list.b[top_b] = '\0';
    }
}

void    pb(t_mylist list)
{
    int top_b;
    int top_a;

    if (list.a[0] != '\0')
    {
        top_b = arrlen(list.b);
        top_a = arrlen(list.a) - 1;
        list.b[top_b] = list.a[top_a];
        list.a[top_a] = '\0';
    }
}

void    ra(t_mylist list)
{
    int top;
    int *tmp_arr;
    int i;
    int j;
    
    if (arrlen(list.a) >= 2)
    {
        top = arrlen(list.a) - 1;
        tmp_arr = malloc(sizeof(list.a));
        tmp_arr[0] = list.a[top];
        list.a[top] = '\0';
        i = 0;
        j = 1;
        while (list.a[i] != '\0')
            tmp_arr[j++] = list.a[i++];
        i = 0;
        j = 0;
        while (tmp_arr[j] != '\0')
            list.a[i++] = tmp_arr[j++];
    }
}

void    rb(t_mylist list)
{
    int top;
    int *tmp_arr;
    int i;
    int j;
    
    if (arrlen(list.b) >= 2)
    {
        top = arrlen(list.b) - 1;
        tmp_arr = malloc(sizeof(list.b));
        tmp_arr[0] = list.b[top];
        list.b[top] = '\0';
        i = 0;
        j = 1;
        while (list.b[i] != '\0')
            tmp_arr[j++] = list.b[i++];
        i = 0;
        j = 0;
        while (tmp_arr[j] != '\0')
            list.b[i++] = tmp_arr[j++];
    }
}

void    rr(t_mylist list)
{
    ra(list);
    rb(list);
}

void    rra(t_mylist list)
{
    int *tmp_arr;
    int i;
    int j;

    if (arrlen(list.a) >= 2)
    {
        tmp_arr = malloc(sizeof(list.a));
        i = 1;
        j = 0;
        while (list.a[i] != '\0')
            tmp_arr[j++] = list.a[i++];

            
        tmp_arr[j] = list.a[0];
        i = 0;
        j = 0;
        while (tmp_arr[j] != '\0')
            list.a[i++] = tmp_arr[j++];
    }
}

void    rrb(t_mylist list)
{
    int *tmp_arr;
    int i;
    int j;

    if (arrlen(list.b) >= 2)
    {
        tmp_arr = malloc(sizeof(list.b));
        i = 1;
        j = 0;
        while (list.b[i] != '\0')
            tmp_arr[j++] = list.b[i++];

            
        tmp_arr[j] = list.b[0];
        i = 0;
        j = 0;
        while (tmp_arr[j] != '\0')
            list.b[i++] = tmp_arr[j++];
    }
}

void    rrr(t_mylist list)
{
    rra(list);
    rrb(list);
}