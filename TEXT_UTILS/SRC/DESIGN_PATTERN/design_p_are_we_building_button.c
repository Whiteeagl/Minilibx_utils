/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   design_p_are_we_building_button.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 22:35:34 by wolf              #+#    #+#             */
/*   Updated: 2023/10/25 23:45:02 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../INCLUDES/text.h"

t_building_button	*get_button_building_info(void)
{
	static t_building_button	instance;

	return (&instance);
}

void	update_button_building_info(bool info)
{
	t_building_button	*instance;

	instance = get_button_building_info();
	instance->building_button = info;
}

bool	do_we_are_building_button(void)
{
	t_building_button	*instance;

	instance = get_button_building_info();
	return (instance->building_button);
}
