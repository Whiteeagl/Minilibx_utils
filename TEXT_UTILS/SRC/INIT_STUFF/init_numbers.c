/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_numbers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboldrin <tboldrin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:53:35 by tboldrin          #+#    #+#             */
/*   Updated: 2023/10/20 17:51:31 by tboldrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../INCLUDES/text.h"

void	create_numbers(t_numbers *n_nb)
{
	create_n_0(n_nb);
	create_n_1(n_nb);
	create_n_2(n_nb);
	create_n_3(n_nb);
	create_n_4(n_nb);
	create_n_5(n_nb);
	create_n_6(n_nb);
	create_n_7(n_nb);
	create_n_8(n_nb);
	create_n_9(n_nb);
}

void	init_numbers(t_numbers *n_nb)
{
	update_numbers('0', n_nb->n_0);
	update_numbers('1', n_nb->n_1);
	update_numbers('2', n_nb->n_2);
	update_numbers('3', n_nb->n_3);
	update_numbers('4', n_nb->n_4);
	update_numbers('5', n_nb->n_5);
	update_numbers('6', n_nb->n_6);
	update_numbers('7', n_nb->n_7);
	update_numbers('8', n_nb->n_8);
	update_numbers('9', n_nb->n_9);
}

void	init_all_numbers(void)
{
	t_numbers	*n_nb;

	n_nb = get_numbers_instance();
	create_numbers(n_nb);
	init_numbers(n_nb);
}
