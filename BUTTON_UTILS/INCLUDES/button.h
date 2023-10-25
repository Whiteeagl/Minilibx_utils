/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   button.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:52:04 by wolf              #+#    #+#             */
/*   Updated: 2023/10/25 23:49:16 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUTTON_H
# define BUTTON_H

# include <stdlib.h>
# include <stdio.h>
# include <stddef.h>
# include <stdbool.h>
# include "../../INCLUDES/basique_mlx_needed.h"

# define RECT_COLOR	0x808080
# define ESC		65307

# define START_D_FACTOR	0.8
# define D_FACTOR		0.5

typedef void	(*t_event_function)(void);

typedef struct s_B
{
	int					button_id;
	t_event_function	event_function;
}t_B;

typedef struct s_image_stuff
{
	void	*image_ptr;
	char	*image_data;
}t_image_stuff;

// 				START : BUTTON
typedef struct s_button_sub_data
{
	void					*text_img;
	void					*text_collide_img;
	int						text_scale;
	int						x;
	int						y;
	t_event_function		event_function;
}t_button_sub_data;

typedef struct c_button_lst
{	
	void					*pointer;
	int						id;
	int						width;
	int						height;
	int						color;
	t_button_sub_data		*sub_data;
	struct c_button_lst		*next;	
}t_button_lst;

typedef struct s_button
{
	int						len_of_lst;
	t_button_lst			*head;
	t_button_lst			*tail;
}t_button;
// END : BUTTON

// 				START : BUTTON EVENT
typedef struct s_event_button_lst
{
	t_event_function				event_func;
	t_button_sub_data				*sub_data;
	struct s_event_button_lst		*next;
}t_event_button_lst;

typedef struct c_event_button
{
	int							len_of_lst;
	t_event_button_lst			*head;
	t_event_button_lst			*tail;
}t_event_button;
// END : BUTTON EVENT

typedef struct s_tmp_button_min_stuff
{	
	void					*text_image;
	int						bg_color;
	int						width;
	int						heigth;
	t_button_sub_data		*sub_data;
}t_tmp_button_min_stuff;

typedef struct s_mouse
{
	int	mx;
	int	my;
}t_mouse;

typedef struct s_tmp_mouse_stuff
{
	void	*text_ptr;
	void	*window_ptr;
	int		text_x;
	int		text_y;
}t_tmp_mouse_stuff;

typedef struct s_button_collide
{
	t_button_lst	*origin_one;
	t_button_lst	*collide_image;
}t_button_collide;

typedef struct s_darkening_factor
{
	double	dark_factor;
}t_darkening_factor;

t_tmp_button_min_stuff	*tmp_stuff_instance(void);
t_tmp_button_min_stuff	*get_tmp_stuff(void);

t_darkening_factor		*get_d_factor_instance(void);

t_button_sub_data		*sub_data(void *text_img,
							void *text_collide_img, void (*event_func)(void));

t_button_collide		*get_collide_one_instance(void);
t_event_button			*button_event_list_instance(void);
t_event_function		get_button_event(int button_id);
t_button_lst			*new_button(void *pointer_to,
							t_tmp_button_min_stuff *tmp_stuff);

t_button_lst			*get_collide_image(void);
t_button_lst			*get_collide_origin(void);
t_button_lst			*get_button_stuff_by_id(int id);
t_button_lst			*get_button_stuff_by_addr(void *button);

t_button				*button_list_instance(void);
t_button				*chain_list_button_init(void);

t_mouse					*get_mouse_instance(void);

double					get_d_factor(void);

bool					is_mouse_inside_rect(void);
bool					do_we_are_building_button(void);

void					*init_button(int width, int height, int color);
void					*init_button(int width, int height, int color);
void					*create_button(char *string, int fg_color,
							int bg_color, t_event_function event_func);
void					*create_button_img(int width, int length, int color);

void					update_d_factor(double factor);
void					update_tmp_stuff(int bg_color,
							int width, int heigth, t_button_sub_data *sub_data);
void					update_collide_one(t_button_lst *origin_one,
							t_button_lst *collide_one);
void					add_button(void *pointer,
							t_tmp_button_min_stuff *tmp_stuff);
void					update_button_coord(void *button, int x, int y);
void					display_collide_img(t_button_lst *to_display,
							void *window_ptr);
void					update_coord(int x, int y);
void					add_button_event(void *button,
							t_event_function event_func);
void					add_event_to_lst(void *button_img,
							t_event_function event_function);

void					free_button_event_list(void);
void					init_button_event(void);
void					button_place(void *button, int x, int y);
void					init_all_button_stuff(void);
void					free_all_button_stuff(void);
void					update_button_building_info(bool info);
void					add_button_identity(void *original_image,
							void *collide_image);

int						mouse_hook_function(int click_id, int x, int y);
int						did_it_collide(int click_id);
int						handle_mouse_move(int x, int y, void *window_ptr);
int						get_mx(void);
int						get_my(void);
int						get_button_id_by_addr(void *button);
int						button_width_calcul(char *string);
int						button_length_calcul(void);

#endif
