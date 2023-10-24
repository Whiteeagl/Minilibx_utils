/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   button_data.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:21:14 by wolf              #+#    #+#             */
/*   Updated: 2023/10/24 18:59:56 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/button.h"

/*
	[── FR ──]
	│
	│	Création de l'image du bouton avec [ mlx_new_image(params...) ]
	│	À la fin on renvoie son adresse,
	│		 histoire de pouvoir l'utiliser n'importe quand / où.

	[── EN ──]
	│
	│	Creation of the button's image using [mlx_new_image(params...)].
	│	At the end, its address is returned,
	│		so that it can be used anytime, anywhere.

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
	[── FR ──]
	│
	│	Permet de sauvegarder les données importantes 
	│		non utilisées sur le moment.
	
	[── EN ──]
	│
	│	Allows saving important data
	│		not used at the moment.

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

/*
	[── FR ──]
	│
	│	Lance la fonction [init_button(...)],
	│		pour créer l'image du bouton demandé.

	[── EN ──]
	│
	│	Launches the function [init_button(...)],
	│		to create the requested button's image.

*/
void	*create_button_img(int width, int length, int color)
{
	void	*img;

	img = init_button(width, length, color);
	if (!img)
		handle_window_close_err_alloc("create_button_img");
	return (img);
}

/*
	[── FR ──]
	│
	│	Permet de calculer la largeur du bouton en fonction du texte donné.
	
	[── EN ──]
	│
	│	Allows calculating the button's width based on the given text.

*/
int	button_width_calcul(char *string)
{
	int	width;

	width = sum_icc_letters(string) * get_scale();
	width = width + (ft_len_text(string) - 1) * get_scale();
	width += get_scale() * 3;
	return (width);
}

int	button_length_calcul(void)
{
	return ((get_scale() * (LENGTH + LENGTH / 3)) * 2);
}
