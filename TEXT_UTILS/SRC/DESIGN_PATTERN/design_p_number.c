/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   design_p_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:54:00 by tboldrin          #+#    #+#             */
/*   Updated: 2023/10/25 22:33:19 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../INCLUDES/text.h"

t_numbers	*get_numbers_instance(void)
{
	static t_numbers	instance;

	return (&instance);
}

void	update_numbers(char c, int (*elmt)[WIDTH])
{
	t_all_text	*all_letters;
	int			idx;
	int			i;

	if (c < 48 || c > 57)
		return (write_func_msg(A_FUNC,
				"Arg given should be a number."));
	idx = (c - 48);
	all_letters = get_all_text_instance();
	i = -1;
	while (++i < LENGTH)
		ft_memcpy_text(all_letters->all_numbers_array[idx][i],
			elmt[i], sizeof(elmt[i]));
}

int	(*get_number_array(char c))[WIDTH]
{
	int			idx;

	if (c < 48 || c > 57)
		return (write_func_msg(A_FUNC,
				"Arg given should be a number."), NULL);
	idx = (c - 48);
	return (get_all_text_instance()->all_numbers_array[idx]);
}
