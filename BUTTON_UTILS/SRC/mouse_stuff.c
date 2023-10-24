/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_stuff.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:15:40 by wolf              #+#    #+#             */
/*   Updated: 2023/10/24 17:37:12 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/button.h"

/*
	[── FR ──]
	│
	│	Ici on va détécter la collision
	│		entre la souris et tous les boutons.
	│
	│	Si l'un d'eux est touché,
	│		alors on update la valeur du dernier bouton touché,
	│			et on retourne true.

	[── EN ──]
	│
	│	Here we will detect the collision
	│		between the mouse and all the buttons.
	│
	│	If that's the case,
	│		then we update the value of the last touched button,
	│		and return true.

*/
bool	is_mouse_inside_rect(void)
{
	t_button		*button_lst;
	t_button_lst	*idx;
	int				x;
	int				y;
	int				button_width;

	button_lst = button_list_instance();
	idx = button_lst->head;
	x = get_mx();
	y = get_my();
	while (idx)
	{
		button_width = idx->width + idx->width / 3;
		if (x >= idx->sub_data->x && x <= idx->sub_data->x + button_width
			&& y >= idx->sub_data->y && y <= idx->sub_data->y + idx->height)
			return (update_collide_one(idx, idx->next), true);
		idx = idx->next;
	}
	return (false);
}

/*
	[── FR ──]
	│
	│	Ici on va venir afficher l'image d'origine du bouton en question.
	│	Ce processus se déclenche lorsque le bouton
	│		a été touché et qu'il ne l'est plus.

	[── EN ──]
	│
	│	Here we will display the original image of the button in question.
	│	This process is triggered when the button
	│		has been touched and is no longer touched.

*/
void	display_origin_img(t_button_lst	*o_collide,
			bool *already_set, void *window_ptr)
{
	int	scale;

	if (o_collide)
	{
		scale = o_collide->sub_data->text_scale;
		display_collide_img(o_collide, window_ptr);
		display_string(o_collide->sub_data->text_img,
			o_collide->sub_data->x + scale + o_collide->width / LENGTH,
			o_collide->sub_data->y + (scale * WIDTH), window_ptr);
	}
	update_collide_one(NULL, NULL);
	*already_set = false;
}

/*
	[── FR ──]
	│
	│	Permet d'afficher l'image miroir à celle d'origine
	│		pour créer l'effet de séléction.
	│
	│	Ce processus se déclenche lorsque le bouton
	│		entre en collision avec la souris.

	[── EN ──]
	│
	│	Allows displaying the mirrored image alongside the original
	│	to create the selection effect.
	│
	│	This process is triggered when the button is in collision
	│		with the mouse.

*/
void	display_collided_img(t_button_lst *o_collide,
			bool *already_set, void *window_ptr)
{
	t_button_lst	*img_collide;
	int				scale;

	img_collide = get_collide_image();
	if (o_collide && !(*already_set))
	{
		scale = img_collide->sub_data->text_scale;
		display_collide_img(img_collide, window_ptr);
		display_string(img_collide->sub_data->text_collide_img,
			img_collide->sub_data->x + scale + img_collide->width / LENGTH,
			img_collide->sub_data->y + (scale * WIDTH), window_ptr);
		*already_set = true;
	}
}

/*
	[── FR ──]
	│
	│	Permet de regarder si une collision
	│		est présente entre la souris et un bouton.
	│	
	│	Si c'est le cas, alors on affiche les images miroirs.
	│	Sinon, on affiche les images d'origines.

	[── EN ──]
	│
	│	Allows checking if a collision
	│		is present between the mouse and a button.
	│
	│	If so, then we display the mirrored images.
	│	Otherwise, we display the original images.
	│
*/
int	handle_mouse_move(int x, int y, void *window_ptr)
{
	t_button_lst	*o_collide;
	static bool		already_set;

	update_coord(x, y);
	o_collide = get_collide_origin();
	if (is_mouse_inside_rect())
		display_collided_img(o_collide, &already_set, window_ptr);
	else
		display_origin_img(o_collide, &already_set, window_ptr);
	return (0);
}
