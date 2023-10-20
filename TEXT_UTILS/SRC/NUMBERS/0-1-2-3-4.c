/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0-1-2-3-4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboldrin <tboldrin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:29:35 by tboldrin          #+#    #+#             */
/*   Updated: 2023/10/20 15:52:43 by tboldrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../INCLUDES/text.h"


void create_n_0(t_numbers *n_numb)
{
n_numb->n_0[0][0] = 0;
n_numb->n_0[0][1] = 1;
n_numb->n_0[0][2] = 1;
n_numb->n_0[0][3] = 0;
n_numb->n_0[1][0] = 1;
n_numb->n_0[1][1] = 0;
n_numb->n_0[1][2] = 0;
n_numb->n_0[1][3] = 1;
n_numb->n_0[2][0] = 1;
n_numb->n_0[2][1] = 0;
n_numb->n_0[2][2] = 1;
n_numb->n_0[2][3] = 1;
n_numb->n_0[3][0] = 1;
n_numb->n_0[3][1] = 1;
n_numb->n_0[3][2] = 0;
n_numb->n_0[3][3] = 1;
n_numb->n_0[4][0] = 1;
n_numb->n_0[4][1] = 0;
n_numb->n_0[4][2] = 0;
n_numb->n_0[4][3] = 1;
n_numb->n_0[5][0] = 0;
n_numb->n_0[5][1] = 1;
n_numb->n_0[5][2] = 1;
n_numb->n_0[5][3] = 0;
}


void create_n_1(t_numbers *n_numb)
{
n_numb->n_1[0][0] = 0;
n_numb->n_1[0][1] = 1;
n_numb->n_1[0][2] = 0;
n_numb->n_1[0][3] = 0;
n_numb->n_1[1][0] = 1;
n_numb->n_1[1][1] = 1;
n_numb->n_1[1][2] = 0;
n_numb->n_1[1][3] = 0;
n_numb->n_1[2][0] = 0;
n_numb->n_1[2][1] = 1;
n_numb->n_1[2][2] = 0;
n_numb->n_1[2][3] = 0;
n_numb->n_1[3][0] = 0;
n_numb->n_1[3][1] = 1;
n_numb->n_1[3][2] = 0;
n_numb->n_1[3][3] = 0;
n_numb->n_1[4][0] = 0;
n_numb->n_1[4][1] = 1;
n_numb->n_1[4][2] = 0;
n_numb->n_1[4][3] = 0;
n_numb->n_1[5][0] = 1;
n_numb->n_1[5][1] = 1;
n_numb->n_1[5][2] = 1;
n_numb->n_1[5][3] = 0;
}

void create_n_2(t_numbers *n_numb)
{
n_numb->n_2[0][0] = 0;
n_numb->n_2[0][1] = 1;
n_numb->n_2[0][2] = 1;
n_numb->n_2[0][3] = 0;
n_numb->n_2[1][0] = 1;
n_numb->n_2[1][1] = 0;
n_numb->n_2[1][2] = 0;
n_numb->n_2[1][3] = 1;
n_numb->n_2[2][0] = 1;
n_numb->n_2[2][1] = 0;
n_numb->n_2[2][2] = 0;
n_numb->n_2[2][3] = 1;
n_numb->n_2[3][0] = 0;
n_numb->n_2[3][1] = 0;
n_numb->n_2[3][2] = 1;
n_numb->n_2[3][3] = 0;
n_numb->n_2[4][0] = 0;
n_numb->n_2[4][1] = 1;
n_numb->n_2[4][2] = 0;
n_numb->n_2[4][3] = 0;
n_numb->n_2[5][0] = 1;
n_numb->n_2[5][1] = 1;
n_numb->n_2[5][2] = 1;
n_numb->n_2[5][3] = 1;
}

void create_n_3(t_numbers *n_numb)
{
n_numb->n_3[0][0] = 0;
n_numb->n_3[0][1] = 1;
n_numb->n_3[0][2] = 1;
n_numb->n_3[0][3] = 0;
n_numb->n_3[1][0] = 1;
n_numb->n_3[1][1] = 0;
n_numb->n_3[1][2] = 0;
n_numb->n_3[1][3] = 1;
n_numb->n_3[2][0] = 0;
n_numb->n_3[2][1] = 0;
n_numb->n_3[2][2] = 1;
n_numb->n_3[2][3] = 0;
n_numb->n_3[3][0] = 0;
n_numb->n_3[3][1] = 0;
n_numb->n_3[3][2] = 0;
n_numb->n_3[3][3] = 1;
n_numb->n_3[4][0] = 1;
n_numb->n_3[4][1] = 0;
n_numb->n_3[4][2] = 0;
n_numb->n_3[4][3] = 1;
n_numb->n_3[5][0] = 0;
n_numb->n_3[5][1] = 1;
n_numb->n_3[5][2] = 1;
n_numb->n_3[5][3] = 0;
}

void create_n_4(t_numbers *n_numb)
{
n_numb->n_4[0][0] = 1;
n_numb->n_4[0][1] = 0;
n_numb->n_4[0][2] = 0;
n_numb->n_4[0][3] = 0;
n_numb->n_4[1][0] = 1;
n_numb->n_4[1][1] = 0;
n_numb->n_4[1][2] = 0;
n_numb->n_4[1][3] = 0;
n_numb->n_4[2][0] = 1;
n_numb->n_4[2][1] = 0;
n_numb->n_4[2][2] = 1;
n_numb->n_4[2][3] = 0;
n_numb->n_4[3][0] = 1;
n_numb->n_4[3][1] = 1;
n_numb->n_4[3][2] = 1;
n_numb->n_4[3][3] = 1;
n_numb->n_4[4][0] = 0;
n_numb->n_4[4][1] = 0;
n_numb->n_4[4][2] = 1;
n_numb->n_4[4][3] = 0;
n_numb->n_4[5][0] = 0;
n_numb->n_4[5][1] = 0;
n_numb->n_4[5][2] = 1;
n_numb->n_4[5][3] = 0;
}