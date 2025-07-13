/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevdos-s <kevdos-s@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 06:12:48 by kevdos-s          #+#    #+#             */
/*   Updated: 2025/07/12 06:12:48 by kevdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global.h"


char	**ft_split(char *str, char separator)
{
	char	**tab;
	int		size_tab;

	size_tab = ft_count_sep(str, separator);
	tab = (char **)malloc(size_tab * sizeof(char *));

	ft_split_second_part(str, separator, tab, 0);

	return (tab);
}

void ft_split_second_part(char *str, char sep, char **tab, int curr_str)
{
	int curr_tab_str;
	int l_start_pos;
	int l_current_index_tab;

	curr_tab_str = 0;
	l_start_pos = 0;
	l_current_index_tab = 0;
	while (str[curr_str] != '\0')
	{
		if (str[curr_str] == sep || str[curr_str + 1] == '\0')
		{
			if (str[curr_str + 1] == '\0')
				curr_str++;
			tab[l_current_index_tab] = malloc((curr_str - l_start_pos + 1) * sizeof(char));
			while (l_start_pos < curr_str)
			{
				tab[l_current_index_tab][curr_tab_str] = str[l_start_pos];
				curr_tab_str++;
				l_start_pos ++;
			}
			tab[l_current_index_tab][curr_tab_str] = '\0';
			l_start_pos++;
			l_current_index_tab++;
			curr_tab_str = 0;
		}
		curr_str++;
	}
}


