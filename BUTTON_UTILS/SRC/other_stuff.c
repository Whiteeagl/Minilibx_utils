/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_stuff.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboldrin <tboldrin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:15:31 by wolf              #+#    #+#             */
/*   Updated: 2023/10/16 18:04:14 by tboldrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/button.h"

/*
	Permet d'afficher un bouton d'origine et son mirroir.

*/
void	display_collide_img(t_button_lst *to_display)
{
	mlx_put_image_to_window(get_mlx_ptr(), get_win_ptr(),
		to_display->pointer, to_display->x, to_display->y);
}

int	dim_x_calcul(char *string, int len_of_string_para)
{
	return ((len_of_string_para * count_icc_letters(string))
		+ particular_dim_scale(string[ft_len_text(string) - 1]));
}