/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_lines.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphael <raphael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 23:57:06 by raphael           #+#    #+#             */
/*   Updated: 2023/10/16 00:12:45 by raphael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/line.h"

void	draw_line(t_line line, void *img, int color)
{
	t_data_for_line	data;

	stuff_for_line_draw(&data, &line, img);
	if (data.dx2 > data.dy2)
		case_1(&line, &data, color);
	else
		case_2(&line, &data, color);
}

void	draw_actual_pixels_case_1(t_data_for_line *data, t_line *line,
		unsigned int color)
{
	char			*pixel_offset;
	int				w;

	pixel_offset = data->img_data + (line->y1 * data->img_width + line->x1) 
		* (data->bits_per_pixel / 8);
	*(unsigned int *)pixel_offset = color;
	w = 0;
	while (++w <= line->width / 2)
	{
		pixel_offset = data->img_data + ((line->y1 - w) * 
				data->img_width + line->x1) * (data->bits_per_pixel / 8);
		*(unsigned int *)pixel_offset = color;
		if (w != line->width / 2 || line->width % 2 == 1)
		{
			pixel_offset = data->img_data + ((line->y1 + w) * 
					data->img_width + line->x1) * (data->bits_per_pixel / 8);
			*(unsigned int *)pixel_offset = color;
		}
	}
}

void	case_1(t_line *line, t_data_for_line *data, unsigned int color)
{
	int				i;

	i = -1;
	while (i <= data->dx2)
	{
		draw_actual_pixels_case_1(data, line, color);
		i++;
		line->x1 += data->x_incr;
		data->ex -= data->dy2;
		if (data->ex < 0)
		{
			line->y1 += data->y_incr;
			data->ex += data->dx2;
		}
	}
}

void	draw_actual_pixels_case_2(t_data_for_line *data, t_line *line,	
		unsigned int color)
{
	char			*pixel_offset;
	int				w;

	pixel_offset = data->img_data + (line->y1 * data->img_width + line->x1)
		* (data->bits_per_pixel / 8);
	*(unsigned int *)pixel_offset = color;
	w = 0;
	while (++w <= line->width / 2)
	{
		pixel_offset = data->img_data + (line->y1 * data->img_width
				+ (line->x1 - w)) * (data->bits_per_pixel / 8);
		*(unsigned int *)pixel_offset = color;
		if (w != line->width / 2 || line->width % 2 == 1)
		{
			pixel_offset = data->img_data + (line->y1 * data->img_width
					+ (line->x1 + w)) * (data->bits_per_pixel / 8);
			*(unsigned int *)pixel_offset = color;
		}
	}
}

void	case_2(t_line *line, t_data_for_line *data, unsigned int color)
{
	int				i;

	i = -1;
	while (i <= data->dy2)
	{
		draw_actual_pixels_case_2(data, line, color);
		i++;
		line->y1 += data->y_incr;
		data->ey -= data->dx2;
		if (data->ey < 0)
		{
			line->x1 += data->x_incr;
			data->ey += data->dy2;
		}
	}
}
