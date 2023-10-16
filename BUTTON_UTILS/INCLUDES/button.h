/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   button.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboldrin <tboldrin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:52:04 by wolf              #+#    #+#             */
/*   Updated: 2023/10/16 18:38:51 by tboldrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUTTON_H
# define BUTTON_H

# include <stdlib.h>
# include <stdio.h>
# include <stddef.h>
# include <stdbool.h>
# include "../../Mlx/mlx.h"
# include "../../TEXT_UTILS/INCLUDES/text.h"
# include "../../INCLUDES/basique_mlx_needed.h"

# define RECT_COLOR	0x808080
# define ESC		65307

typedef struct c_image_stuff
{
	void	*image_ptr;
	char	*image_data;
}t_image_stuff;

typedef struct s_button_lst
{	
	void					*pointer;
	int						id;
	int						x;
	int						y;
	int						width;
	int						height;
	int						color;
	struct s_button_lst		*next;	
}t_button_lst;

typedef struct s_tmp_button_min_stuff
{	
	int						x;
	int						y;
	int						width;
	int						height;
}t_tmp_button_min_stuff;

typedef struct s_button
{
	int						len_of_lst;
	t_button_lst			*head;
	t_button_lst			*tail;
}t_button;

typedef struct s_mouse
{
	int	mx;
	int	my;
}t_mouse;

typedef struct s_button_collide
{
	t_button_lst	*origin_one;
	t_button_lst	*collide_image;
}t_button_collide;

t_tmp_button_min_stuff	*tmp_stuff_instance(void);
t_tmp_button_min_stuff	*get_tmp_stuff(void);

t_button_collide		*get_collide_one_instance(void);
t_button_lst			*new_button(void *pointer_to,
							t_tmp_button_min_stuff *tmp_stuff);

t_button_lst			*get_collide_image(void);
t_button_lst			*get_collide_origin(void);
t_button				*button_list_instance(void);
t_button				*button_init(void);

t_mouse					*get_mouse_instance(void);

bool					is_mouse_inside_rect(void);

void					*init_button(int width, int height, int color);
void					*init_button(int width, int height, int color);

void					update_tmp_stuff(int x, int y, int width, int height);
void					update_collide_one(t_button_lst *origin_one,
							t_button_lst *collide_one);
void					add_button(void *pointer,
							t_tmp_button_min_stuff *tmp_stuff);
void					create_button(int x, int y, int width, int height);
void					display_collide_img(t_button_lst *to_display);
void					handle_window_close(void);
void					free_button_list(void);
void					update_coord(int x, int y);

int						handle_keypress(int keycode);
int						handle_mouse_click(int button);
int						handle_mouse_move(int x, int y);
int						get_mx(void);
int						get_my(void);

#endif
