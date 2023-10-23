/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chain_list_button.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:17:17 by wolf              #+#    #+#             */
/*   Updated: 2023/10/22 17:08:31 by wolf             ###   ########.fr       */
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

	new = ft_malloc(sizeof(t_button_lst));
	if (!new)
		handle_window_close_err_alloc("new_button");
	if (!pointer_to)
		new->pointer = NULL;
	else
		new->pointer = pointer_to;
	new->id = button_id;
	new->color = tmp_stuff->bg_color;
	new->width = tmp_stuff->width;
	new->height = tmp_stuff->heigth;
	new->sub_data = tmp_stuff->sub_data;
	new->sub_data->event_function = tmp_stuff->sub_data->event_function;
	new->sub_data->text_img = tmp_stuff->sub_data->text_img;
	new->sub_data->x = tmp_stuff->sub_data->x;
	new->sub_data->y = tmp_stuff->sub_data->y;
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
	//t_button_sub_data		*tmp_sub_data;
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
		save = garbage->head;
	}
	free_button_event_list();
}
