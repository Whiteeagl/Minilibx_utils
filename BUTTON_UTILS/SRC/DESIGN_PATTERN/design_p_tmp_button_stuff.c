/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   design_p_tmp_button_stuff.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:37:16 by wolf              #+#    #+#             */
/*   Updated: 2023/10/23 23:07:25 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../INCLUDES/button.h"

t_tmp_button_min_stuff	*tmp_stuff_instance(void)
{
	static t_tmp_button_min_stuff	instance;

	return (&instance);
}

t_tmp_button_min_stuff	*get_tmp_stuff(void)
{
	t_tmp_button_min_stuff	*tmp;

	tmp = tmp_stuff_instance();
	return (tmp);
}

void	update_tmp_stuff(int bg_color,
	int width, int heigth, t_button_sub_data *sub_data)
{
	t_tmp_button_min_stuff	*tmp;

	tmp = tmp_stuff_instance();
	tmp->bg_color = bg_color;
	tmp->width = width;
	tmp->heigth = heigth;
	tmp->sub_data = sub_data;
	tmp->sub_data->event_function = sub_data->event_function;
	tmp->sub_data->text_img = sub_data->text_img;
	tmp->sub_data->x = sub_data->x;
	tmp->sub_data->y = sub_data->y;
}

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
	write_func_msg("get_button_id_by_addr",
		"Button Id not found with this address.\n");
	return (-1);
}

t_button_lst	*get_button_stuff_by_id(int id)
{
	t_button		*garbage;
	t_button_lst	*new;

	garbage = button_list_instance();
	if (id > garbage->len_of_lst)
		return (write_func_msg("get_button_stuff_by_id",
				ERR_ID_BUTTON_GREATER), NULL);
	new = garbage->head;
	while (new->next != NULL)
	{
		if (new->id == id)
			return (new);
		new = new->next;
	}
	write_func_msg("get_button_stuff_by_id",
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
	write_func_msg("get_button_stuff_by_id",
		"Button stuff not found with this address.\n");
	return (NULL);
}

void	update_button_coord(void *button, int x, int y)
{
	t_button_lst	*button_stuff;

	button_stuff = get_button_stuff_by_addr(button);
	if (!button_stuff)
		return (write_func_msg("update_coord_button",
			"Error, can not find this button.\n"));
	button_stuff->sub_data->x = x;
	button_stuff->sub_data->y = y;
}