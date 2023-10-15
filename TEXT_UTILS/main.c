/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:06:53 by wolf              #+#    #+#             */
/*   Updated: 2023/10/15 20:02:18 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "INCLUDES/text.h"
#include <stdio.h>

int	icc_letters(char c)
{
	if (c == 'm' || c == 'w' || c == 'v')
		return (1);
	return (0);
}

int	spaces_letters(char c)
{
	if (c == 'l' || c == 'i')
		return (1);
	return (0);
}

int	count_icc_letters(char *str)
{
	int	idx;
	int	sum;

	idx = 0;
	if (!str)
		return (idx);
	sum = 0;
	while (str[idx])
	{
		sum += icc_letters(str[idx]);
		idx++ ;
	}
	return (sum);
}

void	create_icc_letters(t_min_letters *min_letters)
{
	t_icc_letters	*icc_l;

	icc_l = get_icc_letters_instance();

	create_m(min_letters);
	create_m_end(icc_l);

	//create_v(min_letters);
	//create_v_end(icc_l);
	
	//create_w(min_letters);
	//create_w_end(icc_l);
}

void	create_first_min_letters(t_min_letters *min_letters)
{
	create_a(min_letters);
	create_b(min_letters);
	create_c(min_letters);
	create_d(min_letters);
	create_e(min_letters);
	create_f(min_letters);
	create_g(min_letters);
	create_h(min_letters);
	create_i(min_letters);
	create_j(min_letters);
	create_k(min_letters);
	create_l(min_letters);
	create_m(min_letters);
	create_n(min_letters);
	create_o(min_letters);
}

void	init_min_letter_first_part(t_min_letters *min_letters)
{
	create_first_min_letters(min_letters);
	create_icc_letters(min_letters);
	update_min_letters('a', min_letters->a);
	update_min_letters('b', min_letters->b);
	update_min_letters('c', min_letters->c);
	update_min_letters('d', min_letters->d);
	update_min_letters('e', min_letters->e);
	update_min_letters('f', min_letters->f);
	update_min_letters('g', min_letters->g);
	update_min_letters('h', min_letters->h);
	update_min_letters('i', min_letters->i);
	update_min_letters('j', min_letters->j);
	update_min_letters('k', min_letters->k);
	update_min_letters('l', min_letters->l);
	update_min_letters('m', min_letters->m);
}

void	init_min_letter_last_part(t_min_letters *min_letters)
{
	update_min_letters('n', min_letters->n);
	update_min_letters('o', min_letters->o);
	update_min_letters('p', min_letters->p);
	update_min_letters('q', min_letters->q);
	update_min_letters('r', min_letters->r);
	update_min_letters('s', min_letters->s);
	update_min_letters('t', min_letters->t);
	update_min_letters('u', min_letters->u);
	update_min_letters('v', min_letters->v);
	update_min_letters('w', min_letters->w);
	update_min_letters('x', min_letters->x);
	update_min_letters('y', min_letters->y);
	update_min_letters('z', min_letters->z);
}


void	init_all_min_letters(t_min_letters *min_letters)
{
	init_min_letter_first_part(min_letters);
	init_min_letter_last_part(min_letters);
}


// POUR LES TESTS //
void	display_checked_elmt(int elmt)
{
	char	elmt_char;
	if (elmt == -1)
		return ;
	elmt_char = elmt + 48;
	if (elmt == 1)
	{
		write(1, &elmt_char, 1);
		write(1, " ", 1);
	}
	else
		write(1, "  ", 2);
}

int	check_elmt(char c, int main_idx, int sub_idx)
{
	if (get_min_letters(c) == NULL)
		return (-1);
	else
		return (get_min_letters(c)[main_idx][sub_idx]);
}

void	display_array_value(char c)
{
	for (int i=0; i < 6; i++)
	{
		for (int j=0; j < 4; j++)
		{
			display_checked_elmt(check_elmt(c, i, j));
		}
		printf("\n");
	}
	printf("\n");
}
//////////////////////////////////


/*
	Ici on va élargir le tableau de la lettre actuelle en (scale * scale)
	Un fois élargi on va dupliquer les pixels à allumer dans chacune des
	cases ajoutées sur la même ligne.

*/

void put_pixel_to_image(void *img, int x, int y, int color)
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


void	draw_pixel_baby(void *img, t_pixel_stuff *p_stuff, int (*array)[4], int color)
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
	Permet d'afficher un caractère donné.

*/
void	dipslay_cara(void *img, char c, int x, int color)
{
	t_pixel_stuff	p_stuff;
    int				(*array)[4];


	if (!get_scale())
		return (write_func_msg("display_cara", ERR_PREVIOUS_SCALE));
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

// // // // // // //

/*
	Permet d'afficher une chaîne de caractères à une position (x, y)
	avec un facteur d'agrandissement, pour un confort optimal, voyons.

*/

// void *  --> renvoyer l'image pour pouvoir la placer où on veut
void	*build_string(char *string, int scale, int color)
{
	void	*new_text;
	int		resize_space;
	int		len_of_string;
	int		tmp_x;
	int		i;

	if (scale <= 0)
		return (write_func_msg("build_string", ERR_SCALE_VALUE), NULL);
	len_of_string = ft_len_text(string);
	resize_space = 5 * scale;
	len_of_string = resize_space * len_of_string;
	if (count_icc_letters(string))
		len_of_string *= count_icc_letters(string);
	new_text = mlx_new_image(get_mlx_ptr(), len_of_string, 6*scale);
	if (!new_text)
		return (write_func_msg("build_string", ERR_ALLOCATION), NULL);
	update_scale_value(scale);
	tmp_x = 0;
	i = -1;
	while (string[++i])
	{
		dipslay_cara(new_text, string[i], tmp_x, color);
		if (icc_letters(string[i]))
			tmp_x += resize_space + (scale / 2) + 1;
		else if (spaces_letters(string[i]))
			tmp_x += 4 * scale;
		else
			tmp_x += resize_space;
	}
	add_text_pointer(new_text);
	return (new_text);
}

void	display_string(void *img, int x, int y)
{
	if (!img)
		return (write_func_msg("display_string", ERR_NULL_VALUE));
	mlx_put_image_to_window(get_mlx_ptr(), get_win_ptr(),
		img, x, y);
}


int	main(void)
{
	t_min_letters	min_letters;
	void			*mlx_ptr;
	void			*mlx_win;

	mlx_ptr = mlx_init();
    mlx_win = mlx_new_window(mlx_ptr, 800, 600, "Custom Text");
	update_mlx_infos(mlx_ptr, mlx_win);

	init_all_min_letters(&min_letters);



	//update_scale_value(4);
	void *test = build_string("lola ia", 14, 0x0FFFFF);

	display_string(test, 100, 100);

	//void	*t = build_string("lalama", 4, 0xFFFFFF);

	//display_string(t, 100, 200);

	//void *test = build_string("caca", 4, 0xFFFFFF);

	//dipslay_cara(mlx_win, 'a', 100, 0xFFFFF);


	//display_string("caca", 200, 100, 10);
	//display_string("baba", 200, 200, 4);
	//display_string("bada_caca", 200, 300, 4);



	//dipslay_text('b', 200, 100, 4);
	//dipslay_text('c', 300, 100, 4);
	//dipslay_text('d', 400, 100, 4);
	//dipslay_text('e', 500, 100, 4);
	//dipslay_text('f', 600, 100, 4);
	



	//display_string("dab", 500, 500, 10);
	//display_string("efd", 300, 300, 10);



	mlx_loop(mlx_ptr);

	return (0);
}