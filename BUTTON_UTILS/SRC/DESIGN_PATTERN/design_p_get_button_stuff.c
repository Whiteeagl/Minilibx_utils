/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   design_p_get_button_stuff.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 23:33:10 by wolf              #+#    #+#             */
/*   Updated: 2023/10/25 22:33:04 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../INCLUDES/button.h"

int	get_button_id_by_addr(void *button)
{
	t_button		*garbage;
	t_button_lst	*new;

	garbage = button_list_instance();
	new = garbage->head;
	while (new->next != NULL)
	{
		if (new->pointer == button)
			return (new->id);
		new = new->next;
	}
	write_func_msg(A_FUNC,
		"Button Id not found with this address.\n");
	return (-1);
}

t_button_lst	*get_button_stuff_by_id(int id)
{
	t_button		*garbage;
	t_button_lst	*new;

	garbage = button_list_instance();
	if (id > garbage->len_of_lst)
		return (write_func_msg(A_FUNC,
				ERR_ID_BUTTON_GREATER), NULL);
	new = garbage->head;
	while (new->next != NULL)
	{
		if (new->id == id)
			return (new);
		new = new->next;
	}
	write_func_msg(A_FUNC,
		"Button stuff not found with this id.\n");
	return (NULL);
}

t_button_lst	*get_button_stuff_by_addr(void *button)
{
	t_button		*garbage;
	t_button_lst	*new;

	garbage = button_list_instance();
	new = garbage->head;
	while (new->next != NULL)
	{
		if (new->pointer == button)
			return (new);
		new = new->next;
	}
	write_func_msg(A_FUNC,
		"Button stuff not found with this address.\n");
	return (NULL);
}

void	update_button_coord(void *button, int x, int y)
{
	t_button_lst	*button_stuff;

	button_stuff = get_button_stuff_by_addr(button);
	if (!button_stuff)
		return (write_func_msg(A_FUNC,
				"Error, can not find this button.\n"));
	button_stuff->sub_data->x = x;
	button_stuff->sub_data->y = y;
}
