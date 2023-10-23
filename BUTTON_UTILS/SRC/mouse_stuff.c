/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_stuff.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:15:40 by wolf              #+#    #+#             */
/*   Updated: 2023/10/23 23:09:49 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/button.h"

/*
	Ici on regarde pour chaque bouton créé si "mouse"
	rentre en collision avec l'un d'entre eux.
	
	Si oui, on met à jour le dernier bouton touché,
	et on renvoie (bool == true).

*/
bool	is_mouse_inside_rect(void)
{
	t_button		*button_lst;
	t_button_lst	*idx;
	int				x;
	int				y;

	button_lst = button_list_instance();
	idx = button_lst->head;
	x = get_mx();
	y = get_my();
	while (idx)
	{
		if (x >= idx->sub_data->x && x <= idx->sub_data->x + idx->width
			&& y >= idx->sub_data->y && y <= idx->sub_data->y + idx->height)
			return (update_collide_one(idx, idx->next), true);
		idx = idx->next;
	}
	return (false);
}

/*
	Ici on va venir modifier la couleur du carré en fonction
	de si il est touché ou non.

	Utilise la fonction : [ is_mouse_inside_rect() ] 

		Pour la detection des collisions.

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
				o_collide->sub_data->x + scale,
				o_collide->sub_data->y + (scale * 2), window_ptr);
	}
	update_collide_one(NULL, NULL);
	*already_set = false;
}

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
				img_collide->sub_data->x + scale,
				img_collide->sub_data->y + (scale * 2), window_ptr);
		*already_set = true;
	}
}

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
