/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   design_p_min_letters.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboldrin <tboldrin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:20:00 by wolf              #+#    #+#             */
/*   Updated: 2023/10/20 15:17:00 by tboldrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../INCLUDES/text.h"

t_all_text	*get_all_text_instance(void)
{
	static t_all_text	instance;

	return (&instance);
}

/*
	Ici on va récupérer un sous élément tel que a[LENGTH][WIDTH]. (une lettre)
	On va ensuite le mettre dans le tableau des lettres générales.
	
	Pour cela on va copier le contenu de a,
	pour le mettre dans l'emplacement lui correspondant.
	
	Autrement dit dans all_letters->all_letters_array[ son_idx_d_emplacement ].

*/
void	update_min_letters(char c, int (*elmt)[WIDTH])
{
	t_all_text	*all_letters;
	int			idx;
	int			i;

	if (c < 97 || c > 122)
		return (write_func_msg("update_min_letters",
				"Doit être une lettre en minuscule."));
	idx = (c - 97);
	all_letters = get_all_text_instance();
	i = -1;
	while (++i < LENGTH)
		ft_memcpy_text(all_letters->all_letters_array[idx][i],
			elmt[i], sizeof(elmt[i]));
}

/*
	On renvoie le tableau de pixel qui représente la lettre en question.

*/
int	(*get_min_letters(char c))[WIDTH]
{
	t_all_text	*all_letters;
	int			idx;
	int			(*tmp_array)[WIDTH];

	tmp_array = maybe_not_a_letter(c);
	if (tmp_array != NULL)
		return (tmp_array);
	if (c < 97 || c > 122)
		return (err_charactere_not_recoginzed(c), NULL);
	idx = (c - 97);
	all_letters = get_all_text_instance();
	return (all_letters->all_letters_array[idx]);
}
