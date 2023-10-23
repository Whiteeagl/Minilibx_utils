/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_stuff.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:15:31 by wolf              #+#    #+#             */
/*   Updated: 2023/10/22 01:28:45 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/button.h"

/*
	Permet d'afficher un bouton d'origine et son mirroir.

*/
void	display_collide_img(t_button_lst *to_display, void *window_ptr)
{
	if (!window_ptr)
		window_ptr = get_win_ptr();
	mlx_put_image_to_window(get_mlx_ptr(), window_ptr,
		to_display->pointer, to_display->sub_data->x, to_display->sub_data->y);
}
