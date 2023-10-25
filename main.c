/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 22:34:45 by wolf              #+#    #+#             */
/*   Updated: 2023/10/25 23:49:07 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "INCLUDES/basique_mlx_needed.h"

int	handle_keypress(int keycode)
{
	if (keycode == ESC)
		handle_window_close(WINDOW_CLOSE_ESC);
	return (0);
}

void	a(void)
{
	write_msg("I'm a button.\n");
}


void	b(void)
{
	write_msg("I'm another button.\n");
}

void	mon_prog(void)
{
	void	*button_1;

	button_1 = create_button("first one", COLOR_BLACK, COLOR_BLUE, a);
	button_place(button_1, 100, 100);

	update_scale_value(10);
	button_1 = create_button("test2", COLOR_BLACK, COLOR_GREEN, NULL);
	button_place(button_1, 100, 200);
}

int main(void)
{
	void	*mlx_ptr = mlx_init();
	if (!mlx_ptr)
		return (handle_window_close_err_alloc(A_FUNC), 1);
	
	void	*win_ptr = mlx_new_window(mlx_ptr, 1000, 800, "Custom Text");
	if (!win_ptr)
		return (handle_window_close_err_alloc(A_FUNC), 2);

	update_mlx_infos(mlx_ptr, win_ptr, NULL);
	init_all_button_stuff();

	mon_prog();

	mlx_hook(win_ptr, 2, 1L << 0, &handle_keypress, NULL);
	mlx_loop(mlx_ptr);
	return (0);
}
