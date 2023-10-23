/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   design_p_mouse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:16:50 by wolf              #+#    #+#             */
/*   Updated: 2023/10/14 11:28:06 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../INCLUDES/button.h"

t_mouse	*get_mouse_instance(void)
{
	static t_mouse	instance;

	return (&instance);
}

void	update_coord(int x, int y)
{
	t_mouse	*mouse_stuff;

	mouse_stuff = get_mouse_instance();
	mouse_stuff->mx = x;
	mouse_stuff->my = y;
}

int	get_mx(void)
{
	t_mouse	*mouse_stuff;

	mouse_stuff = get_mouse_instance();
	return (mouse_stuff->mx);
}

int	get_my(void)
{
	t_mouse	*mouse_stuff;

	mouse_stuff = get_mouse_instance();
	return (mouse_stuff->my);
}
