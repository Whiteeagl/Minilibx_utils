/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   q_r_s_t_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:10:18 by wolf              #+#    #+#             */
/*   Updated: 2023/10/15 22:29:24 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../INCLUDES/text.h"

void	create_q(t_min_letters *min_letters)
{
	min_letters->q[0][0] = 0;
	min_letters->q[0][1] = 0;
	min_letters->q[0][2] = 0;
	min_letters->q[0][3] = 0;
	min_letters->q[1][0] = 0;
	min_letters->q[1][1] = 1;
	min_letters->q[1][2] = 1;
	min_letters->q[1][3] = 0;
	min_letters->q[2][0] = 1;
	min_letters->q[2][1] = 0;
	min_letters->q[2][2] = 0;
	min_letters->q[2][3] = 1;
	min_letters->q[3][0] = 1;
	min_letters->q[3][1] = 0;
	min_letters->q[3][2] = 0;
	min_letters->q[3][3] = 1;
	min_letters->q[4][0] = 1;
	min_letters->q[4][1] = 0;
	min_letters->q[4][2] = 1;
	min_letters->q[4][3] = 1;
	min_letters->q[5][0] = 0;
	min_letters->q[5][1] = 1;
	min_letters->q[5][2] = 1;
	min_letters->q[5][3] = 1;
}

void	create_r(t_min_letters *min_letters)
{
	min_letters->r[0][0] = 0;
	min_letters->r[0][1] = 0;
	min_letters->r[0][2] = 0;
	min_letters->r[0][3] = 0;
	min_letters->r[1][0] = 1;
	min_letters->r[1][1] = 0;
	min_letters->r[1][2] = 1;
	min_letters->r[1][3] = 1;
	min_letters->r[2][0] = 0;
	min_letters->r[2][1] = 1;
	min_letters->r[2][2] = 0;
	min_letters->r[2][3] = 0;
	min_letters->r[3][0] = 0;
	min_letters->r[3][1] = 1;
	min_letters->r[3][2] = 0;
	min_letters->r[3][3] = 0;
	min_letters->r[4][0] = 0;
	min_letters->r[4][1] = 1;
	min_letters->r[4][2] = 0;
	min_letters->r[4][3] = 0;
	min_letters->r[5][0] = 1;
	min_letters->r[5][1] = 1;
	min_letters->r[5][2] = 1;
	min_letters->r[5][3] = 0;
}

void	create_s(t_min_letters *min_letters)
{
	min_letters->s[0][0] = 0;
	min_letters->s[0][1] = 0;
	min_letters->s[0][2] = 0;
	min_letters->s[0][3] = 0;
	min_letters->s[1][0] = 0;
	min_letters->s[1][1] = 1;
	min_letters->s[1][2] = 1;
	min_letters->s[1][3] = 1;
	min_letters->s[2][0] = 1;
	min_letters->s[2][1] = 0;
	min_letters->s[2][2] = 0;
	min_letters->s[2][3] = 0;
	min_letters->s[3][0] = 0;
	min_letters->s[3][1] = 1;
	min_letters->s[3][2] = 1;
	min_letters->s[3][3] = 0;
	min_letters->s[4][0] = 0;
	min_letters->s[4][1] = 0;
	min_letters->s[4][2] = 0;
	min_letters->s[4][3] = 1;
	min_letters->s[5][0] = 1;
	min_letters->s[5][1] = 1;
	min_letters->s[5][2] = 1;
	min_letters->s[5][3] = 0;
}

void	create_t(t_min_letters *min_letters)
{
	min_letters->t[0][0] = 0;
	min_letters->t[0][1] = 1;
	min_letters->t[0][2] = 0;
	min_letters->t[0][3] = 0;
	min_letters->t[1][0] = 1;
	min_letters->t[1][1] = 1;
	min_letters->t[1][2] = 1;
	min_letters->t[1][3] = 0;
	min_letters->t[2][0] = 0;
	min_letters->t[2][1] = 1;
	min_letters->t[2][2] = 0;
	min_letters->t[2][3] = 0;
	min_letters->t[3][0] = 0;
	min_letters->t[3][1] = 1;
	min_letters->t[3][2] = 0;
	min_letters->t[3][3] = 0;
	min_letters->t[4][0] = 0;
	min_letters->t[4][1] = 1;
	min_letters->t[4][2] = 0;
	min_letters->t[4][3] = 0;
	min_letters->t[5][0] = 0;
	min_letters->t[5][1] = 1;
	min_letters->t[5][2] = 1;
	min_letters->t[5][3] = 0;
}

void	create_u(t_min_letters *min_letters)
{
	min_letters->u[0][0] = 0;
	min_letters->u[0][1] = 0;
	min_letters->u[0][2] = 0;
	min_letters->u[0][3] = 0;
	min_letters->u[1][0] = 1;
	min_letters->u[1][1] = 0;
	min_letters->u[1][2] = 0;
	min_letters->u[1][3] = 1;
	min_letters->u[2][0] = 1;
	min_letters->u[2][1] = 0;
	min_letters->u[2][2] = 0;
	min_letters->u[2][3] = 1;
	min_letters->u[3][0] = 1;
	min_letters->u[3][1] = 0;
	min_letters->u[3][2] = 0;
	min_letters->u[3][3] = 1;
	min_letters->u[4][0] = 1;
	min_letters->u[4][1] = 0;
	min_letters->u[4][2] = 0;
	min_letters->u[4][3] = 1;
	min_letters->u[5][0] = 0;
	min_letters->u[5][1] = 1;
	min_letters->u[5][2] = 1;
	min_letters->u[5][3] = 1;
}
