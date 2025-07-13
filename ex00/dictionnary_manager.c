/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionnary_manager.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevdos-s <kevdos-s@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 10:16:16 by kevdos-s          #+#    #+#             */
/*   Updated: 2025/07/13 10:54:45 by kevdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global.h"

void ft_init_dictionnary(t_program_data *p_data, int is_default)
{
	char *content_file;
	int file_descriptor;

	if (is_default)
	{
		file_descriptor = open(DEFAULT_DICT_PATH, O_RDONLY);
		content_file = ft_get_file_content(file_descriptor);
		close(file_descriptor);

		ft_create_dictionnary(content_file, p_data, is_default);
	}
	else
	{
		content_file = p_data->content_file;
		ft_create_dictionnary(content_file, p_data, is_default);
	}

}

void ft_create_dictionnary(char *content, t_program_data *p_data, int is_default)
{

}
