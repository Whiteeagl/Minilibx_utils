/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   design_p_icc_letters.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 19:06:31 by wolf              #+#    #+#             */
/*   Updated: 2023/10/15 22:32:25 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../INCLUDES/text.h"

t_icc_letters	*get_icc_letters_instance(void)
{
	static t_icc_letters	instance;

	return (&instance);
}

int	(*get_min_icc_letters(char c))[4]
{
	t_icc_letters	*icc_instance;

	icc_instance = get_icc_letters_instance();
	if (c == 'm')
		return (icc_instance->m_end);
	if (c == 'v')
		return (icc_instance->v_end);
	if (c == 'w')
		return (icc_instance->w_end);
	if (c == 'x')
		return (icc_instance->x_end);
	if (c == 'y')
		return (icc_instance->y_end);
	if (c == 'z')
		return (icc_instance->z_end);
	return (NULL);
}
