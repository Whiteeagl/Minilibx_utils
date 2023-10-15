/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_c_d_e_f.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:20:18 by wolf              #+#    #+#             */
/*   Updated: 2023/10/15 20:28:58 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../INCLUDES/text.h"

void	create_b(t_min_letters *min_letters)
{
	min_letters->b[0][0] = 1;
	min_letters->b[0][1] = 0;
	min_letters->b[0][2] = 0;
	min_letters->b[0][3] = 0;
	min_letters->b[1][0] = 1;
	min_letters->b[1][1] = 0;
	min_letters->b[1][2] = 0;
	min_letters->b[1][3] = 0;
	min_letters->b[2][0] = 1;
	min_letters->b[2][1] = 1;
	min_letters->b[2][2] = 1;
	min_letters->b[2][3] = 0;
	min_letters->b[3][0] = 1;
	min_letters->b[3][1] = 0;
	min_letters->b[3][2] = 0;
	min_letters->b[3][3] = 1;
	min_letters->b[4][0] = 1;
	min_letters->b[4][1] = 0;
	min_letters->b[4][2] = 0;
	min_letters->b[4][3] = 1;
	min_letters->b[5][0] = 1;
	min_letters->b[5][1] = 1;
	min_letters->b[5][2] = 1;
	min_letters->b[5][3] = 0;
}

void	create_c(t_min_letters *min_letters)
{
	min_letters->c[0][0] = 0;
	min_letters->c[0][1] = 0;
	min_letters->c[0][2] = 0;
	min_letters->c[0][3] = 0;
	min_letters->c[1][0] = 0;
	min_letters->c[1][1] = 1;
	min_letters->c[1][2] = 1;
	min_letters->c[1][3] = 0;
	min_letters->c[2][0] = 1;
	min_letters->c[2][1] = 0;
	min_letters->c[2][2] = 0;
	min_letters->c[2][3] = 0;
	min_letters->c[3][0] = 1;
	min_letters->c[3][1] = 0;
	min_letters->c[3][2] = 0;
	min_letters->c[3][3] = 0;
	min_letters->c[4][0] = 1;
	min_letters->c[4][1] = 0;
	min_letters->c[4][2] = 0;
	min_letters->c[4][3] = 0;
	min_letters->c[5][0] = 0;
	min_letters->c[5][1] = 1;
	min_letters->c[5][2] = 1;
	min_letters->c[5][3] = 0;
}

void	create_d(t_min_letters *min_letters)
{
	min_letters->d[0][0] = 0;
	min_letters->d[0][1] = 0;
	min_letters->d[0][2] = 0;
	min_letters->d[0][3] = 1;
	min_letters->d[1][0] = 0;
	min_letters->d[1][1] = 0;
	min_letters->d[1][2] = 0;
	min_letters->d[1][3] = 1;
	min_letters->d[2][0] = 0;
	min_letters->d[2][1] = 1;
	min_letters->d[2][2] = 1;
	min_letters->d[2][3] = 1;
	min_letters->d[3][0] = 1;
	min_letters->d[3][1] = 0;
	min_letters->d[3][2] = 0;
	min_letters->d[3][3] = 1;
	min_letters->d[4][0] = 1;
	min_letters->d[4][1] = 0;
	min_letters->d[4][2] = 0;
	min_letters->d[4][3] = 1;
	min_letters->d[5][0] = 0;
	min_letters->d[5][1] = 1;
	min_letters->d[5][2] = 1;
	min_letters->d[5][3] = 1;
}

void	create_e(t_min_letters *min_letters)
{
	min_letters->e[0][0] = 0;
	min_letters->e[0][1] = 0;
	min_letters->e[0][2] = 0;
	min_letters->e[0][3] = 0;
	min_letters->e[1][0] = 0;
	min_letters->e[1][1] = 1;
	min_letters->e[1][2] = 1;
	min_letters->e[1][3] = 0;
	min_letters->e[2][0] = 1;
	min_letters->e[2][1] = 0;
	min_letters->e[2][2] = 0;
	min_letters->e[2][3] = 1;
	min_letters->e[3][0] = 1;
	min_letters->e[3][1] = 1;
	min_letters->e[3][2] = 1;
	min_letters->e[3][3] = 1;
	min_letters->e[4][0] = 1;
	min_letters->e[4][1] = 0;
	min_letters->e[4][2] = 0;
	min_letters->e[4][3] = 0;
	min_letters->e[5][0] = 0;
	min_letters->e[5][1] = 1;
	min_letters->e[5][2] = 1;
	min_letters->e[5][3] = 0;
}

void	create_f(t_min_letters *min_letters)
{
	min_letters->f[0][0] = 0;
	min_letters->f[0][1] = 0;
	min_letters->f[0][2] = 1;
	min_letters->f[0][3] = 1;
	min_letters->f[1][0] = 0;
	min_letters->f[1][1] = 1;
	min_letters->f[1][2] = 0;
	min_letters->f[1][3] = 0;
	min_letters->f[2][0] = 1;
	min_letters->f[2][1] = 1;
	min_letters->f[2][2] = 1;
	min_letters->f[2][3] = 0;
	min_letters->f[3][0] = 0;
	min_letters->f[3][1] = 1;
	min_letters->f[3][2] = 0;
	min_letters->f[3][3] = 0;
	min_letters->f[4][0] = 0;
	min_letters->f[4][1] = 1;
	min_letters->f[4][2] = 0;
	min_letters->f[4][3] = 0;
	min_letters->f[5][0] = 0;
	min_letters->f[5][1] = 1;
	min_letters->f[5][2] = 0;
	min_letters->f[5][3] = 0;
}
