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
char to_test[] = "0: zero\n1: one\n2: two\n3: three\n4: four\n5: five\n6: six\n7: seven\n8: eight\n9: nine\n10: ten\n11: eleven\n12: twelve\n13: thirteen\n14: fourteen\n15: fifteen\n16: sixteen\n17: seventeen\n18: eighteen\n19: nineteen\n20: twenty\n30: thirty\n40: forty\n50: fifty\n60: sixty\n70: seventy\n80: eighty\n90: ninety\n100: hundred\n1000: thousand\n1000000: million\n1000000000: billion\n1000000000000: trillion\n1000000000000000: quadrillion\n1000000000000000000: quintillion\n1000000000000000000000: sextillion\n1000000000000000000000000: septillion\n1000000000000000000000000000: octillion\n1000000000000000000000000000000: nonillion\n1000000000000000000000000000000000: decillion\n1000000000000000000000000000000000000: undecillion\n";


//parse la string comme dit sur le sujet, et enregistre les dans la structure
t_dictionnary_number *ft_parse_dictionnary_to_struct(char *p_str_dictionnary)
{
	//que tu comprenne bien, je veux en retour un tableau ou au index c est des type de "t_dictionnary" si t as jamais utilisé de structure je te laisserais regarder tout ça
	t_dictionnary_number *l_dictionnary;
	
	//commence par splitter ta string en argument par les retours à la ligne les mettre dans un tableau de string

	//ensuite tu peux te faire une fonction ou t envoie une string par exemple "0: zero"
	//	qui va te parser par : et ensuite atoi le num et l enregistrer dans la structure

	//evidement tu devras utiliser les malloc, utilise autant de fonction qu'il te semble necessaire, met les toutes ici et on rangera correctement demain ou dimanche aprem

}

