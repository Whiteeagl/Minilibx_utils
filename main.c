/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 22:34:45 by wolf              #+#    #+#             */
/*   Updated: 2023/10/21 22:11:33 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "INCLUDES/basique_mlx_needed.h"


void	my_event_function(void)
{
	write_msg("Coucou je suis un bouton\n");
}

void	another_event_function(void)
{
	write_msg("Coucou je suis un autre bouton\n");
}

void	mon_prog(void)
{
	create_empty_button(10, 10, 100, 100);
	add_button_event(0, my_event_function);

	create_empty_button(10, 120, 100, 100);
	add_button_event(1, another_event_function);
}

int main(void)
{
	void	*mlx_ptr = mlx_init();
	void	*win_ptr = mlx_new_window(mlx_ptr, 1800, 900, "Custom Text");

	update_mlx_infos(mlx_ptr, win_ptr, NULL);
	init_all_text_stuff();
	init_button_event();

	mon_prog();

	mlx_hook(win_ptr, 2, 1L << 0, &handle_keypress, NULL);
	mlx_loop(mlx_ptr);
	return (0);
}

