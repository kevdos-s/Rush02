/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   global.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevdos-s <kevdos-s@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 05:57:54 by kevdos-s          #+#    #+#             */
/*   Updated: 2025/07/12 05:57:54 by kevdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef GLOBAL_H
# define GLOBAL_H

typedef struct s_dictionnary_number{
	int nb;
	char *str_nb_spelled;
} t_dictionnary_number;

typedef struct s_program_data{
	char *nb_to_convert;
	char *path_filename;
	char *content_file;
	t_dictionnary_number *arr_dic_file;
	int size_dic_fil;
	t_dictionnary_number *arr_dic_default;
	int size_dic_default;
} t_program_data;

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>


#include <stdio.h>

//parsing
t_dictionnary_number *ft_parse_dictionnary_to_struct(char *p_str_dictionnary);

//strutils
char *ft_strup(char *str_to_copy, int size);
int ft_strlength(char *str);
int ft_error_msg(char *msg);

//filemanager
char *ft_get_file_content(int file_descriptor);

//check
int	ft_check_and_attribute_args(int argc, char **argv, t_program_data *p_data);
int	ft_check_nb_arg(int nb_args);
int ft_check_file(t_program_data *p_data);
int ft_check_file_extension(char *str);

#define DEFAULT_DICT_PATH "./ressource/numbers.dict"
#endif
