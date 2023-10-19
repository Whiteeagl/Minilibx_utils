/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v_w_x_y_z.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:10:26 by wolf              #+#    #+#             */
/*   Updated: 2023/10/19 20:59:02 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../INCLUDES/text.h"

/* void	create_v(t_min_letters *min_letters)
{
	min_letters->v[0][0] = 0;
	min_letters->v[0][1] = 0;
	min_letters->v[0][2] = 0;
	min_letters->v[0][3] = 0;
	min_letters->v[1][0] = 1;
	min_letters->v[1][1] = 0;
	min_letters->v[1][2] = 0;
	min_letters->v[1][3] = 0;
	min_letters->v[2][0] = 1;
	min_letters->v[2][1] = 0;
	min_letters->v[2][2] = 0;
	min_letters->v[2][3] = 0;
	min_letters->v[3][0] = 0;
	min_letters->v[3][1] = 1;
	min_letters->v[3][2] = 0;
	min_letters->v[3][3] = 1;
	min_letters->v[4][0] = 0;
	min_letters->v[4][1] = 1;
	min_letters->v[4][2] = 0;
	min_letters->v[4][3] = 1;
	min_letters->v[5][0] = 0;
	min_letters->v[5][1] = 0;
	min_letters->v[5][2] = 1;
	min_letters->v[5][3] = 0;
} */


void create_v(t_min_letters *min_letters)
{
min_letters->v[0][0] = 0;
min_letters->v[0][1] = 0;
min_letters->v[0][2] = 0;
min_letters->v[0][3] = 0;
min_letters->v[1][0] = 1;
min_letters->v[1][1] = 0;
min_letters->v[1][2] = 0;
min_letters->v[1][3] = 0;
min_letters->v[2][0] = 1;
min_letters->v[2][1] = 0;
min_letters->v[2][2] = 0;
min_letters->v[2][3] = 0;
min_letters->v[3][0] = 0;
min_letters->v[3][1] = 1;
min_letters->v[3][2] = 0;
min_letters->v[3][3] = 0;
min_letters->v[4][0] = 0;
min_letters->v[4][1] = 1;
min_letters->v[4][2] = 0;
min_letters->v[4][3] = 0;
min_letters->v[5][0] = 0;
min_letters->v[5][1] = 0;
min_letters->v[5][2] = 1;
min_letters->v[5][3] = 0;
}

void	create_w(t_min_letters *min_letters)
{
	min_letters->w[0][0] = 0;
	min_letters->w[0][1] = 0;
	min_letters->w[0][2] = 0;
	min_letters->w[0][3] = 0;
	min_letters->w[1][0] = 1;
	min_letters->w[1][1] = 0;
	min_letters->w[1][2] = 0;
	min_letters->w[1][3] = 0;
	min_letters->w[2][0] = 1;
	min_letters->w[2][1] = 0;
	min_letters->w[2][2] = 0;
	min_letters->w[2][3] = 0;
	min_letters->w[3][0] = 0;
	min_letters->w[3][1] = 1;
	min_letters->w[3][2] = 0;
	min_letters->w[3][3] = 0;
	min_letters->w[4][0] = 0;
	min_letters->w[4][1] = 1;
	min_letters->w[4][2] = 0;
	min_letters->w[4][3] = 1;
	min_letters->w[5][0] = 0;
	min_letters->w[5][1] = 0;
	min_letters->w[5][2] = 1;
	min_letters->w[5][3] = 0;
}

void	create_x(t_min_letters *min_letters)
{
	min_letters->x[0][0] = 0;
	min_letters->x[0][1] = 0;
	min_letters->x[0][2] = 0;
	min_letters->x[0][3] = 0;
	min_letters->x[1][0] = 1;
	min_letters->x[1][1] = 0;
	min_letters->x[1][2] = 0;
	min_letters->x[1][3] = 0;
	min_letters->x[2][0] = 0;
	min_letters->x[2][1] = 1;
	min_letters->x[2][2] = 0;
	min_letters->x[2][3] = 1;
	min_letters->x[3][0] = 0;
	min_letters->x[3][1] = 0;
	min_letters->x[3][2] = 1;
	min_letters->x[3][3] = 0;
	min_letters->x[4][0] = 0;
	min_letters->x[4][1] = 1;
	min_letters->x[4][2] = 0;
	min_letters->x[4][3] = 1;
	min_letters->x[5][0] = 1;
	min_letters->x[5][1] = 0;
	min_letters->x[5][2] = 0;
	min_letters->x[5][3] = 0;
}

void	create_y(t_min_letters *min_letters)
{
	min_letters->y[0][0] = 0;
	min_letters->y[0][1] = 0;
	min_letters->y[0][2] = 0;
	min_letters->y[0][3] = 0;
	min_letters->y[1][0] = 1;
	min_letters->y[1][1] = 0;
	min_letters->y[1][2] = 0;
	min_letters->y[1][3] = 0;
	min_letters->y[2][0] = 0;
	min_letters->y[2][1] = 1;
	min_letters->y[2][2] = 0;
	min_letters->y[2][3] = 1;
	min_letters->y[3][0] = 0;
	min_letters->y[3][1] = 0;
	min_letters->y[3][2] = 1;
	min_letters->y[3][3] = 0;
	min_letters->y[4][0] = 0;
	min_letters->y[4][1] = 0;
	min_letters->y[4][2] = 1;
	min_letters->y[4][3] = 0;
	min_letters->y[5][0] = 0;
	min_letters->y[5][1] = 0;
	min_letters->y[5][2] = 1;
	min_letters->y[5][3] = 0;
}

void	create_z(t_min_letters *min_letters)
{
	min_letters->z[0][0] = 0;
	min_letters->z[0][1] = 0;
	min_letters->z[0][2] = 0;
	min_letters->z[0][3] = 0;
	min_letters->z[1][0] = 1;
	min_letters->z[1][1] = 1;
	min_letters->z[1][2] = 1;
	min_letters->z[1][3] = 1;
	min_letters->z[2][0] = 0;
	min_letters->z[2][1] = 0;
	min_letters->z[2][2] = 0;
	min_letters->z[2][3] = 1;
	min_letters->z[3][0] = 0;
	min_letters->z[3][1] = 0;
	min_letters->z[3][2] = 1;
	min_letters->z[3][3] = 0;
	min_letters->z[4][0] = 0;
	min_letters->z[4][1] = 1;
	min_letters->z[4][2] = 0;
	min_letters->z[4][3] = 0;
	min_letters->z[5][0] = 1;
	min_letters->z[5][1] = 1;
	min_letters->z[5][2] = 1;
	min_letters->z[5][3] = 1;
}
