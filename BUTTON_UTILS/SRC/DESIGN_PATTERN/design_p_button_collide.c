/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   design_p_button_collide.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:17:11 by wolf              #+#    #+#             */
/*   Updated: 2023/10/14 11:27:14 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../INCLUDES/button.h"

t_button_collide	*get_collide_one_instance(void)
{
	static t_button_collide	instance;

	return (&instance);
}

t_button_lst	*get_collide_origin(void)
{
	t_button_collide	*instance;

	instance = get_collide_one_instance();
	return (instance->origin_one);
}

t_button_lst	*get_collide_image(void)
{
	t_button_collide	*instance;

	instance = get_collide_one_instance();
	return (instance->collide_image);
}

void	update_collide_one(t_button_lst *origin_one,
			t_button_lst *collide_one)
{
	t_button_collide	*instance;

	instance = get_collide_one_instance();
	instance->origin_one = origin_one;
	instance->collide_image = collide_one;
}
