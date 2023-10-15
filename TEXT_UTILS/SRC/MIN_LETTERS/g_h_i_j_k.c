/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   g_h_i_j_k.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:09:36 by wolf              #+#    #+#             */
/*   Updated: 2023/10/15 17:37:27 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../INCLUDES/text.h"

void	create_g(t_min_letters *min_letters)
{
	min_letters->g[0][0] = 0;
	min_letters->g[0][1] = 0;
	min_letters->g[0][2] = 0;
	min_letters->g[0][3] = 0;
	min_letters->g[1][0] = 0;
	min_letters->g[1][1] = 1;
	min_letters->g[1][2] = 1;
	min_letters->g[1][3] = 0;
	min_letters->g[2][0] = 1;
	min_letters->g[2][1] = 0;
	min_letters->g[2][2] = 0;
	min_letters->g[2][3] = 0;
	min_letters->g[3][0] = 1;
	min_letters->g[3][1] = 0;
	min_letters->g[3][2] = 1;
	min_letters->g[3][3] = 1;
	min_letters->g[4][0] = 1;
	min_letters->g[4][1] = 0;
	min_letters->g[4][2] = 0;
	min_letters->g[4][3] = 1;
	min_letters->g[5][0] = 0;
	min_letters->g[5][1] = 1;
	min_letters->g[5][2] = 1;
	min_letters->g[5][3] = 0;
}

void	create_h(t_min_letters *min_letters)
{
	min_letters->h[0][0] = 1;
	min_letters->h[0][1] = 0;
	min_letters->h[0][2] = 0;
	min_letters->h[0][3] = 0;
	min_letters->h[1][0] = 1;
	min_letters->h[1][1] = 0;
	min_letters->h[1][2] = 0;
	min_letters->h[1][3] = 0;
	min_letters->h[2][0] = 1;
	min_letters->h[2][1] = 1;
	min_letters->h[2][2] = 1;
	min_letters->h[2][3] = 0;
	min_letters->h[3][0] = 1;
	min_letters->h[3][1] = 0;
	min_letters->h[3][2] = 0;
	min_letters->h[3][3] = 1;
	min_letters->h[4][0] = 1;
	min_letters->h[4][1] = 0;
	min_letters->h[4][2] = 0;
	min_letters->h[4][3] = 1;
	min_letters->h[5][0] = 1;
	min_letters->h[5][1] = 0;
	min_letters->h[5][2] = 0;
	min_letters->h[5][3] = 1;
}

void	create_i(t_min_letters *min_letters)
{
	min_letters->i[0][0] = 0;
	min_letters->i[0][1] = 1;
	min_letters->i[0][2] = 0;
	min_letters->i[0][3] = 0;
	min_letters->i[1][0] = 0;
	min_letters->i[1][1] = 0;
	min_letters->i[1][2] = 0;
	min_letters->i[1][3] = 0;
	min_letters->i[2][0] = 1;
	min_letters->i[2][1] = 1;
	min_letters->i[2][2] = 0;
	min_letters->i[2][3] = 0;
	min_letters->i[3][0] = 0;
	min_letters->i[3][1] = 1;
	min_letters->i[3][2] = 0;
	min_letters->i[3][3] = 0;
	min_letters->i[4][0] = 0;
	min_letters->i[4][1] = 1;
	min_letters->i[4][2] = 0;
	min_letters->i[4][3] = 0;
	min_letters->i[5][0] = 1;
	min_letters->i[5][1] = 1;
	min_letters->i[5][2] = 1;
	min_letters->i[5][3] = 0;
}

void	create_j(t_min_letters *min_letters)
{
	min_letters->j[0][0] = 0;
	min_letters->j[0][1] = 0;
	min_letters->j[0][2] = 1;
	min_letters->j[0][3] = 0;
	min_letters->j[1][0] = 0;
	min_letters->j[1][1] = 0;
	min_letters->j[1][2] = 0;
	min_letters->j[1][3] = 0;
	min_letters->j[2][0] = 0;
	min_letters->j[2][1] = 1;
	min_letters->j[2][2] = 1;
	min_letters->j[2][3] = 0;
	min_letters->j[3][0] = 0;
	min_letters->j[3][1] = 0;
	min_letters->j[3][2] = 1;
	min_letters->j[3][3] = 0;
	min_letters->j[4][0] = 0;
	min_letters->j[4][1] = 0;
	min_letters->j[4][2] = 1;
	min_letters->j[4][3] = 0;
	min_letters->j[5][0] = 1;
	min_letters->j[5][1] = 1;
	min_letters->j[5][2] = 1;
	min_letters->j[5][3] = 0;
}

void	create_k(t_min_letters *min_letters)
{
	min_letters->k[0][0] = 1;
	min_letters->k[0][1] = 0;
	min_letters->k[0][2] = 0;
	min_letters->k[0][3] = 0;
	min_letters->k[1][0] = 1;
	min_letters->k[1][1] = 0;
	min_letters->k[1][2] = 0;
	min_letters->k[1][3] = 1;
	min_letters->k[2][0] = 1;
	min_letters->k[2][1] = 0;
	min_letters->k[2][2] = 1;
	min_letters->k[2][3] = 0;
	min_letters->k[3][0] = 1;
	min_letters->k[3][1] = 1;
	min_letters->k[3][2] = 0;
	min_letters->k[3][3] = 0;
	min_letters->k[4][0] = 1;
	min_letters->k[4][1] = 0;
	min_letters->k[4][2] = 1;
	min_letters->k[4][3] = 0;
	min_letters->k[5][0] = 1;
	min_letters->k[5][1] = 0;
	min_letters->k[5][2] = 0;
	min_letters->k[5][3] = 1;
}
