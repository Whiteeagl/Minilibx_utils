/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chain_list_button_event.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 21:12:35 by wolf              #+#    #+#             */
/*   Updated: 2023/10/23 23:34:04 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../INCLUDES/button.h"

/*
	Ajout d'un bloc mémoire pour loger un événement bouton.

*/
void	init_button_event(void)
{
	t_event_button	*garbage;

	garbage = button_event_list_instance();
	garbage->head = NULL;
	garbage->tail = NULL;
	garbage->len_of_lst = 0;
}

t_event_button_lst	*new_button_event(t_event_function event_function)
{
	static int			first_one;
	t_event_button_lst	*new;

	new = malloc(sizeof(t_event_button_lst));
	if (!new)
		handle_window_close_err_alloc("new_button_event");
	if (first_one == 0)
		new->event_func = NULL;
	else
		new->event_func = event_function;
	new->next = NULL;
	first_one = 1;
	return (new);
}

/*
	Si un bouton est relancé avec un nouvel évènement,
	alors on le localise et on remplace l'évènement précédent par
	le nouveau.

*/
int	update_button_event(int button_id, t_event_function event_function)
{
	t_event_button		*garbage;
	t_event_button_lst	*current;
	int					idx;

	garbage = button_event_list_instance();
	current = garbage->head;
	idx = -1;
	if (button_id > garbage->len_of_lst)
		return (write_func_msg("update_button_event",
				"Error in finding the button \
			corresponding to the previous ID.\n"),
			-1);
	while (current != NULL && ++idx < button_id)
		current = current->next;
	if (current != NULL)
	{
		current->event_func = event_function;
		return (1);
	}
	return (0);
}

/*
	Permet d'ajouter à l'historique des évènements boutons.

*/
void	add_event_to_lst(void *button_img, t_event_function event_function)
{
	t_event_button		*garbage;
	t_event_button_lst	*new;
	int					existing_one;

	garbage = button_event_list_instance();
	existing_one = update_button_event(get_button_id_by_addr(button_img) / 2,
			event_function);
	if (existing_one < 0)
		write_func_msg("add_event_to_lst",
			"Creation of an additional memory block.\n");
	if (existing_one > 0)
		return ;
	new = new_button_event(event_function);
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
	Permet de free l'historique des évènements boutons.

*/
void	free_button_event_list(void)
{
	t_event_button				*garbage;
	t_event_button_lst			*save;
	int							i;

	i = -1;
	garbage = button_event_list_instance();
	save = garbage->head;
	while (++i < garbage->len_of_lst)
	{
		if (save->event_func)
			save->event_func = NULL;
		garbage->head = save->next;
		free(save);
		save = garbage->head;
	}
}
