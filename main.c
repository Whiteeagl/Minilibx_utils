/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboldrin <tboldrin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 22:34:45 by wolf              #+#    #+#             */
/*   Updated: 2023/12/19 18:33:41 by tboldrin         ###   ########.fr       */
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

void	test_buttons(void)
{
	void	*button_1;

	button_1 = create_button("blue button", COLOR_BLACK, COLOR_BLUE, a);
	button_place(button_1, 100, 100);

	update_scale_value(10);
	button_1 = create_button("green button", COLOR_BLACK, COLOR_GREEN, NULL);
	button_place(button_1, 100, 200);

}

void	test_text(void)
{
	void	*text_1;

	text_1 = build_string("seems like a plain text", 2, COLOR_WHITE, COLOR_BLACK);
	display_string(text_1, 100, 400, get_win_ptr());

	text_1 = build_string("0123456789", 4, COLOR_BROWN, COLOR_BLACK);
	display_string(text_1, 100, 440, get_win_ptr());

	text_1 = build_string("fg and bg color", 6, COLOR_INDIGO, COLOR_ORANGE);
	display_string(text_1, 100, 500, get_win_ptr());
	
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

	test_buttons();
	test_text();

	mlx_hook(win_ptr, 2, 1L << 0, &handle_keypress, NULL);
	mlx_loop(mlx_ptr);
	return (0);
}
