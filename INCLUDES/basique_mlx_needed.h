/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basique_mlx_needed.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:35:55 by wolf              #+#    #+#             */
/*   Updated: 2023/10/15 16:40:17 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASIQUE_MLX_NEEDED_H
# define BASIQUE_MLX_NEEDED_H

# include <stdlib.h>
# include "../Mlx/mlx.h"

typedef struct s_mlx_stuff
{
	void	*mlx_ptr;
	void	*win_ptr;
}t_mlx_stuff;

t_mlx_stuff	*mlx_instance(void);

void		*get_mlx_ptr(void);
void		*get_win_ptr(void);

void		update_mlx_infos(void *mlx_ptr, void *win_ptr);
void		free_mlx_infos(void);

#endif