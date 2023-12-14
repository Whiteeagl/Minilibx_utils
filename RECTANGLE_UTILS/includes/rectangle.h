/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rectangle.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphael <raphael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 19:03:42 by raphael           #+#    #+#             */
/*   Updated: 2023/12/14 17:40:27 by raphael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RECTANGLE_H
# define RECTANGLE_H

# include <stdio.h>
# include <unistd.h>
# include "../../Mlx/mlx.h"
# include "../../INCLUDES/basique_mlx_needed.h"
# include "../../LINE_UTILS/includes/line.h"

# define ESC		65307

typedef struct s_rectangle
{
	int	middle_y1;
	int	middle_x1;
	int	middle_y2;
	int	middle_x2;
	int	width;
}	t_rectangle;

t_line	init_rectangle(int x1, int y1, int x2, int y2);


#endif
