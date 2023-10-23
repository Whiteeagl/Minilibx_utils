/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 22:34:45 by wolf              #+#    #+#             */
/*   Updated: 2023/10/22 16:59:01 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "INCLUDES/basique_mlx_needed.h"

int	handle_keypress(int keycode)
{
	if (keycode == ESC)
		handle_window_close("Window closed by ESC key");
	return (0);
}

static int	sum;

void	a(void)
{
	sum += 1 ;
	write_msg("+1\n");
}


void	b(void)
{
	printf("sum : %d\n", sum);
}

void	mon_prog(void)
{
	void	*button_1;

	update_scale_value(4);
	button_1 = create_button("test", COLOR_GOLD, COLOR_GREEN, a);
	button_place(button_1, 100, 100, get_win_ptr()); 

	void *button_2;

	button_2 = create_button("test2", COLOR_CORAL, COLOR_TOMATO, b);
	button_place(button_2, 100, 300, get_win_ptr());
}

int main(void)
{
	void	*mlx_ptr = mlx_init();
	void	*win_ptr = mlx_new_window(mlx_ptr, 400, 500, "Custom Text");

	update_mlx_infos(mlx_ptr, win_ptr, NULL);
	init_all_text_stuff();
	init_button_event();

	mon_prog();

	mlx_hook(win_ptr, 2, 1L << 0, &handle_keypress, NULL);
	mlx_loop(mlx_ptr);
	return (0);
}

