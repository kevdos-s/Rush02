/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_manager.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevdos-s <kevdos-s@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 18:50:04 by kevdos-s          #+#    #+#             */
/*   Updated: 2025/07/13 21:39:54 by kevdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global.h"



char *ft_get_file_content(int file_descriptor)
{
	int max_octet = 100000000; //100 megaoctet
	char *content_file;
	char *result;

	content_file = (char *)malloc(max_octet * sizeof(char));
	int test = read(file_descriptor, content_file, max_octet);

	if (test == -1 || content_file == NULL)
	{
		free(content_file);
		return NULL;
	}

	result = ft_strup(content_file, test);
	free(content_file);

	return (result);
}
