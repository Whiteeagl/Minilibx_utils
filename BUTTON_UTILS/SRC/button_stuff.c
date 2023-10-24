/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   button_stuff.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:16:18 by wolf              #+#    #+#             */
/*   Updated: 2023/10/24 16:21:55 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/button.h"

/* 
	[-- FR --]
	|
	|	Ici on créer de toute pièce le bouton en question.
	|
	|	Recette :
	|
	|			● Création du texte d'origine et du texte mirroir.
	|			
	|			● Création de l'image d'origine du bouton et de son image mirroir
	|				en prenant en compte le texte pour les calculs de dimensions.
	|
	|			● Ajout des deux images dans l'historique des boutons.
	|			● Initialisation de l'event associé à NULL.
	|
	|	(Toutes les données non utilisées tout de suite
	|		 sont sauvegardées dans sub_data.)

	[-- EN --]
	|
	|	Here, we create the button from scratch.
	|
	|	Recipe:
	|
	|			● Creation of the original text and the mirrored text.
	|		
	|			● Creation of the original button image and its mirrored image
	|				taking into account the text for dimension calculations.
	|
	|			● Adding both images to the button history.
	|			● Initialization of the associated event to NULL.
	|
	|	(All data not immediately used
	|		are saved in sub_data.)
 
*/
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
	width = button_width_calcul(string);
	image = create_button_img(width + width / 3,
			(get_scale() * (BUTTON_LENGTH)) * 2, bg_color / 3);
	collide_image = create_button_img(width + width / 3,
			(get_scale() * BUTTON_LENGTH) * 2, bg_color);
	update_tmp_stuff(bg_color, width, (get_scale() * BUTTON_LENGTH) * 2,
		sub_data(text, text_collide, event_func));
	add_button(image, get_tmp_stuff());
	add_button(collide_image, get_tmp_stuff());
	add_event_to_lst(image, NULL);
	return (image);
}

/*
	[-- FR --]
	|
	|	Permet de placer un bouton et :
	|		
	|		● D'afficher son texte
	|		
	|		● De détecter si il est en collision avec la souris,
	|			+ de détecter si il est cliqué.
	|
	|		● De lui associer son event

	[-- EN --]
	|
	|	Allows placing a button and:
	|		
	|		● Displaying its text.
	|	
	|		● Detecting if it is in collision with the mouse,
	|			+ detecting if it is clicked.
	|
	|		● Associating its event.

*/
void	button_place(void *button, int x, int y, void *window_ptr)
{
	t_button_lst		*button_stuff;

	button_stuff = get_button_stuff_by_addr(button);
	update_button_coord(button, x, y);
	mlx_put_image_to_window(get_mlx_ptr(), window_ptr, button, x, y);
	display_string(button_stuff->sub_data->text_img,
		x + button_stuff->sub_data->text_scale + (button_stuff->width / LENGTH),
		y + (button_stuff->sub_data->text_scale * WIDTH), window_ptr);
	mlx_hook(window_ptr, 6, (1L << 6), handle_mouse_move, window_ptr);
	add_button_event(button, button_stuff->sub_data->event_function);
}
