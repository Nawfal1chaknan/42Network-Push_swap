/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:47:38 by nchaknan          #+#    #+#             */
/*   Updated: 2023/04/10 22:56:27 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*firstp(char *str)
{
	char	*finals;
	int		i;

	if (!str)
		return (0);
	finals = malloc(ft_strlen(str) + 1);
	if (!finals)
		return (0);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		finals[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		finals[i] = str[i];
		i++;
	}
	finals[i] = '\0';
	return (finals);
}

char	*lastp(char *str)
{
	char	*finals;
	int		i;
	int		j;

	if (!str)
		return (0);
	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\n')
		i++;
	finals = malloc(ft_strlen(str) - i + 1);
	if (!finals)
		return (0);
	j = 0;
	while (str[i])
		finals[j++] = str[i++];
	finals[j] = '\0';
	if (finals[0] == '\0')
	{
		free(finals);
		finals = 0;
	}
	free(str);
	return (finals);
}

char	*my_stock(int fd, char *stock)
{
	char	*buffer;
	int		r;

	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (0);
	r = 1;
	while (r > 0 && !(ft_strchr(stock, '\n')))
	{
		r = read(fd, buffer, BUFFER_SIZE);
		if (r == -1)
		{
			free(buffer);
			free(stock);
			stock = 0;
			return (0);
		}
		buffer[r] = '\0';
		stock = ft_strjoin(stock, buffer);
	}
	free(buffer);
	return (stock);
}

char	*get_next_line(int fd)
{
	static char	*stock;
	char		*finalstr;

	if (fd < 0)
		return (0);
	stock = my_stock(fd, stock);
	finalstr = firstp(stock);
	stock = lastp(stock);
	return (finalstr);
}
