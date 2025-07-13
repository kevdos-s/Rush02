/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevdos-s <kevdos-s@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 06:49:06 by kevdos-s          #+#    #+#             */
/*   Updated: 2025/07/13 07:47:39 by kevdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global.h"

int	ft_check_nb_arg(int nb_args)
{
	if (nb_args != 2 || nb_args != 3)
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
