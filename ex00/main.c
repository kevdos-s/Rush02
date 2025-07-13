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
	t_program_data l_program_data;

	printf("hello");

	if (!ft_check_nb_arg(argc))
		return (0);

	if (!ft_check_and_attribute_args(argc, argv, &l_program_data))
		return (0);

	if(l_program_data.path_filename != NULL)
	{
		if (!ft_check_file(&l_program_data))
			return (0);
		if (!ft_check_and_get_content_file(&l_program_data))
			return (0);
	}

}
