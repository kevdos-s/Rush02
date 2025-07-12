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



t_dictionnary_number *ft_parse_dictionnary_to_struct(char *p_str_dictionnary);
#endif
