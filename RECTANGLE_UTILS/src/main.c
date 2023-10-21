/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:48:59 by rciaze            #+#    #+#             */
/*   Updated: 2023/10/21 23:19:13 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rectangle.h"

int	handle_keypress(int keycode)
{
	if (keycode == ESC)
		handle_window_close("Window closed by ESC key");
	return (0);
}

//	This is the only usefull function in this file.
//	We use the same algorithm that we used in line_utils.
//	We draw a line in the middle of the rectangle you wanted to draw,
//	with the size set accordingly.

//	To draw said rectangle, you need to pass the coordinates
//	of the upper left corner, and the lower right corner.

void	mon_programme(void *img)
{
	t_mlx_stuff	*mlx;

	mlx = mlx_instance();
	draw_line(init_rectangle(50, 100, 300, 200), img, 0x00FF00);
	draw_line(init_rectangle(600, 900, 300, 800), img, 0xFF0000);
	draw_line(init_rectangle(600, 500, 800, 600), img, 0x0000FF);
	draw_line(init_rectangle(200, 300, 500, 500), img, 0x303030);
	mlx_put_image_to_window(mlx->mlx_ptr, mlx->win_ptr, img, 0, 0);
}

int	main(void)
{
	void	*mlx_ptr;
	void	*win_ptr;
	void	*img_ptr;

	mlx_ptr = mlx_init();
	if (!mlx_ptr)
		return (1);
	win_ptr = mlx_new_window(mlx_ptr, 1000, 1000, "Image Minilibx");
	if (!win_ptr)
		return (free(mlx_ptr), 2);
	img_ptr = mlx_new_image(mlx_ptr, 1000, 1000);
	if (!img_ptr)
		return (free(mlx_ptr), free(win_ptr), 3);
	update_mlx_infos(mlx_ptr, win_ptr, img_ptr);
	mon_programme(img_ptr);
	init_rectangle(100, 100, 50, 100);
	mlx_hook(win_ptr, 2, 1L << 0, &handle_keypress, NULL);
	mlx_loop(mlx_ptr);
	return (0);
}
