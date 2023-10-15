/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   design_p_scale.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 14:48:37 by wolf              #+#    #+#             */
/*   Updated: 2023/10/15 15:02:39 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../INCLUDES/text.h"

t_tmp_scale	*get_scale_instance(void)
{
	static t_tmp_scale	instance;

	return (&instance);
}

void	update_scale_value(int new_scale)
{
	t_tmp_scale	*actual_scale;

	actual_scale = get_scale_instance();
	actual_scale->scale = new_scale;
}

int	get_scale(void)
{
	t_tmp_scale	*actual_scale;

	actual_scale = get_scale_instance();
	return (actual_scale->scale);
}
