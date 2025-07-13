/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writing_number.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevdos-s <kevdos-s@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 18:13:23 by kevdos-s          #+#    #+#             */
/*   Updated: 2025/07/13 20:29:04 by kevdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global.h"

void ft_write_nb_spelled(t_program_data *p_data, int use_default)
{
	int nb_number_bf_comma;
	int current;

	nb_number_bf_comma = ft_strlength(p_data->nb_to_convert) - 1;
	current = 0;
	while (current <= nb_number_bf_comma)
	{
		ft_write_unit_nb(p_data, nb_number_bf_comma, use_default);


		current++;
	}


}

void ft_write_unit_nb(t_program_data *p_data, int position, int use_default)
{
	t_dictionnary_number *dict_to_use;
	int size_dict;
	int current;
	int nb_str_length;
	int index_millieme_dict;

	current = 0;
	if (use_default)
	{
		dict_to_use = p_data->arr_dic_default;
		size_dict = p_data->size_dic_default;
	}
	else
	{
		dict_to_use = p_data->arr_dic_file;
		size_dict = p_data->size_dic_fil;
	}

	while (current < size_dict)
	{
		nb_str_length = ft_strlength(dict_to_use[current].nb);
		if (nb_str_length <= position)
			index_millieme_dict = current;
		current++;
	}

	int diff = position - nb_str_length;

	if (diff == 0)
	{
		int test = (ft_strlength(p_data->nb_to_convert) - 1) - position;
		int index_unit = ft_correspond_unit(p_data->nb_to_convert[test], dict_to_use, size_dict);

		ft_putstr_result(dict_to_use[index_unit].str_nb_spelled);
		ft_putstr_result(dict_to_use[index_millieme_dict].str_nb_spelled);

	}


}

int ft_correspond_unit(char p_c, t_dictionnary_number *p_dict, int size_dict)
{
	int current;

	current = 0;

	while (p_dict[current].nb[0] != p_c || current != size_dict)
	{
		current++;
	}

	return (current);

}
