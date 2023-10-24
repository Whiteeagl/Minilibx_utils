/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   text_chain_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:47:36 by wolf              #+#    #+#             */
/*   Updated: 2023/10/24 18:29:57 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../INCLUDES/text.h"

t_text_addr_lst	*new_pointer(void *pointer_to)
{
	t_text_addr_lst	*new;
	static int		button_id;

	new = ft_malloc(sizeof(t_text_addr_lst));
	if (!pointer_to)
		new->pointer = NULL;
	else
		new->pointer = pointer_to;
	new->next = NULL;
	button_id += 1;
	return (new);
}

/*
	On ajoute l'adresse de l'image qu'on a créée pour loger le texte.

*/
void	add_text_pointer(void *pointer)
{
	t_text_addr		*garbage;
	t_text_addr_lst	*new;

	garbage = get_text_list_instance();
	new = new_pointer(pointer);
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
	Permet de free l'historique des adresses sur images.
	Les Détruits toutes.

*/
void	free_all_text_stuff(void)
{
	t_text_addr				*garbage;
	t_text_addr_lst			*save;
	int						i;

	i = -1;
	garbage = get_text_list_instance();
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
}
