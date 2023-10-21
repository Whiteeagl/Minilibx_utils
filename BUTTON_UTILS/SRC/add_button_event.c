/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_button_event.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 23:05:54 by wolf              #+#    #+#             */
/*   Updated: 2023/10/21 22:25:20 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/button.h"

int	did_it_collide(int click_id)
{
	if (click_id == 1)
	{
		if (is_mouse_inside_rect())
			return (1);
	}
	return (0);
}

int	mouse_hook_function(int click_id, int x, int y)
{
	int					collision_result;
	t_event_function	get_func;

	(void)x;
	(void)y;
	collision_result = did_it_collide(click_id);
	if (collision_result)
	{
		get_func = get_button_event(get_collide_origin()->id / 2);
		if (get_func)
			get_func();
	}
	return (0);
}

void	add_button_event(int button_id, t_event_function event_func)
{
	add_event_to_lst(button_id, event_func);
	mlx_mouse_hook(get_win_ptr(), mouse_hook_function, NULL);
}
