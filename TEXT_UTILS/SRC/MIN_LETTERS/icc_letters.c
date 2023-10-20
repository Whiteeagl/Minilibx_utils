/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   icc_letters.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 20:06:26 by wolf              #+#    #+#             */
/*   Updated: 2023/10/19 22:39:56 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../INCLUDES/text.h"

void	create_m_end(t_icc_letters *icc_l)
{
	icc_l->m_end[0][0] = 0;
	icc_l->m_end[0][1] = 0;
	icc_l->m_end[0][2] = 0;
	icc_l->m_end[0][3] = 0;
	icc_l->m_end[1][0] = 1;
	icc_l->m_end[1][1] = 1;
	icc_l->m_end[1][2] = 0;
	icc_l->m_end[1][3] = 0;
	icc_l->m_end[2][0] = 0;
	icc_l->m_end[2][1] = 1;
	icc_l->m_end[2][2] = 0;
	icc_l->m_end[2][3] = 0;
	icc_l->m_end[3][0] = 0;
	icc_l->m_end[3][1] = 1;
	icc_l->m_end[3][2] = 0;
	icc_l->m_end[3][3] = 0;
	icc_l->m_end[4][0] = 0;
	icc_l->m_end[4][1] = 1;
	icc_l->m_end[4][2] = 0;
	icc_l->m_end[4][3] = 0;
	icc_l->m_end[5][0] = 0;
	icc_l->m_end[5][1] = 1;
	icc_l->m_end[5][2] = 0;
	icc_l->m_end[5][3] = 0;
}

void	create_v_end(t_icc_letters *icc_l)
{
	icc_l->v_end[0][0] = 0;
	icc_l->v_end[0][1] = 0;
	icc_l->v_end[0][2] = 0;
	icc_l->v_end[0][3] = 0;
	icc_l->v_end[1][0] = 0;
	icc_l->v_end[1][1] = 1;
	icc_l->v_end[1][2] = 0;
	icc_l->v_end[1][3] = 0;
	icc_l->v_end[2][0] = 0;
	icc_l->v_end[2][1] = 1;
	icc_l->v_end[2][2] = 0;
	icc_l->v_end[2][3] = 0;
	icc_l->v_end[3][0] = 1;
	icc_l->v_end[3][1] = 0;
	icc_l->v_end[3][2] = 0;
	icc_l->v_end[3][3] = 0;
	icc_l->v_end[4][0] = 1;
	icc_l->v_end[4][1] = 0;
	icc_l->v_end[4][2] = 0;
	icc_l->v_end[4][3] = 0;
	icc_l->v_end[5][0] = 0;
	icc_l->v_end[5][1] = 0;
	icc_l->v_end[5][2] = 0;
	icc_l->v_end[5][3] = 0;
}

void	create_w_end(t_icc_letters *icc_l)
{
	icc_l->w_end[0][0] = 0;
	icc_l->w_end[0][1] = 0;
	icc_l->w_end[0][2] = 0;
	icc_l->w_end[0][3] = 0;
	icc_l->w_end[1][0] = 0;
	icc_l->w_end[1][1] = 0;
	icc_l->w_end[1][2] = 0;
	icc_l->w_end[1][3] = 1;
	icc_l->w_end[2][0] = 0;
	icc_l->w_end[2][1] = 0;
	icc_l->w_end[2][2] = 0;
	icc_l->w_end[2][3] = 1;
	icc_l->w_end[3][0] = 0;
	icc_l->w_end[3][1] = 0;
	icc_l->w_end[3][2] = 1;
	icc_l->w_end[3][3] = 0;
	icc_l->w_end[4][0] = 1;
	icc_l->w_end[4][1] = 0;
	icc_l->w_end[4][2] = 1;
	icc_l->w_end[4][3] = 0;
	icc_l->w_end[5][0] = 0;
	icc_l->w_end[5][1] = 1;
	icc_l->w_end[5][2] = 0;
	icc_l->w_end[5][3] = 0;
}

void	create_x_end(t_icc_letters *icc_l)
{
	icc_l->x_end[0][0] = 0;
	icc_l->x_end[0][1] = 0;
	icc_l->x_end[0][2] = 0;
	icc_l->x_end[0][3] = 0;
	icc_l->x_end[1][0] = 0;
	icc_l->x_end[1][1] = 1;
	icc_l->x_end[1][2] = 0;
	icc_l->x_end[1][3] = 0;
	icc_l->x_end[2][0] = 1;
	icc_l->x_end[2][1] = 0;
	icc_l->x_end[2][2] = 0;
	icc_l->x_end[2][3] = 0;
	icc_l->x_end[3][0] = 0;
	icc_l->x_end[3][1] = 0;
	icc_l->x_end[3][2] = 0;
	icc_l->x_end[3][3] = 0;
	icc_l->x_end[4][0] = 1;
	icc_l->x_end[4][1] = 0;
	icc_l->x_end[4][2] = 0;
	icc_l->x_end[4][3] = 0;
	icc_l->x_end[5][0] = 0;
	icc_l->x_end[5][1] = 1;
	icc_l->x_end[5][2] = 0;
	icc_l->x_end[5][3] = 0;
}

void	create_y_end(t_icc_letters *icc_l)
{
	icc_l->y_end[0][0] = 0;
	icc_l->y_end[0][1] = 0;
	icc_l->y_end[0][2] = 0;
	icc_l->y_end[0][3] = 0;
	icc_l->y_end[1][0] = 0;
	icc_l->y_end[1][1] = 1;
	icc_l->y_end[1][2] = 0;
	icc_l->y_end[1][3] = 0;
	icc_l->y_end[2][0] = 1;
	icc_l->y_end[2][1] = 0;
	icc_l->y_end[2][2] = 0;
	icc_l->y_end[2][3] = 0;
	icc_l->y_end[3][0] = 0;
	icc_l->y_end[3][1] = 0;
	icc_l->y_end[3][2] = 0;
	icc_l->y_end[3][3] = 0;
	icc_l->y_end[4][0] = 0;
	icc_l->y_end[4][1] = 0;
	icc_l->y_end[4][2] = 0;
	icc_l->y_end[4][3] = 0;
	icc_l->y_end[5][0] = 0;
	icc_l->y_end[5][1] = 0;
	icc_l->y_end[5][2] = 0;
	icc_l->y_end[5][3] = 0;
}
