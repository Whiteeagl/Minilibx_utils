/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   design_p_tmp_button_stuff.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:37:16 by wolf              #+#    #+#             */
/*   Updated: 2023/10/23 23:33:23 by wolf             ###   ########.fr       */
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
