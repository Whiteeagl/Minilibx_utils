/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basique_mlx_needed.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphael <raphael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:35:55 by wolf              #+#    #+#             */
/*   Updated: 2023/12/14 17:18:31 by raphael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASIQUE_MLX_NEEDED_H
# define BASIQUE_MLX_NEEDED_H

# include <stdlib.h>
# include "colors.h"
# include "../Mlx/mlx.h"
# include "../BUTTON_UTILS/INCLUDES/button.h"
# include "../TEXT_UTILS/INCLUDES/text.h"
# include "../LINE_UTILS/includes/line.h"
# include "../RECTANGLE_UTILS/includes/rectangle.h"

# define ERR_ALLOCATION		"Cannot allocate enough memory. Allocation failed.\n"
# define ERR_NULL_VALUE		"Error, must me != NULL.\n"

# define WINDOW_CLOSE_ERR_ALLOC	"The window closed due to a failed allocation.\n"
# define WINDOW_CLOSE_ESC	"Window closed by ESC key"

# define ERR_ID_BUTTON_EVENT_GREATER	"Error, the button's ID is \
									greater than the length of the event list.\n"
# define ERR_ID_BUTTON_GREATER 			"Error, the button's ID is \
								greater than the length of the button list.\n"

# define A_FUNC		__FUNCTION__

typedef struct s_mlx_stuff
{
	void	*mlx_ptr;
	void	*win_ptr;
	void	*img_ptr;
}t_mlx_stuff;

typedef struct c_tmp_pixel
{
	int	bits_per_pixel;
	int	size_line;
	int	endian;
}t_tmp_pixel;

typedef struct s_garbage_lst
{	
	void					*pointer;
	struct s_garbage_lst	*next;	
}t_garbage_lst;

typedef struct s_garbage
{
	int						len_of_lst;
	t_garbage_lst			*head;
	t_garbage_lst			*tail;
}t_garbage;

t_garbage_lst	*new_elmt(void *pointer_to);
t_mlx_stuff		*mlx_instance(void);
t_garbage		*start_garbage(void);
t_garbage		*get_garbage_instance(void);

void			*get_mlx_ptr(void);
void			*get_win_ptr(void);
void			*ft_malloc(size_t size);

void			update_mlx_infos(void *mlx_ptr, void *win_ptr, void *img_ptr);
void			free_mlx_infos(void);
void			handle_window_close(char *msg);
void			handle_window_close_err_alloc(const char *function_name);
void			garbage_add(void *pointer);
void			free_garbage(void);

int				handle_keypress(int keycode);

#endif