/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strutils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevdos-s <kevdos-s@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 05:34:37 by kevdos-s          #+#    #+#             */
/*   Updated: 2025/07/13 06:37:10 by kevdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global.h"


int ft_error_msg(char *msg)
{
	int current;

	current = 0;
	while (msg[current] != '\0')
	{
		write(1, &msg[current], 1);
		current++;
	}

	return (0);
}
