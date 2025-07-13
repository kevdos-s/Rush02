/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strutils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevdos-s <kevdos-s@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 05:34:37 by kevdos-s          #+#    #+#             */
/*   Updated: 2025/07/13 17:54:57 by kevdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global.h"


int ft_error_msg(char *msg)
{
	int current;

	current = 0;
	while (msg[current] != '\0')
	{
		write(1, &msg[current], 1);
		current++;
	}
	write(1, "\n", 1);

	return (0);
}

char *ft_strup(char *str_to_copy, int size)
{
	int current;
	char *result;

	current = 0;
	result = (char *)malloc(size * sizeof(char));

	while(current < size)
	{
		result[current] = str_to_copy[current];
		current++;
	}
	result[current] = '\0';

	return (result);
}

int ft_strlength(char *str)
{
	int current;

	current = 0;

	while (str[current] != '\0')
	{
		current++;
	}
	return (current);
}

int ft_count_sep(char *str, char sep)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (str[i])
	{
		if (str[i] == sep || str[i + 1] == '\0')
		{
			result++;
		}
		i++;
	}

	return (result);
}

char *ft_remove_space(char *str)
{
	int current;
	int temp_current;
	int size;
	char *result;

	current = 0;

	while (str[current] >= 01 && str[current] <= 32)
		current++;
	temp_current = current;

	while(str[current] >= ' ' && str[current] <= '~')
		current++;

	size = current - temp_current;
	result = (char *)malloc((size + 1) * sizeof(char));
	current = temp_current;
	temp_current = 0;

	while (str[current] >= ' ' && str[current] <= '~')
	{
		result[temp_current] = str[current];
		current++;
		temp_current++;
	}
	return (result);
}
