/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 22:34:45 by wolf              #+#    #+#             */
/*   Updated: 2023/10/20 22:39:00 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "INCLUDES/basique_mlx_needed.h"

void	mon_prog(void)
{
	//create_empty_button(0, 0, 1800, 900);
	void *t = build_string("0123456789", 5, COLOR_SLATEGRAY, COLOR_BLACK);
	display_string(t, 100, 100);
}

int main(void)
{
	void	*mlx_ptr = mlx_init();
	void	*win_ptr = mlx_new_window(mlx_ptr, 1800, 900, "Custom Text");

	update_mlx_infos(mlx_ptr, win_ptr, NULL);
	init_all_text_stuff();

	mon_prog();

	mlx_hook(win_ptr, 2, 1L << 0, &handle_keypress, NULL);
	mlx_loop(mlx_ptr);
	return (0);
}
