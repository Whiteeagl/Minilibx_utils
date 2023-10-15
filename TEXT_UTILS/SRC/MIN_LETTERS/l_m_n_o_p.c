/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   l_m_n_o_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:10:10 by wolf              #+#    #+#             */
/*   Updated: 2023/10/15 19:59:09 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../INCLUDES/text.h"

void	create_l(t_min_letters *min_letters)
{
	min_letters->l[0][0] = 1;
	min_letters->l[0][1] = 1;
	min_letters->l[0][2] = 0;
	min_letters->l[0][3] = 0;
	min_letters->l[1][0] = 0;
	min_letters->l[1][1] = 1;
	min_letters->l[1][2] = 0;
	min_letters->l[1][3] = 0;
	min_letters->l[2][0] = 0;
	min_letters->l[2][1] = 1;
	min_letters->l[2][2] = 0;
	min_letters->l[2][3] = 0;
	min_letters->l[3][0] = 0;
	min_letters->l[3][1] = 1;
	min_letters->l[3][2] = 0;
	min_letters->l[3][3] = 0;
	min_letters->l[4][0] = 0;
	min_letters->l[4][1] = 1;
	min_letters->l[4][2] = 0;
	min_letters->l[4][3] = 0;
	min_letters->l[5][0] = 1;
	min_letters->l[5][1] = 1;
	min_letters->l[5][2] = 1;
	min_letters->l[5][3] = 0;
}

void create_m(t_min_letters *min_letters)
{
min_letters->m[0][0] = 0;
min_letters->m[0][1] = 0;
min_letters->m[0][2] = 0;
min_letters->m[0][3] = 0;
min_letters->m[1][0] = 1;
min_letters->m[1][1] = 1;
min_letters->m[1][2] = 0;
min_letters->m[1][3] = 1;
min_letters->m[2][0] = 1;
min_letters->m[2][1] = 0;
min_letters->m[2][2] = 1;
min_letters->m[2][3] = 0;
min_letters->m[3][0] = 1;
min_letters->m[3][1] = 0;
min_letters->m[3][2] = 0;
min_letters->m[3][3] = 0;
min_letters->m[4][0] = 1;
min_letters->m[4][1] = 0;
min_letters->m[4][2] = 0;
min_letters->m[4][3] = 0;
min_letters->m[5][0] = 1;
min_letters->m[5][1] = 0;
min_letters->m[5][2] = 0;
min_letters->m[5][3] = 0;
}

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

void 	create_n(t_min_letters *min_letters)
{
min_letters->n[0][0] = 0;
min_letters->n[0][1] = 0;
min_letters->n[0][2] = 0;
min_letters->n[0][3] = 0;
min_letters->n[1][0] = 1;
min_letters->n[1][1] = 1;
min_letters->n[1][2] = 1;
min_letters->n[1][3] = 0;
min_letters->n[2][0] = 1;
min_letters->n[2][1] = 0;
min_letters->n[2][2] = 0;
min_letters->n[2][3] = 1;
min_letters->n[3][0] = 1;
min_letters->n[3][1] = 0;
min_letters->n[3][2] = 0;
min_letters->n[3][3] = 1;
min_letters->n[4][0] = 1;
min_letters->n[4][1] = 0;
min_letters->n[4][2] = 0;
min_letters->n[4][3] = 1;
min_letters->n[5][0] = 1;
min_letters->n[5][1] = 0;
min_letters->n[5][2] = 0;
min_letters->n[5][3] = 1;
}

void create_o(t_min_letters *min_letters)
{
min_letters->o[0][0] = 0;
min_letters->o[0][1] = 0;
min_letters->o[0][2] = 0;
min_letters->o[0][3] = 0;
min_letters->o[1][0] = 0;
min_letters->o[1][1] = 1;
min_letters->o[1][2] = 1;
min_letters->o[1][3] = 0;
min_letters->o[2][0] = 1;
min_letters->o[2][1] = 0;
min_letters->o[2][2] = 0;
min_letters->o[2][3] = 1;
min_letters->o[3][0] = 1;
min_letters->o[3][1] = 0;
min_letters->o[3][2] = 0;
min_letters->o[3][3] = 1;
min_letters->o[4][0] = 1;
min_letters->o[4][1] = 0;
min_letters->o[4][2] = 0;
min_letters->o[4][3] = 1;
min_letters->o[5][0] = 0;
min_letters->o[5][1] = 1;
min_letters->o[5][2] = 1;
min_letters->o[5][3] = 0;
}