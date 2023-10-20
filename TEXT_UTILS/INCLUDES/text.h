/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   text.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboldrin <tboldrin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:00:52 by wolf              #+#    #+#             */
/*   Updated: 2023/10/20 15:58:00 by tboldrin         ###   ########.fr       */
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

# define LENGTH				6
# define WIDTH				4

# include "../../Mlx/mlx.h"
# include "../../INCLUDES/basique_mlx_needed.h"

typedef struct c_numbers
{
	int	n_0[LENGTH][WIDTH];
	int	n_1[LENGTH][WIDTH];
	int	n_2[LENGTH][WIDTH];
	int	n_3[LENGTH][WIDTH];
	int	n_4[LENGTH][WIDTH];
	int	n_5[LENGTH][WIDTH];
	int	n_6[LENGTH][WIDTH];
	int	n_7[LENGTH][WIDTH];
	int	n_8[LENGTH][WIDTH];
	int	n_9[LENGTH][WIDTH];
}t_numbers;


typedef struct c_min_letters
{
	int	a[LENGTH][WIDTH];
	int	b[LENGTH][WIDTH];
	int	c[LENGTH][WIDTH];
	int	d[LENGTH][WIDTH];
	int	e[LENGTH][WIDTH];
	int	f[LENGTH][WIDTH];
	int	g[LENGTH][WIDTH];
	int	h[LENGTH][WIDTH];
	int	i[LENGTH][WIDTH];
	int	j[LENGTH][WIDTH];
	int	k[LENGTH][WIDTH];
	int	l[LENGTH][WIDTH];
	int	m[LENGTH][WIDTH];
	int	n[LENGTH][WIDTH];
	int	o[LENGTH][WIDTH];
	int	p[LENGTH][WIDTH];
	int	q[LENGTH][WIDTH];
	int	r[LENGTH][WIDTH];
	int	s[LENGTH][WIDTH];
	int	t[LENGTH][WIDTH];
	int	u[LENGTH][WIDTH];
	int	v[LENGTH][WIDTH];
	int	w[LENGTH][WIDTH];
	int	x[LENGTH][WIDTH];
	int	y[LENGTH][WIDTH];
	int	z[LENGTH][WIDTH];
}t_min_letters;

typedef struct c_icc_letters
{
	int	m_end[LENGTH][WIDTH];
	int	v_end[LENGTH][WIDTH];
	int	w_end[LENGTH][WIDTH];
	int	x_end[LENGTH][WIDTH];
	int	y_end[LENGTH][WIDTH];
	int	z_end[LENGTH][WIDTH];
}t_icc_letters;

typedef struct c_special_cara
{
	int	space[LENGTH][WIDTH];
}t_special_cara;

typedef struct s_all_text
{
	int	all_letters_array[26][LENGTH][WIDTH];
	int	all_numbers_array[10][LENGTH][WIDTH];
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

typedef struct s_fbg_color
{
	int	fg_color;
	int	bg_color;
}t_fbg_color;

t_text_addr_lst	*new_pointer(void *pointer_to);
t_special_cara	*get_special_cara_instance(void);
t_icc_letters	*get_icc_letters_instance(void);
t_text_addr		*get_text_list_instance(void);
t_tmp_scale		*get_scale_instance(void);
t_all_text		*get_all_text_instance(void);
t_numbers		*get_numbers_instance(void);

size_t			ft_len_text(char *string);

void			*ft_memcpy_text(void *dest, const void *src, size_t n);
void			*build_string(char *string,
					int scale, int fg_color, int bg_color);

void			create_icc_letters(t_min_letters *min_letters);
void			create_no_icc_letters(t_min_letters *min_letters);
void			init_min_letter_first_part(t_min_letters *min_letters);
void			init_min_letter_last_part(t_min_letters *min_letters);

void			init_all_min_letters(void);
void			init_all_special_cara(void);
void			init_all_numbers(void);

void			init_all_text_stuff(void);

void			update_numbers(char c, int (*elmt)[WIDTH]);
void			update_min_letters(char c, int (*elmt)[WIDTH]);
void			update_scale_value(int new_scale);
void			add_text_pointer(void *pointer);
void			free_text_addr_list(void);
void			err_charactere_not_recoginzed(char c);
void			parse_and_print(void *img, char *string,
					t_fbg_color *fbg_colors);
void			display_string(void *img, int x, int y);
void			put_pixel_to_image(void *img, int x, int y, int color);
void			draw_pixel_baby(void *img, t_pixel_stuff *p_stuff,
					int (*array)[WIDTH], t_fbg_color *fbg_colors);
void			check_if_one(void *img,
					t_pixel_stuff *p_stuff, int color);

void			fill_icc_cara(void *img,
					char c, int x, t_fbg_color *fbg_colors);
void			dipslay_cara(void *img,
					char c, int x, t_fbg_color *fbg_colors);

void			write_msg(char *string);
void			write_func_msg(char *func_name, char *msg);

void			create_n_0(t_numbers *n_numb);
void			create_n_1(t_numbers *n_numb);
void			create_n_2(t_numbers *n_numb);
void			create_n_3(t_numbers *n_numb);
void			create_n_4(t_numbers *n_numb);
void			create_n_5(t_numbers *n_numb);
void			create_n_6(t_numbers *n_numb);
//void			create_n_7(t_numbers *n_numb);
//void			create_n_8(t_numbers *n_numb);
//void			create_n_9(t_numbers *n_numb);


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

void			create_spc_space(t_special_cara *special_cara);

int				(*get_min_icc_letters(char c))[WIDTH];
int				(*get_min_letters(char c))[WIDTH];
int				(*is_it_a_special_cara(char c))[WIDTH];
int				(*get_number_array(char c))[WIDTH];
int				(*is_it_a_number(char c))[WIDTH];
int				(*maybe_not_a_letter(char c))[WIDTH];

int				get_scale(void);
int				icc_letters(char c);
int				icc_letters(char c);
int				spaces_letters(char c);
int				count_icc_letters(char *str);
int				particular_scale(char c);
int				sum_icc_letters(char *str);
int				do_we_stop(int (*array)[WIDTH]);

#endif