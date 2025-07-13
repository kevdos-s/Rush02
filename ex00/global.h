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
	char *nb;
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
char	**ft_split(char *str, char separator);
void ft_split_second_part(char *str, char sep, char **tab, int current_str);

//strutils
char *ft_strup(char *str_to_copy, int size);
int ft_strlength(char *str);
int ft_error_msg(char *msg);
int ft_count_sep(char *str, char sep);
char *ft_remove_space(char *str);
void ft_putstr_result(char *str);

//filemanager
char *ft_get_file_content(int file_descriptor);

//check
int	ft_check_and_attribute_args(int argc, char **argv, t_program_data *p_data);
int	ft_check_nb_arg(int nb_args);
int ft_check_file(t_program_data *p_data);
int ft_check_file_extension(char *str);
int ft_check_and_get_content_file(t_program_data *p_data);

//dictionnary_manager
int ft_init_dictionnary(t_program_data *p_data, int is_default);
int ft_create_dictionnary(char *content, t_program_data *p_data, int is_default);
int ft_check_data_dict(char **line_content, int size, t_dictionnary_number *p_arr_dict);
int ft_check_line(char *line, t_dictionnary_number *p_arr_dict, int line_nb);

//memory_helper
void ft_big_free(char **arr_str, int size);

//writing_number
void ft_write_nb_spelled(t_program_data *p_data, int use_default);
void ft_write_unit_nb(t_program_data *p_data, int position, int use_default);
int ft_correspond_unit(char p_c, t_dictionnary_number *p_dict, int size_dict);

#define DEFAULT_DICT_PATH "./ressource/numbers.dict"
#endif
