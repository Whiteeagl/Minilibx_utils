/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   main.c											 :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: raphael <raphael@student.42.fr>			+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2023/10/15 19:06:18 by raphael		   #+#	#+#			 */
/*   Updated: 2023/10/15 22:42:43 by raphael		  ###   ########.fr	   */
/*																			*/
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
	line.x1 = 350;
	line.y1 = 850;
	line.x2 = 350;
	line.y2 = 650;
	line.width = 30;
	draw_line(line, img, 0x00FF00);
	line.x1 = 425;
	line.y1 = 850;
	line.x2 = 425;
	line.y2 = 650;
	line.width = 25;
	draw_line(line, img, 0x0000FF);
	line.x1 = 500;
	line.y1 = 850;
	line.x2 = 500;
	line.y2 = 650;
	line.width = 20;
	draw_line(line, img, 0x00FFFF);
	line.x1 = 575;
	line.y1 = 850;
	line.x2 = 575;
	line.y2 = 650;
	line.width = 15;
	draw_line(line, img, 0xFF00FF);
	line.x1 = 650;
	line.y1 = 850;
	line.x2 = 650;
	line.y2 = 650;
	line.width = 10;
	draw_line(line, img, 0xFFFF00);
	line.x1 = 725;
	line.y1 = 850;
	line.x2 = 725;
	line.y2 = 650;
	line.width = 5;
	draw_line(line, img, 0xFFFFFF);
	line.x1 = 720;
	line.y1 = 648;
	line.x2 = 900;
	line.y2 = 850;
	line.width = 15;
	draw_line(line, img, 0xFF0F0F);
	line.x1 = 335;
	line.y1 = 648;
	line.x2 = 175;
	line.y2 = 850;
	line.width = 15;
	draw_line(line, img, 0xFF0F0F);
	line.x1 = 727;
	line.y1 = 650;
	line.x2 = 336;
	line.y2 = 650;
	line.width = 5;
	draw_line(line, img, 0xFF0F0F);
	line.x1 = 727;
	line.y1 = 650;
	line.x2 = 336;
	line.y2 = 650;
	line.width = 5;
	draw_line(line, img, 0xFF0F0F);
	line.x1 = 50;
	line.y1 = 850;
	line.x2 = 950;
	line.y2 = 850;
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
