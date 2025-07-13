/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edeli <edeli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 06:07:02 by kevdos-s          #+#    #+#             */
/*   Updated: 2025/07/12 23:49:11 by edeli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global.h"

int main(int argc, char **argv)
{
	char *value_to_convert;
	char *path_dictionnary_file;

	printf("hello");


	if (argc != 2 || argc != 3)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (argc == 2)
	{
		value_to_convert = argv[1];
	}
	if (argc == 3)
	{
		path_dictionnary_file = argv[1];
		value_to_convert = argv[2];
	}
	int current = 0;

	while (value_to_convert[current] != '\0')
	{
		if (value_to_convert[current] == '-' || value_to_convert[current] == ','
				|| value_to_convert[current] == '.')
		{
			write(1, "Error\n", 6);
			return (0);
		}
		current++;
	}
}
