/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   text.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:00:52 by wolf              #+#    #+#             */
/*   Updated: 2023/10/15 22:57:33 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEXT_H
# define TEXT_H

# include <stdio.h>
# include <unistd.h>
# include <stddef.h>

# define ERR_ALLOCATION 	"Cannot allocate enough memory. Allocation failed.\n"
# define ERR_SCALE_VALUE	"Error on scale value. Must be a posive one > 0.\n"
# define ERR_PREVIOUS_SCALE	"Error, can not found previous scale.\n"
# define ERR_NULL_VALUE		"Error, must me != NULL.\n"

# define DEFAULT_SCALE		4

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

typedef struct c_icc_letters
{
	int	m_end[6][4];
	int	v_end[6][4];
	int	w_end[6][4];
	int	x_end[6][4];
	int	y_end[6][4];
	int	z_end[6][4];
}t_icc_letters;

typedef struct s_all_text
{
	int	all_letters_array[26][6][4];
}t_all_text;

typedef struct s_pixel_stuff
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

typedef struct s_tmp_pixel
{
	int	bits_per_pixel;
	int	size_line;
	int	endian;
}t_tmp_pixel;

typedef struct s_tmp_scale
{
	int	scale;
}t_tmp_scale;

typedef struct s_text_addr_lst
{	
	void						*pointer;
	struct s_text_addr_lst		*next;	
}t_text_addr_lst;

typedef struct s_text_addr
{
	int						len_of_lst;
	t_text_addr_lst			*head;
	t_text_addr_lst			*tail;
}t_text_addr;

t_text_addr_lst	*new_pointer(void *pointer_to);
t_icc_letters	*get_icc_letters_instance(void);
t_text_addr		*get_text_list_instance(void);
t_tmp_scale		*get_scale_instance(void);
t_all_text		*get_all_text_instance(void);

size_t			ft_len_text(char *string);

void			*ft_memcpy_text(void *dest, const void *src, size_t n);
void			*build_string(char *string, int scale, int color);

void			create_icc_letters(t_min_letters *min_letters);
void			create_no_icc_letters(t_min_letters *min_letters);
void			init_min_letter_first_part(t_min_letters *min_letters);
void			init_min_letter_last_part(t_min_letters *min_letters);
void			init_all_min_letters(t_min_letters *min_letters);
void			update_min_letters(char c, int (*elmt)[4]);
void			update_scale_value(int new_scale);
void			add_text_pointer(void *pointer);
void			free_text_addr_list(void);
void			err_charactere_not_recoginzed(char c);
void			parse_and_print(void *img, char *string, int scale, int color);
void			display_string(void *img, int x, int y);
void			put_pixel_to_image(void *img, int x, int y, int color);
void			draw_pixel_baby(void *img, t_pixel_stuff *p_stuff,
					int (*array)[4], int color);

void			fill_icc_cara(void *img, char c, int x, int color);
void			dipslay_cara(void *img, char c, int x, int color);

void			write_msg(char *string);
void			write_func_msg(char *func_name, char *msg);
void			create_a(t_min_letters *min_letters);
void			create_b(t_min_letters *min_letters);
void			create_c(t_min_letters *min_letters);
void			create_d(t_min_letters *min_letters);
void			create_e(t_min_letters *min_letters);
void			create_f(t_min_letters *min_letters);
void			create_g(t_min_letters *min_letters);
void			create_h(t_min_letters *min_letters);
void			create_i(t_min_letters *min_letters);
void			create_j(t_min_letters *min_letters);
void			create_k(t_min_letters *min_letters);
void			create_l(t_min_letters *min_letters);
void			create_m(t_min_letters *min_letters);
void			create_n(t_min_letters *min_letters);
void			create_o(t_min_letters *min_letters);
void			create_p(t_min_letters *min_letters);
void			create_q(t_min_letters *min_letters);
void			create_r(t_min_letters *min_letters);
void			create_s(t_min_letters *min_letters);
void			create_t(t_min_letters *min_letters);
void			create_u(t_min_letters *min_letters);
void			create_v(t_min_letters *min_letters);
void			create_w(t_min_letters *min_letters);
void			create_x(t_min_letters *min_letters);
void			create_y(t_min_letters *min_letters);
void			create_z(t_min_letters *min_letters);

void			create_m_end(t_icc_letters *icc_l);
void			create_v_end(t_icc_letters *icc_l);
void			create_w_end(t_icc_letters *icc_l);
void			create_x_end(t_icc_letters *icc_l);
void			create_y_end(t_icc_letters *icc_l);
void			create_z_end(t_icc_letters *icc_l);

int				(*get_min_icc_letters(char c))[4];
int				(*get_min_letters(char c))[4];
int				get_scale(void);
int				icc_letters(char c);
int				icc_letters(char c);
int				spaces_letters(char c);
int				count_icc_letters(char *str);
int				particular_scale(char c);

#endif