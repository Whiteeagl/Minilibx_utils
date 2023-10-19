/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_graphic_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 22:51:59 by wolf              #+#    #+#             */
/*   Updated: 2023/10/19 20:24:28 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../INCLUDES/text.h"

/*
	Permet d'allumer certain pixel dans un cadre restreint,
	ici une image donnée.

*/
void	put_pixel_to_image(void *img, int x, int y, int color)
{
	t_tmp_pixel	tmp_p;
	char		*img_data;
	int			img_width;
	int			pixel_offset;

	img_data = mlx_get_data_addr(img, &tmp_p.bits_per_pixel,
			&tmp_p.size_line, &tmp_p.endian);
	img_width = tmp_p.size_line / 4;
	if (x / 4 >= 0 && x / 4 < img_width
		&& y >= 0 && y < img_width)
	{
		pixel_offset = (y * img_width + x) * (tmp_p.bits_per_pixel / 8);
		img_data[pixel_offset] = color & 0xFF;
		img_data[pixel_offset + 1] = (color >> 8) & 0xFF;
		img_data[pixel_offset + 2] = (color >> 16) & 0xFF;
	}
}

/*
	Permet d'appliquer le facteur de résolution (scale)
	sur une map (6 * 4) qui représente une lettre particulière.

	(On va élargir le tableau de la lettre actuelle en (scale * scale)
	Un fois élargi on va dupliquer les pixels à allumer dans chacune des
	cases ajoutées sur la même ligne.)

*/

void	check_if_one(void *img, t_pixel_stuff *p_stuff, int color)
{
	int	scale;

	scale = get_scale();
	p_stuff->dx = 0;
	while (p_stuff->dx < scale)
	{
		p_stuff->dy = 0;
		while (p_stuff->dy < scale)
		{
			p_stuff->pixel_x = (p_stuff->x
					+ p_stuff->j * scale + p_stuff->dx);
			p_stuff->pixel_y = (p_stuff->y
					+ p_stuff->i * scale + p_stuff->dy);
			put_pixel_to_image(img, p_stuff->pixel_x,
				p_stuff->pixel_y, color);
			display_string(img, 0, 100);
			p_stuff->dy += 1;
		}
		p_stuff->dx += 1;
	}
}

int	does_we_stop(int (*array)[4]);

void	draw_pixel_baby(void *img, t_pixel_stuff *p_stuff,
			int (*array)[4], t_fbg_color *fbg_colors)
{
	if (array[p_stuff->i][p_stuff->j])
		check_if_one(img, p_stuff, fbg_colors->fg_color);
	else
		check_if_one(img, p_stuff, fbg_colors->bg_color);

}

int	does_we_stop(int (*array)[4])
{
	int	sum;
	int	goal;
	int	i;
	int	j;

	i = -1;
	goal = 4;
	while (++i < goal)
	{
		j = -1;
		sum = 0;
		while (++j < 6)
		{
			if (array[j][i] == 0)
				sum++ ;
		}
		if (sum == 6)
			return (i);
	}
	return (goal);
}

void	fill_icc_cara(void *img, char c, int x, t_fbg_color *fbg_colors)
{
	t_pixel_stuff	p_stuff;
	int				(*array2)[4];
	int				stop;

	p_stuff.x = x + (3 * get_scale());
	p_stuff.y = 0;
	array2 = get_min_icc_letters(c);
	if (!array2)
		return ;
	p_stuff.i = -1;
	stop = does_we_stop(array2);
	while (++p_stuff.i < 6)
	{
		p_stuff.j = -1;
		while (++p_stuff.j < stop)
			draw_pixel_baby(img, &p_stuff, array2, fbg_colors);
	}
}

/*
	Permet d'afficher un caractère donné,
	sur une image donnée.

*/
void	dipslay_cara(void *img, char c, int x, t_fbg_color *fbg_colors)
{
	t_pixel_stuff	p_stuff;
	int				(*array)[4];
	int				stop;

	if (!get_scale())
		update_scale_value(DEFAULT_SCALE);
	p_stuff.x = x;
	p_stuff.y = 0;
	p_stuff.i = -1;
	array = get_min_letters(c);
	if (!array)
		return ;

	stop = does_we_stop(array);
	while (++p_stuff.i < 6)
	{
		p_stuff.j = -1;
		while (++p_stuff.j < stop)
			draw_pixel_baby(img, &p_stuff, array, fbg_colors);
	}
	if (icc_letters(c))
		fill_icc_cara(img, c, x, fbg_colors);
}
