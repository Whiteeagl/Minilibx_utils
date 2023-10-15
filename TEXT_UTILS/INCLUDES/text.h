/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   text.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:00:52 by wolf              #+#    #+#             */
/*   Updated: 2023/10/15 16:32:50 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEXT_H
# define TEXT_h

# include <stdio.h>
# include <unistd.h>
# include <stddef.h>

# define ERR_ALLOCATION 	"Cannot allocate enough memory. Allocation failed.\n"
# define ERR_SCALE_VALUE	"Error on scale value. Must be a posive one > 0.\n"
# define ERR_PREVIOUS_SCALE	"Error, can not found previous scale.\n"
# define ERR_NULL_VALUE		"Error, must me != NULL.\n"

# include "../../Mlx/mlx.h"
# include "../../INCLUDES/basique_mlx_needed.h"

typedef struct c_min_letters
{
	int	a[6][4];
	int	b[6][4];
	int	c[6][4];
	int	d[6][4];
	int	e[6][4];
	int	f[6][4];
	int	g[6][4];
	int	h[6][4];
	int	i[6][4];
	int	j[6][4];
	int	k[6][4];
	int	l[6][4];
	int	m[6][4];
	int	n[6][4];
	int	o[6][4];
	int	p[6][4];
	int	q[6][4];
	int	r[6][4];
	int	s[6][4];
	int	t[6][4];
	int	u[6][4];
	int	v[6][4];
	int	w[6][4];
	int	x[6][4];
	int	y[6][4];
	int	z[6][4];
}t_min_letters;


typedef struct c_all_text
{
	int	all_letters_array[26][6][4];
}t_all_text;


typedef struct c_pixel_stuff
{
	int	i;
	int	j;
	int	x;
	int	y;
	int	dx;
	int	dy;
	int	pixel_x;
	int	pixel_y;
}t_pixel_stuff;

typedef struct c_tmp_pixel
{
	int bits_per_pixel;
	int size_line;
	int endian;
}t_tmp_pixel;


typedef struct c_tmp_scale
{
	int	scale;
}t_tmp_scale;


t_tmp_scale	*get_scale_instance(void);
t_all_text	*get_all_text_instance(void);

size_t		ft_len_text(char *string);

void		*ft_memcpy_text(void *dest, const void *src, size_t n);

void		update_min_letters(char c, int (*elmt)[4]);
void		update_scale_value(int new_scale);

int			(*get_min_letters(char c))[4];
int			get_scale(void);

void	write_msg(char *string);
void	write_func_msg(char *func_name, char *msg);
void	create_a(t_min_letters *min_letters);
void	create_b(t_min_letters *min_letters);
void	create_c(t_min_letters *min_letters);
void	create_d(t_min_letters *min_letters);
void	create_e(t_min_letters *min_letters);
void	create_f(t_min_letters *min_letters);

#endif