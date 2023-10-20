/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   l_m_n_o_p.c										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: tboldrin <tboldrin@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2023/10/15 17:10:10 by wolf			  #+#	#+#			 */
/*   Updated: 2023/10/20 14:25:10 by tboldrin		 ###   ########.fr	   */
/*																			*/
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
	min_letters->l[5][0] = 0;
	min_letters->l[5][1] = 0;
	min_letters->l[5][2] = 1;
	min_letters->l[5][3] = 1;
}

void	create_m(t_min_letters *min_letters)
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

void	create_n(t_min_letters *min_letters)
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

void	create_o(t_min_letters *min_letters)
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

void	create_p(t_min_letters *min_letters)
{
	min_letters->p[0][0] = 0;
	min_letters->p[0][1] = 0;
	min_letters->p[0][2] = 0;
	min_letters->p[0][3] = 0;
	min_letters->p[1][0] = 1;
	min_letters->p[1][1] = 1;
	min_letters->p[1][2] = 0;
	min_letters->p[1][3] = 0;
	min_letters->p[2][0] = 1;
	min_letters->p[2][1] = 0;
	min_letters->p[2][2] = 1;
	min_letters->p[2][3] = 0;
	min_letters->p[3][0] = 1;
	min_letters->p[3][1] = 1;
	min_letters->p[3][2] = 1;
	min_letters->p[3][3] = 0;
	min_letters->p[4][0] = 1;
	min_letters->p[4][1] = 0;
	min_letters->p[4][2] = 0;
	min_letters->p[4][3] = 0;
	min_letters->p[5][0] = 1;
	min_letters->p[5][1] = 0;
	min_letters->p[5][2] = 0;
	min_letters->p[5][3] = 0;
}
