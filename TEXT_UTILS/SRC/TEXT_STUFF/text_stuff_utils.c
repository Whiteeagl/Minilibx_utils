/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   text_stuff_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 22:53:51 by wolf              #+#    #+#             */
/*   Updated: 2023/10/19 22:53:44 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../INCLUDES/text.h"

/*
	Permet de parser chaque caractères de la string,
	et de l'afficher sur l'image en question via la fonction "display_cara"

*/
void	parse_and_print(void *img, char *string,
			int scale, t_fbg_color *fbg_colors)
{
	int		tmp_x;
	int		i;

	(void)scale;

	tmp_x = 0;
	i = -1;
	while (string[++i])
	{
		dipslay_cara(img, string[i], tmp_x, fbg_colors);
		tmp_x += get_scale() *  particular_scale(string[i]);
	}
}

/*
	Permet de retourner une image contentant 
	une chaîne de caractères à une position (x, y)
	avec facteur d'agrandissement, 
	pour un confort optimal à tous voyons.

*/
void	*build_string(char *string, int scale, int fg_color, int bg_color)
{
	t_fbg_color	fbg_colors;
	void		*new_text;
	int			width;

	fbg_colors.fg_color = fg_color;
	fbg_colors.bg_color = bg_color;
	if (scale <= 0)
		return (write_func_msg("build_string", ERR_SCALE_VALUE), NULL);
	update_scale_value(scale);
	width = sum_icc_letters(string) * get_scale();
	new_text = mlx_new_image(get_mlx_ptr(), width, LENGTH * scale);
	if (!new_text)
		return (write_func_msg("build_string", ERR_ALLOCATION), NULL);
	parse_and_print(new_text, string, scale, &fbg_colors);
	add_text_pointer(new_text);
	return (new_text);
}

/*
	Permet d'afficher une image donnée
	sur l'écran.

*/
void	display_string(void *img, int x, int y)
{
	if (!img)
		return (write_func_msg("display_string", ERR_NULL_VALUE));
	mlx_put_image_to_window(get_mlx_ptr(), get_win_ptr(),
		img, x, y);
}
