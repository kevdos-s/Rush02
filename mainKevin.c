/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainKevin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevdos-s <kevdos-s@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 18:50:04 by kevdos-s          #+#    #+#             */
/*   Updated: 2025/07/13 03:12:16 by kevdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global.h"

int ft_size_file(int file_descriptor);
char *ft_create_memory_str(int nb_octet);

int main()
{
	char *file_path = "./ressource/numbers.dict";
	char *content_file_test;

	int file_test = open(file_path, O_RDONLY);

	//does't work ???
	//exactly same code in the ft_size_file function
	int max_octet = 400000000; //400 megaoctet
	char *content_file;

	int test = read(file_test, content_file, max_octet);
	//end of copy from ft_size_file function

	//BUT HERE IT WORK??
	int octet_to_read = ft_size_file(file_test);

	close(file_test);
	//content_file_test = (char *)malloc(octet_to_read * sizeof(char));

	int file_open = open(file_path, O_RDONLY);

	read(file_open, content_file_test, octet_to_read);

	close(file_open);

	printf("%s\n", content_file_test);

}

int ft_size_file(int file_descriptor)
{
	int max_octet = 400000000; //400 megaoctet
	char *content_file;

	int test = read(file_descriptor, content_file, max_octet);

	return (test);
}

char *ft_create_memory_str(int nb_octet)
{
	char *result;

	result = (char *)malloc(nb_octet * sizeof(char));

	return (result);
}
