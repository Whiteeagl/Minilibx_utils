/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_graphic_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 22:51:59 by wolf              #+#    #+#             */
/*   Updated: 2023/10/15 22:57:18 by wolf             ###   ########.fr       */
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
void	draw_pixel_baby(void *img, t_pixel_stuff *p_stuff,
			int (*array)[4], int color)
{
	int	scale;

	scale = get_scale();
	if (array[p_stuff->i][p_stuff->j])
	{
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
				p_stuff->dy += 1;
			}
			p_stuff->dx += 1;
		}
	}
}

void	fill_icc_cara(void *img, char c, int x, int color)
{
	t_pixel_stuff	p_stuff;
	int				(*array2)[4];

	p_stuff.x = x + (3 * get_scale());
	p_stuff.y = 0;
	array2 = get_min_icc_letters(c);
	if (!array2)
		return ;
	p_stuff.i = -1;
	while (++p_stuff.i < 6)
	{
		p_stuff.j = -1;
		while (++p_stuff.j < 4)
			draw_pixel_baby(img, &p_stuff, array2, color);
	}
}

/*
	Permet d'afficher un caractère donné,
	sur une image donnée.

*/
void	dipslay_cara(void *img, char c, int x, int color)
{
	t_pixel_stuff	p_stuff;
	int				(*array)[4];

	if (!get_scale())
		update_scale_value(DEFAULT_SCALE);
	p_stuff.x = x;
	p_stuff.y = 0;
	p_stuff.i = -1;
	array = get_min_letters(c);
	if (!array)
		return ;
	while (++p_stuff.i < 6)
	{
		p_stuff.j = -1;
		while (++p_stuff.j < 4)
			draw_pixel_baby(img, &p_stuff, array, color);
	}
	if (icc_letters(c))
		fill_icc_cara(img, c, x, color);
}
