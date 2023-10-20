/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5-6-7-8-9.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboldrin <tboldrin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:29:42 by tboldrin          #+#    #+#             */
/*   Updated: 2023/10/20 17:48:12 by tboldrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../INCLUDES/text.h"

void	create_n_5(t_numbers *n_numb)
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

void	create_n_6(t_numbers *n_numb)
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

void	create_n_7(t_numbers *n_numb)
{
	n_numb->n_7[0][0] = 1;
	n_numb->n_7[0][1] = 1;
	n_numb->n_7[0][2] = 1;
	n_numb->n_7[0][3] = 0;
	n_numb->n_7[1][0] = 0;
	n_numb->n_7[1][1] = 0;
	n_numb->n_7[1][2] = 1;
	n_numb->n_7[1][3] = 0;
	n_numb->n_7[2][0] = 0;
	n_numb->n_7[2][1] = 1;
	n_numb->n_7[2][2] = 1;
	n_numb->n_7[2][3] = 1;
	n_numb->n_7[3][0] = 0;
	n_numb->n_7[3][1] = 0;
	n_numb->n_7[3][2] = 1;
	n_numb->n_7[3][3] = 0;
	n_numb->n_7[4][0] = 0;
	n_numb->n_7[4][1] = 0;
	n_numb->n_7[4][2] = 1;
	n_numb->n_7[4][3] = 0;
	n_numb->n_7[5][0] = 0;
	n_numb->n_7[5][1] = 0;
	n_numb->n_7[5][2] = 1;
	n_numb->n_7[5][3] = 0;
}

void	create_n_8(t_numbers *n_numb)
{
	n_numb->n_8[0][0] = 0;
	n_numb->n_8[0][1] = 1;
	n_numb->n_8[0][2] = 1;
	n_numb->n_8[0][3] = 0;
	n_numb->n_8[1][0] = 1;
	n_numb->n_8[1][1] = 0;
	n_numb->n_8[1][2] = 0;
	n_numb->n_8[1][3] = 1;
	n_numb->n_8[2][0] = 0;
	n_numb->n_8[2][1] = 1;
	n_numb->n_8[2][2] = 1;
	n_numb->n_8[2][3] = 0;
	n_numb->n_8[3][0] = 1;
	n_numb->n_8[3][1] = 0;
	n_numb->n_8[3][2] = 0;
	n_numb->n_8[3][3] = 1;
	n_numb->n_8[4][0] = 1;
	n_numb->n_8[4][1] = 0;
	n_numb->n_8[4][2] = 0;
	n_numb->n_8[4][3] = 1;
	n_numb->n_8[5][0] = 0;
	n_numb->n_8[5][1] = 1;
	n_numb->n_8[5][2] = 1;
	n_numb->n_8[5][3] = 0;
}

void	create_n_9(t_numbers *n_numb)
{
	n_numb->n_9[0][0] = 0;
	n_numb->n_9[0][1] = 1;
	n_numb->n_9[0][2] = 1;
	n_numb->n_9[0][3] = 0;
	n_numb->n_9[1][0] = 1;
	n_numb->n_9[1][1] = 0;
	n_numb->n_9[1][2] = 0;
	n_numb->n_9[1][3] = 1;
	n_numb->n_9[2][0] = 1;
	n_numb->n_9[2][1] = 0;
	n_numb->n_9[2][2] = 0;
	n_numb->n_9[2][3] = 1;
	n_numb->n_9[3][0] = 0;
	n_numb->n_9[3][1] = 1;
	n_numb->n_9[3][2] = 1;
	n_numb->n_9[3][3] = 1;
	n_numb->n_9[4][0] = 0;
	n_numb->n_9[4][1] = 0;
	n_numb->n_9[4][2] = 1;
	n_numb->n_9[4][3] = 0;
	n_numb->n_9[5][0] = 0;
	n_numb->n_9[5][1] = 1;
	n_numb->n_9[5][2] = 0;
	n_numb->n_9[5][3] = 0;
}
