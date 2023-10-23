/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   text_stuff_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 22:53:51 by wolf              #+#    #+#             */
/*   Updated: 2023/10/23 23:19:07 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../INCLUDES/text.h"

/*
	Permet de combler les espaces entre les lettres avec la couleur background.

*/
void	fill_whitespace(void *img, int x_start, int bg_color)
{
	t_pixel_stuff	p_stuff;

	p_stuff.x = x_start;
	p_stuff.y = 0;
	p_stuff.i = -1;
	while (++p_stuff.i < LENGTH)
	{
		p_stuff.j = -1;
		while (++p_stuff.j < WIDTH / 2)
			check_if_one(img, &p_stuff, bg_color);
	}
}

/*
	Permet de parser chaque caractères de la string,
	et de l'afficher sur l'image en question via la fonction "display_cara"

*/
void	parse_and_print(void *img, char *string, t_fbg_color *fbg_colors)
{
	int		tmp_x;
	int		i;
	int		len_string;

	tmp_x = 0;
	i = -1;
	len_string = ft_len_text(string);
	while (string[++i])
	{
		dipslay_cara(img, string[i], tmp_x, fbg_colors);
		tmp_x += get_scale() * particular_scale(string[i]);
		if (i < len_string - 1)
			fill_whitespace(img, tmp_x, fbg_colors->bg_color);
		tmp_x += get_scale();
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
	width = width + (ft_len_text(string) - 1) * get_scale();
	new_text = mlx_new_image(get_mlx_ptr(), width, scale * LENGTH);
	if (!new_text)
		return (handle_window_close_err_alloc("build_string"), NULL);
	parse_and_print(new_text, string, &fbg_colors);
	add_text_pointer(new_text);
	return (new_text);
}

/*
	Permet d'afficher une image donnée
	sur l'écran.

*/
void	display_string(void *img, int x, int y, void *window_ptr)
{
	if (!img)
		return (write_func_msg("display_string", ERR_NULL_VALUE));
	if (!window_ptr)
		window_ptr = get_win_ptr();
	mlx_put_image_to_window(get_mlx_ptr(), window_ptr,
		img, x, y);
}
