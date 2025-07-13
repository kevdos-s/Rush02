/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strutils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevdos-s <kevdos-s@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 05:34:37 by kevdos-s          #+#    #+#             */
/*   Updated: 2025/07/13 08:07:58 by kevdos-s         ###   ########.fr       */
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
