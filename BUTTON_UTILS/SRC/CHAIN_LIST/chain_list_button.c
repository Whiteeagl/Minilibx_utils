/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chain_list_button.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:17:17 by wolf              #+#    #+#             */
/*   Updated: 2023/10/15 16:49:33 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../INCLUDES/button.h"

/*
	Permet d'initialiser l'historique de boutons.

*/
t_button	*button_init(void)
{
	t_button	*garbage;

	garbage = button_list_instance();
	garbage->head = NULL;
	garbage->tail = NULL;
	garbage->len_of_lst = 0;
	return (garbage);
}

/*
	Permet de créer un nouveau bouton,
	sans l'ajouter dans l'historique des boutons.

*/
t_button_lst	*new_button(void *pointer_to,
					t_tmp_button_min_stuff *tmp_stuff)
{
	t_button_lst	*new;
	static int		button_id;

	new = malloc(sizeof(t_button_lst));
	if (!new)
		free_button_list();
	if (!pointer_to)
		new->pointer = NULL;
	else
		new->pointer = pointer_to;
	new->id = button_id;
	new->x = tmp_stuff->x;
	new->y = tmp_stuff->y;
	new->width = tmp_stuff->width;
	new->height = tmp_stuff->height;
	new->color = RECT_COLOR;
	new->next = NULL;
	button_id += 1;
	return (new);
}

/*
	Permet d'ajouter un nouveau bouton (qui a été créé),
	dans l'historique des boutons.

*/
void	add_button(void *pointer,
			t_tmp_button_min_stuff *tmp_stuff)
{
	t_button		*garbage;
	t_button_lst	*new;

	garbage = button_list_instance();
	new = new_button(pointer, tmp_stuff);
	if (garbage->head == NULL)
	{
		garbage->head = new;
		garbage->tail = new;
	}
	else
	{
		garbage->tail->next = new;
		garbage->tail = garbage->tail->next;
	}
	garbage->len_of_lst++;
}

/*
	Permet de free l'historique des boutons.
	Détruit toutes les images créée.

*/
void	free_button_list(void)
{
	t_button				*garbage;
	t_button_lst			*save;
	int						i;

	i = -1;
	garbage = button_list_instance();
	save = garbage->head;
	while (++i < garbage->len_of_lst)
	{
		if (save->pointer)
		{
			mlx_destroy_image(get_mlx_ptr(), save->pointer);
			save->pointer = NULL;
		}
		garbage->head = save->next;
		free(save);
		save = garbage->head;
	}
}
