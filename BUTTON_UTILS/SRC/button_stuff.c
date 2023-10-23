/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   button_stuff.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:16:18 by wolf              #+#    #+#             */
/*   Updated: 2023/10/23 23:31:12 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/button.h"

/* 
	Création de l'image du bouton avec [ mlx_new_image(params...) ]
	À la fin on renvoie son adresse histoire de pouvoir l'utiliser n'importe quand.

*/
void	*init_button(int width, int height, int color)
{
	t_image_stuff	img;
	int				bits_per_pixel;
	int				size_line;
	int				endian;
	int				i;

	i = 0;
	img.image_ptr = mlx_new_image(get_mlx_ptr(), width, height);
	img.image_data = mlx_get_data_addr(img.image_ptr,
			&bits_per_pixel, &size_line, &endian);
	while (i < width * height * (bits_per_pixel / 8))
	{
		img.image_data[i] = (color & 0xFF);
		img.image_data[i + 1] = ((color >> 8) & 0xFF);
		img.image_data[i + 2] = ((color >> 16) & 0xFF);
		img.image_data[i + 3] = ((color >> 24) & 0xFF);
		i += 4;
	}
	return (img.image_ptr);
}

/* 
	Ici on créer de toute pièce le bouton en question.
 
	Recette :

			● Création de l'image d'origine et de l'image mirroir.
			● Ajout des deux images dans l'historique des boutons.
			● Affichage du bouton d'origine.
			● Detection des collisions + clic.
 
*/

t_button_sub_data	*sub_data(void *text_img,
						void *text_collide_img, void (*event_func)(void))
{
	t_button_sub_data	*sub_data;
	int					actual_scale;

	sub_data = ft_malloc(sizeof(t_button_sub_data));
	if (!sub_data)
		handle_window_close_err_alloc("sub_data");
	actual_scale = get_scale();
	sub_data->text_img = text_img;
	sub_data->event_function = event_func;
	sub_data->text_collide_img = text_collide_img;
	sub_data->text_scale = actual_scale;
	sub_data->x = 0;
	sub_data->y = 0;
	return (sub_data);
}

void	*create_button_img(int width, int length, int color)
{
	void	*img;

	img = init_button(width, length, color);
	if (!img)
		handle_window_close_err_alloc("create_button_img");
	return (img);
}

void	*create_button(char *string, int fg_color,
	int bg_color, t_event_function event_func)
{
	void					*collide_image;
	void					*image;
	void					*text;
	void					*text_collide;
	int						width;

	if (!string)
		return (write_func_msg("create_button", "Error, need text title."),
			NULL);
	if (!get_scale())
		return (write_func_msg("create_button", ERR_PREVIOUS_SCALE), NULL);
	text = build_string(string, get_scale(), fg_color, bg_color / 3);
	text_collide = build_string(string, get_scale(), fg_color, bg_color);
	width = sum_icc_letters(string) * get_scale();
	width = width + (ft_len_text(string) - 1) * get_scale();
	width += get_scale() * 3;
	image = create_button_img(width, (get_scale() * LENGTH) * 2, bg_color / 3);
	collide_image = create_button_img(width,
			(get_scale() * LENGTH) * 2, bg_color);
	update_tmp_stuff(bg_color, width, (get_scale() * LENGTH) * 2,
		sub_data(text, text_collide, event_func));
	add_button(image, get_tmp_stuff());
	add_button(collide_image, get_tmp_stuff());
	add_event_to_lst(image, NULL);
	return (image);
}

void	button_place(void *button, int x, int y, void *window_ptr)
{
	t_button_lst		*button_stuff;

	button_stuff = get_button_stuff_by_addr(button);
	update_button_coord(button, x, y);
	mlx_put_image_to_window(get_mlx_ptr(), window_ptr, button, x, y);
	display_string(button_stuff->sub_data->text_img,
		x + button_stuff->sub_data->text_scale,
		y + (button_stuff->sub_data->text_scale * 2), window_ptr);
	mlx_hook(window_ptr, 6, (1L << 6), handle_mouse_move, window_ptr);
	add_button_event(button, button_stuff->sub_data->event_function);
}
