/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_manager.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevdos-s <kevdos-s@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 18:50:04 by kevdos-s          #+#    #+#             */
/*   Updated: 2025/07/13 07:21:54 by kevdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global.h"



void ft_test_file()
{
	char *file_path = "./ressource/numbers.dict";

	int file_test = open(file_path, O_RDONLY);

	char *content = ft_get_file_content(file_test);

	close(file_test);

	printf("%s\n", content);
}

char *ft_get_file_content(int file_descriptor)
{
	int max_octet = 100000000; //100 megaoctet
	char *content_file;
	char *result;

	content_file = (char *)malloc(max_octet * sizeof(char));
	int test = read(file_descriptor, content_file, max_octet);
	content_file[test] = '\0';

	result = ft_strup(content_file, test);
	free(content_file);

	return (result);
}

char *ft_create_memory_str(int nb_octet)
{
	char *result;

	result = (char *)malloc(nb_octet * sizeof(char));

	return (result);
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
