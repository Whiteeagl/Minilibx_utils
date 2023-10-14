/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   design_p_tmp_button_stuff.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:37:16 by wolf              #+#    #+#             */
/*   Updated: 2023/10/14 11:43:52 by wolf             ###   ########.fr       */
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

void	update_tmp_stuff(int x, int y, int width, int height)
{
	t_tmp_button_min_stuff	*tmp;

	tmp = tmp_stuff_instance();
	tmp->x = x;
	tmp->y = y;
	tmp->width = width;
	tmp->height = height;
}
