/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basique_mlx_needed.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:35:55 by wolf              #+#    #+#             */
/*   Updated: 2023/10/22 01:06:32 by wolf             ###   ########.fr       */
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

# define ERR_ALLOCATION		"Cannot allocate enough memory. Allocation failed.\n"
# define ERR_NULL_VALUE		"Error, must me != NULL.\n"

# define WINDOW_CLOSE_ERR_ALLOC	"The window closed due to a failed allocation.\n"

# define ERR_ID_BUTTON_EVENT_GREATER	"Error, the button's ID is greater than the length of the event list.\n"
# define ERR_ID_BUTTON_GREATER			"Error, the button's ID is greater than the length of the button list.\n"

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

t_mlx_stuff	*mlx_instance(void);

void		*get_mlx_ptr(void);
void		*get_win_ptr(void);

void		update_mlx_infos(void *mlx_ptr, void *win_ptr, void *img_ptr);
void		free_mlx_infos(void);
void		handle_window_close(char *msg);

#endif