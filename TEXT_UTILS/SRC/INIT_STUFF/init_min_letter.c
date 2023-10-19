/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_min_letter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 21:43:44 by wolf              #+#    #+#             */
/*   Updated: 2023/10/20 00:25:19 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../INCLUDES/text.h"

void	create_icc_letters(t_min_letters *min_letters)
{
	t_icc_letters	*icc_l;

	icc_l = get_icc_letters_instance();
	create_m(min_letters);
	create_m_end(icc_l);
	create_v(min_letters);
	create_v_end(icc_l);
	create_w(min_letters);
	create_w_end(icc_l);
	create_x(min_letters);
	create_x_end(icc_l);
	create_y(min_letters);
	create_y_end(icc_l);
	create_z(min_letters);
	create_z_end(icc_l);
}

void	create_no_icc_letters(t_min_letters *min_letters)
{
	create_a(min_letters);
	create_b(min_letters);
	create_c(min_letters);
	create_d(min_letters);
	create_e(min_letters);
	create_f(min_letters);
	create_g(min_letters);
	create_h(min_letters);
	create_i(min_letters);
	create_j(min_letters);
	create_k(min_letters);
	create_l(min_letters);
	create_m(min_letters);
	create_n(min_letters);
	create_o(min_letters);
	create_p(min_letters);
	create_q(min_letters);
	create_r(min_letters);
	create_s(min_letters);
	create_t(min_letters);
	create_u(min_letters);
}

void	init_min_letter_first_part(t_min_letters *min_letters)
{
	create_no_icc_letters(min_letters);
	create_icc_letters(min_letters);
	update_min_letters('a', min_letters->a);
	update_min_letters('b', min_letters->b);
	update_min_letters('c', min_letters->c);
	update_min_letters('d', min_letters->d);
	update_min_letters('e', min_letters->e);
	update_min_letters('f', min_letters->f);
	update_min_letters('g', min_letters->g);
	update_min_letters('h', min_letters->h);
	update_min_letters('i', min_letters->i);
	update_min_letters('j', min_letters->j);
	update_min_letters('k', min_letters->k);
	update_min_letters('l', min_letters->l);
	update_min_letters('m', min_letters->m);
}

void	init_min_letter_last_part(t_min_letters *min_letters)
{
	update_min_letters('n', min_letters->n);
	update_min_letters('o', min_letters->o);
	update_min_letters('p', min_letters->p);
	update_min_letters('q', min_letters->q);
	update_min_letters('r', min_letters->r);
	update_min_letters('s', min_letters->s);
	update_min_letters('t', min_letters->t);
	update_min_letters('u', min_letters->u);
	update_min_letters('v', min_letters->v);
	update_min_letters('w', min_letters->w);
	update_min_letters('x', min_letters->x);
	update_min_letters('y', min_letters->y);
	update_min_letters('z', min_letters->z);
}

void	init_all_min_letters(void)
{
	t_min_letters	min_letters;

	init_min_letter_first_part(&min_letters);
	init_min_letter_last_part(&min_letters);
}
