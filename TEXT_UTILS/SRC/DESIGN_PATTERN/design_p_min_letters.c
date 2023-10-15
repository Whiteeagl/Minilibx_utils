/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   design_p_min_letters.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:20:00 by wolf              #+#    #+#             */
/*   Updated: 2023/10/15 01:21:06 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../INCLUDES/text.h"

t_all_text	*get_all_text_instance(void)
{
	static t_all_text	instance;

	return (&instance);
}

/*
	Ici on va récupérer un sous élément tel que a[6][4]. (une lettre)
	On va ensuite le mettre dans le tableau des lettres globales.
	
	Pour cela on va copier le contenu de a,
	pour le mettre dans l'emplacement lui correspondant.
	
	Autrement dit dans all_letters->all_letters_array[ son_idx_d_emplacement ].

*/
void	err_charactere_not_recoginzed(char c)
{
	write(1, "Character : ", 12);
	if (c == 32)
		write(1, "(space)", 7);
	else
		write(1, &c, 1);
	write(1, " not supported here.\n", 22);
}


void	update_min_letters(char c, int (*elmt)[4])
{
	t_all_text	*all_letters;
	int			idx;
	int			i;

	if (c < 97 || c > 122)
		return (err_charactere_not_recoginzed(c));
	idx = (c - 97);
	all_letters = get_all_text_instance();
	i = -1;
	while (++i < 6)
		ft_memcpy_text(all_letters->all_letters_array[idx][i],
			elmt[i], sizeof(elmt[i]));
}

int	(*get_min_letters(char c))[4]
{
	t_all_text	*all_letters;
	int			idx;

	if (c < 97 || c > 122)
		return (err_charactere_not_recoginzed(c), NULL);
	idx = (c - 97);
	all_letters = get_all_text_instance();
	return (all_letters->all_letters_array[idx]);
}
