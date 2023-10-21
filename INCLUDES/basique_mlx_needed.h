/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basique_mlx_needed.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:35:55 by wolf              #+#    #+#             */
/*   Updated: 2023/10/21 22:21:02 by wolf             ###   ########.fr       */
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

#endif