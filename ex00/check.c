/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevdos-s <kevdos-s@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 06:49:06 by kevdos-s          #+#    #+#             */
/*   Updated: 2025/07/13 14:40:05 by kevdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global.h"

int	ft_check_nb_arg(int nb_args)
{
	if (!(nb_args <= 3) || nb_args == 1)
	{
		return (ft_error_msg("Not the right number of arguments"));
	}
	return (1);
}

int	ft_check_and_attribute_args(int argc, char **argv, t_program_data *p_data)
{
	int current;
	char *nb_ascii;

	if (argc == 2)
	{
		nb_ascii = argv[1];
		p_data->path_filename = NULL;
	}
	if (argc == 3)
	{
		p_data->path_filename = argv[1];
		nb_ascii = argv[2];
	}

	while (nb_ascii[current] != '\0')
	{
		if (nb_ascii[current] == '-')
			return (ft_error_msg("Don't accept negative number"));
		if (!(nb_ascii[current] >= '0' && nb_ascii[current] <= '9'))
			return (ft_error_msg("Number incorrect, must be an integer"));
		current++;
	}
	p_data->nb_to_convert = nb_ascii;
	return (1);
}

int ft_check_file(t_program_data *p_data)
{
	int file_descriptor;

	if (!ft_check_file_extension(p_data->path_filename))
		return (ft_error_msg("Wrong file extention"));

	file_descriptor = open(p_data->path_filename, O_RDONLY);

	if (file_descriptor == -1)
	{
		close(file_descriptor);
		return (ft_error_msg("Cannot access file or don't exist"));
	}
	close(file_descriptor);

	return (1);
}

int ft_check_file_extension(char *str)
{
	int str_length;
	int current_str;
	int current_ext;
	char *extension;

	extension = ".dict";
	str_length = ft_strlength(str);
	current_str = str_length - 5;
	current_ext = 0;

	while (str_length > current_str)
	{
		if (str[current_str] != extension[current_ext])
			return (0);
		current_str++;
		current_ext++;
	}
	return (1);
}

int ft_check_and_get_content_file(t_program_data *p_data)
{
	char *content;
	int file_descriptor;

	file_descriptor = open(p_data->path_filename, O_RDONLY);

	content = ft_get_file_content(file_descriptor);

	close(file_descriptor);

	if (content == NULL || content[0] == '\0')
		return (ft_error_msg("File empty or cannot read"));

	p_data->content_file = content;

	return (1);
}
