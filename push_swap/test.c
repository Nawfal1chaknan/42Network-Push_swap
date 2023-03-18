/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:46:22 by nchaknan          #+#    #+#             */
/*   Updated: 2023/03/18 18:06:32 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void    pa(t_mylist list)
{
    int *tmp;
    int *tmp2;
    int t;
    int t2;
    int a;
    int b;
    

    tmp = malloc(sizeof(int) * 48);
    tmp2 = malloc(sizeof(int) * 48);
    
    t = 0;
    a = 0;
    while(list.a[a] != '\0')
    {
        tmp[t] = list.a[a];
        t++;
        a++;
    }
    tmp[t] = '\0';

    t2 = 0;
    b = 0;
    while(list.b[b] != '\0')
    {
        tmp2[t2] = list.b[b];
        t2++;
        b++;
    }
    tmp2[t2] = '\0';
    
    list.a[0] = list.b[0];
    
    t = 0;
    a = 1;
    while(tmp[t] != '\0')
    {
        list.a[a] = tmp[t];
        a++;
        t++; 
    }
    list.a[a] = '\0';

    t2 = 1;
    b = 0;
    while(tmp2[t2] != '\0')
    {
        list.b[b] = tmp2[t2];
        b++;
        t2++; 
    }
    list.b[b] = '\0';
}

void    sa(int *a)
{
    int swap;
    int top;

    top = arrlen(a) - 1;
    if (arrlen(a) >= 2)
    {
        swap = a[top];
        a[top] = a[top - 1];
        a[top - 1] = swap;
    }
}

int main()
{
    int *a;
    int *b;
    
    a = malloc(sizeof(int) * 48);
    b = malloc(sizeof(int) * 48);

    a[0] = 4;
    a[1] = 5;
    a[2] = 6;
    a[3] = 7;

    b[0] = 3;
    b[1] = 2;
    b[2] = 1;

    sa(a);

    printf("\n a : ");
    
    int i = 0;
    while(a[i] != '\0')
    {
        printf("[%i] ", a[i]);
        i++;
    }

    printf("\n\n b : ");
    
    int j = 0;
    while(b[j] != '\0')
    {
        printf("[%i] ", b[j]);
        j++;
    }
    
    printf("\n\n");
}