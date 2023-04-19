/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_libft.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:54:40 by nchaknan          #+#    #+#             */
/*   Updated: 2023/04/19 20:18:07 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = (unsigned char) '\0';
		i++;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = (void *)malloc(count * size);
	if (!p)
		return (NULL);
	else
		ft_bzero(p, (count * size));
	return (p);
}

long	ft_atoi(char *str)
{
	long		res;
	int			sign;
	int			i;

	res = 0;
	sign = 1;
	i = 0;
	while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - 48);
		i++;
	}
	return (res * sign);
}

static int	words_counter(const char *str, char c)
{
	int	counter;
	int	breaker;

	counter = 0;
	breaker = 0;
	while (*str)
	{
		if (*str != c && breaker == 0)
		{
			counter++;
			breaker = 1;
		}
		else if (*str == c)
		{
			breaker = 0;
		}
		str++;
	}
	return (counter);
}

char	**ft_split(const char *s, char c)
{
	char		**split;
	int			start;
	int			i;
	int			j;

	split = malloc((words_counter(s, c) + 1) * sizeof(char *));
	if (!split || !s)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (i > 0)
		{
			split[j] = ft_substr(s, start, i - start);
			j++;
		}
		while (s[i] == c && s[i] != '\0')
			i++;
	}
	split[j] = 0;
	return (split);
}
