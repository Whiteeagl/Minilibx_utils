/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_stuff.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:15:40 by wolf              #+#    #+#             */
/*   Updated: 2023/10/14 12:40:32 by wolf             ###   ########.fr       */
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
		if (x >= idx->x && x <= idx->x + idx->width
			&& y >= idx->y && y <= idx->y + idx->height)
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
int	handle_mouse_move(int x, int y)
{
	t_button_lst	*o_collide;
	t_button_lst	*img_collide;
	static bool		already_set;

	update_coord(x, y);
	o_collide = get_collide_origin();
	img_collide = get_collide_image();
	if (is_mouse_inside_rect())
	{
		if (o_collide && !already_set)
		{
			display_collide_img(img_collide);
			already_set = true;
		}
	}
	else
	{
		if (o_collide)
			display_collide_img(o_collide);
		update_collide_one(NULL, NULL);
		already_set = false;
	}
	return (0);
}

/*
	Ici on récupère le signal du "clic" sur "mouse",
	Et on le compare au code qui nous intéresse pour faire ce que l'on veut.

*/
int	handle_mouse_click(int button)
{
	if (button == 1)
	{
		if (is_mouse_inside_rect())
			printf("Clic on bouton (ID : %d)\n", get_collide_origin()->id);
		if (get_collide_origin())
		{
			if (get_collide_origin()->id == 2)
				printf("Hey ! I'm a button.\n");
		}
	}
	return (0);
}
