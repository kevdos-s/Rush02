/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainLilian.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevdos-s <kevdos-s@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 06:42:54 by kevdos-s          #+#    #+#             */
/*   Updated: 2025/07/12 06:42:54 by kevdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global.h"

char to_test[] = "0: zero\n1: one\n2: two\n3: three\n4: four\n5: five\n6: six\n7: seven\n8: eight\n9: nine\n10: ten\n11: eleven\n12: twelve\n13: thirteen\n14: fourteen\n15: fifteen\n16: sixteen\n17: seventeen\n18: eighteen\n19: nineteen\n20: twenty\n30: thirty\n40: forty\n50: fifty\n60: sixty\n70: seventy\n80: eighty\n90: ninety\n100: hundred\n1000: thousand\n1000000: million\n1000000000: billion\n1000000000000: trillion\n1000000000000000: quadrillion\n1000000000000000000: quintillion\n1000000000000000000000: sextillion\n1000000000000000000000000: septillion\n1000000000000000000000000000: octillion\n1000000000000000000000000000000: nonillion\n1000000000000000000000000000000000: decillion\n1000000000000000000000000000000000000: undecillion\n";

int main()
{
	//si tu veux test d'afficher le resultat
	t_dictionnary_number *l_dictionnary = ft_parse_dictionnary_to_struct(to_test);
	(void)l_dictionnary; //pour pas te faire embeter par le cc plus tard
}
