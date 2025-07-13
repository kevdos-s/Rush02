/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionnary_manager.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevdos-s <kevdos-s@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 10:16:16 by kevdos-s          #+#    #+#             */
/*   Updated: 2025/07/13 16:48:37 by kevdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global.h"

int ft_init_dictionnary(t_program_data *p_data, int is_default)
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
	return (1);
}

int ft_create_dictionnary(char *content, t_program_data *p_data, int is_default)
{
	int count;
	char **l_arr_str_content;

	count = ft_count_sep(content, '\n');
	if (is_default)
	{
		p_data->size_dic_default = count;
		l_arr_str_content = ft_split(content, '\n');
		if (!ft_check_data_dict(l_arr_str_content, count, p_data->arr_dic_default))
			return (0);
	}
	else
	{
		p_data->size_dic_fil = count;
		l_arr_str_content = ft_split(content, '\n');
		if (!ft_check_data_dict(l_arr_str_content, count, p_data->arr_dic_file))
			return (0);
	}


	return (1);
}

int ft_check_data_dict(char **line_content, int size, t_dictionnary_number *p_arr_dict)
{
	int current_line;
	char **small_dict;
	int count_sep_dict;
	int current;

	current_line = 0;
	current = 0;
	count_sep_dict = 0;
	while (current_line < size)
	{
		count_sep_dict = ft_count_sep(line_content[current_line], ':');
		while(line_content[current_line][current])
		{
			ft_check_line(line_content[current_line], p_arr_dict, current_line);
		}
		current_line++;
	}

	return (1);
}

int ft_check_line(char *line, t_dictionnary_number *p_arr_dict, int line_nb)
{

}
