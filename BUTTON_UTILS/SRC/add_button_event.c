/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_button_event.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 23:05:54 by wolf              #+#    #+#             */
/*   Updated: 2023/10/24 17:37:12 by wolf             ###   ########.fr       */
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

/*
	[── FR ──]
	│
	│	Event de bouton par défaut quand NULL est passé.

	[── EN ──]
	│
	│	Default button event when NULL is passed.

*/
void	no_event(void)
{
	return (write_msg("No event on this button.\n"));
}

/*
	[── FR ──]
	│
	│	Permet, si un bouton est touché et cliqué,
	│		de lancer son event.

	[── EN ──]
	│
	│	Allows, if a button is touched and clicked,
	│		to trigger its event.

*/
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

/*
	[── FR ──]
	│
	│	Permet d'ajouter un event à un bouton.
	│	Ainsi que de le lancer si le bouton est cliqué.

	[── EN ──]
	│
	│	Allows adding an event to a button.
	│	Also, it allows triggering it if the button is clicked.

*/
void	add_button_event(void *button, t_event_function event_func)
{
	if (!event_func)
		event_func = no_event;
	add_event_to_lst(button, event_func);
	mlx_mouse_hook(get_win_ptr(), mouse_hook_function, NULL);
}
