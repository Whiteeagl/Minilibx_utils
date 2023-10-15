/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   icc_letters2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 22:22:19 by wolf              #+#    #+#             */
/*   Updated: 2023/10/15 22:33:35 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../INCLUDES/text.h"

void	create_z_end(t_icc_letters *icc_l)
{
	icc_l->z_end[0][0] = 0;
	icc_l->z_end[0][1] = 0;
	icc_l->z_end[0][2] = 0;
	icc_l->z_end[0][3] = 0;
	icc_l->z_end[1][0] = 0;
	icc_l->z_end[1][1] = 1;
	icc_l->z_end[1][2] = 0;
	icc_l->z_end[1][3] = 0;
	icc_l->z_end[2][0] = 0;
	icc_l->z_end[2][1] = 0;
	icc_l->z_end[2][2] = 0;
	icc_l->z_end[2][3] = 0;
	icc_l->z_end[3][0] = 0;
	icc_l->z_end[3][1] = 0;
	icc_l->z_end[3][2] = 0;
	icc_l->z_end[3][3] = 0;
	icc_l->z_end[4][0] = 0;
	icc_l->z_end[4][1] = 0;
	icc_l->z_end[4][2] = 0;
	icc_l->z_end[4][3] = 0;
	icc_l->z_end[5][0] = 0;
	icc_l->z_end[5][1] = 1;
	icc_l->z_end[5][2] = 0;
	icc_l->z_end[5][3] = 0;
}
