/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 22:34:45 by wolf              #+#    #+#             */
/*   Updated: 2023/10/23 19:34:48 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "INCLUDES/basique_mlx_needed.h"

int	handle_keypress(int keycode)
{
	if (keycode == ESC)
		handle_window_close("Window closed by ESC key");
	return (0);
}

int main(void)
{
	void	*mlx_ptr = mlx_init();
	void	*win_ptr = mlx_new_window(mlx_ptr, 400, 500, "Custom Text");

	update_mlx_infos(mlx_ptr, win_ptr, NULL);
	init_all_text_stuff();


	mlx_hook(win_ptr, 2, 1L << 0, &handle_keypress, NULL);
	mlx_loop(mlx_ptr);
	return (0);
}

