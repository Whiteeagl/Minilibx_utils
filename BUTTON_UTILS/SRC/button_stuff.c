/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   button_stuff.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:16:18 by wolf              #+#    #+#             */
/*   Updated: 2023/10/19 15:35:30 by wolf             ###   ########.fr       */
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
		img.image_data[i] = color & 0xFF;
		img.image_data[i + 1] = (color >> 8) & 0xFF;
		img.image_data[i + 2] = (color >> 16) & 0xFF;
		img.image_data[i + 3] = 0;
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
void	create_button(int x, int y, int width, int height)
{
	void					*image;
	void					*collide_image;
	int						color;

	color = RECT_COLOR;
	image = init_button(width, height, color);
	if (!image)
		return (free_button_list(), exit(EXIT_FAILURE));
	collide_image = init_button(width, height, 255);
	if (!collide_image)
		return (free_button_list(), exit(EXIT_FAILURE));
	update_tmp_stuff(x, y, width, height);
	add_button(image, get_tmp_stuff());
	add_button(collide_image, get_tmp_stuff());
	mlx_put_image_to_window(get_mlx_ptr(), get_win_ptr(), image, x, y);
	mlx_mouse_hook(get_win_ptr(), handle_mouse_click, NULL);
	mlx_hook(get_win_ptr(), 6, (1L << 6), handle_mouse_move, NULL);
}
