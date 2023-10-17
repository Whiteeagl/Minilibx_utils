/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:09:53 by rciaze            #+#    #+#             */
/*   Updated: 2023/10/17 15:09:56 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/line.h"

void	handle_window_close(void)
{
	free_mlx_infos();
	exit(EXIT_SUCCESS);
}

int	handle_keypress(int keycode)
{
	if (keycode == ESC)
		handle_window_close();
	return (0);
}

// The function draw_line must draw a line between two points	
//			with a given width.
// Because of the norminette limitations, it is not possible
//			to pass each parameter, so we use a structure.
// Again, because of the norminette limitations, we do not
//			check the data being passed. Be sure to pass valid data.
// Obviously, you need to pass an address to the image you want to draw on.
// The color is an unsigned int, so you can pass a hexa value.
//			For example, 0x00FF00 is green.

void	mon_programme(void *img)
{
	t_line		line;
	t_mlx_stuff	*mlx;

	mlx = mlx_instance();

	line = init_line(350, 850, 350, 650);
	line.width = 30;
	draw_line(line, img, 0x00FF00);

	line = init_line(425, 850, 425, 650);
	line.width = 25;
	draw_line(line, img, 0x0000FF);

	line = init_line(500, 850, 500, 650);
	line.width = 20;
	draw_line(line, img, 0x00FFFF);

	line = init_line(575, 850, 575, 650);
	line.width = 15;
	draw_line(line, img, 0xFF00FF);

	line = init_line(650, 850, 650, 650);
	line.width = 10;
	draw_line(line, img, 0xFFFF00);

	line = init_line(725, 850, 725, 650);
	line.width = 5;
	draw_line(line, img, 0xFFFFFF);

	line = init_line(720, 648, 900, 850);
	line.width = 15;
	draw_line(line, img, 0xFF0F0F);

	line = init_line(335, 648, 175, 850);
	line.width = 15;
	draw_line(line, img, 0xFF0F0F);

	line = init_line(727, 650, 336, 650);
	line.width = 5;
	draw_line(line, img, 0xFF0F0F);

	line = init_line(727, 650, 336, 650);
	line.width = 5;
	draw_line(line, img, 0xFF0F0F);

	line = init_line(50, 850, 950, 850);
	line.width = 50;
	draw_line(line, img, 0xFFFFFF);

	mlx_put_image_to_window(mlx->mlx_ptr, mlx->win_ptr, img, 0, 0);
	return ;
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
	mlx_hook(win_ptr, 2, 1L << 0, &handle_keypress, NULL);
	mlx_loop(mlx_ptr);
	return (0);
}
