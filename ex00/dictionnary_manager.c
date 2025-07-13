/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionnary_manager.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevdos-s <kevdos-s@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 10:16:16 by kevdos-s          #+#    #+#             */
/*   Updated: 2025/07/13 18:10:35 by kevdos-s         ###   ########.fr       */
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
		{
			ft_big_free(l_arr_str_content, ft_count_sep(content,'\n'));
			return (0);
		}
	}
	else
	{
		p_data->size_dic_fil = count;
		l_arr_str_content = ft_split(content, '\n');
		if (!ft_check_data_dict(l_arr_str_content, count, p_data->arr_dic_file))
		{
			ft_big_free(l_arr_str_content, ft_count_sep(content, '\n'));
			return (0);
		}
	}
	return (1);
}

int ft_check_data_dict(char **line_content, int size, t_dictionnary_number *p_arr_dict)
{
	int current_line;

	current_line = 0;
	p_arr_dict = (t_dictionnary_number *)malloc(size * (sizeof(t_dictionnary_number) + 510));
	while (current_line < size)
	{
		ft_check_line(line_content[current_line], p_arr_dict, current_line);
		current_line++;
	}

	return (1);
}

int ft_check_line(char *line, t_dictionnary_number *p_arr_dict, int line_nb)
{

	char **test = ft_split(line, ':');
	p_arr_dict[line_nb].nb = ft_remove_space(test[0]);
	p_arr_dict[line_nb].str_nb_spelled = ft_remove_space(test[1]);
	free(test[0]);
	free(test[1]);

	return (1);
}
