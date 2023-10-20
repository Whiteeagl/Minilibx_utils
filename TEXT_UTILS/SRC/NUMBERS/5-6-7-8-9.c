/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5-6-7-8-9.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboldrin <tboldrin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:29:42 by tboldrin          #+#    #+#             */
/*   Updated: 2023/10/20 16:00:07 by tboldrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../INCLUDES/text.h"

void create_n_5(t_numbers *n_numb)
{
n_numb->n_5[0][0] = 1;
n_numb->n_5[0][1] = 1;
n_numb->n_5[0][2] = 1;
n_numb->n_5[0][3] = 1;
n_numb->n_5[1][0] = 1;
n_numb->n_5[1][1] = 0;
n_numb->n_5[1][2] = 0;
n_numb->n_5[1][3] = 0;
n_numb->n_5[2][0] = 1;
n_numb->n_5[2][1] = 1;
n_numb->n_5[2][2] = 1;
n_numb->n_5[2][3] = 0;
n_numb->n_5[3][0] = 0;
n_numb->n_5[3][1] = 0;
n_numb->n_5[3][2] = 0;
n_numb->n_5[3][3] = 1;
n_numb->n_5[4][0] = 0;
n_numb->n_5[4][1] = 0;
n_numb->n_5[4][2] = 0;
n_numb->n_5[4][3] = 1;
n_numb->n_5[5][0] = 1;
n_numb->n_5[5][1] = 1;
n_numb->n_5[5][2] = 1;
n_numb->n_5[5][3] = 0;
}

void create_n_6(t_numbers *n_numb)
{
n_numb->n_6[0][0] = 0;
n_numb->n_6[0][1] = 0;
n_numb->n_6[0][2] = 1;
n_numb->n_6[0][3] = 0;
n_numb->n_6[1][0] = 0;
n_numb->n_6[1][1] = 1;
n_numb->n_6[1][2] = 0;
n_numb->n_6[1][3] = 0;
n_numb->n_6[2][0] = 1;
n_numb->n_6[2][1] = 1;
n_numb->n_6[2][2] = 1;
n_numb->n_6[2][3] = 0;
n_numb->n_6[3][0] = 1;
n_numb->n_6[3][1] = 0;
n_numb->n_6[3][2] = 0;
n_numb->n_6[3][3] = 1;
n_numb->n_6[4][0] = 1;
n_numb->n_6[4][1] = 0;
n_numb->n_6[4][2] = 0;
n_numb->n_6[4][3] = 1;
n_numb->n_6[5][0] = 0;
n_numb->n_6[5][1] = 1;
n_numb->n_6[5][2] = 1;
n_numb->n_6[5][3] = 0;
}