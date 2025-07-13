/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainKevin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevdos-s <kevdos-s@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 18:50:04 by kevdos-s          #+#    #+#             */
/*   Updated: 2025/07/13 03:18:51 by kevdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global.h"

char *ft_size_file(int file_descriptor);
char *ft_create_memory_str(int nb_octet);

int main()
{
	char *file_path = "./ressource/numbers.dict";

	int file_test = open(file_path, O_RDONLY);

	char *content = ft_size_file(file_test);

	close(file_test);


	printf("%s\n", content);

}

char *ft_size_file(int file_descriptor)
{
	int max_octet = 100000000; //100 megaoctet
	char *content_file;

	int test = read(file_descriptor, content_file, max_octet);
	content_file[test] = '\0';

	//content_file = malloc(sizeof(test));

	//read(file_descriptor, content_file, test);

	return (content_file);
}

char *ft_create_memory_str(int nb_octet)
{
	char *result;

	result = (char *)malloc(nb_octet * sizeof(char));

	return (result);
}
