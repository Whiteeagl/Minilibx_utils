/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_special_cara.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboldrin <tboldrin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 23:08:35 by wolf              #+#    #+#             */
/*   Updated: 2023/10/20 15:16:39 by tboldrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../INCLUDES/text.h"

int	(*is_it_a_special_cara(char c))[WIDTH]
{
	if (c == ' ')
		return (get_special_cara_instance()->space);
	return (NULL);
}

int	(*is_it_a_number(char c))[WIDTH]
{
	if (c >= 48 && c <= 57)
		return (get_number_array(c));
	return (NULL);
}

int	(*maybe_not_a_letter(char c))[WIDTH]
{
	int	(*tmp_array)[WIDTH];

	tmp_array = is_it_a_special_cara(c);
	if (tmp_array)
		return (tmp_array);
	tmp_array = is_it_a_number(c);
	if (tmp_array)
		return (tmp_array);
	return (NULL);
}
