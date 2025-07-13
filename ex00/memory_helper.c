/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory_helper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevdos-s <kevdos-s@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 18:05:40 by kevdos-s          #+#    #+#             */
/*   Updated: 2025/07/13 18:08:22 by kevdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_big_free(char **arr_str, int size)
{
	int current;

	current = 0;

	while (current < size)
	{
		free(arr_str[current]);
		current++;
	}
	free(arr_str);
}
