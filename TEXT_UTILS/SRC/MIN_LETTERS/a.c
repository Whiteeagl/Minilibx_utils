/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:01:23 by wolf              #+#    #+#             */
/*   Updated: 2023/10/15 01:07:57 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../INCLUDES/text.h"

void	create_a(t_min_letters *min_letters)
{
	min_letters->a[0][0] = 0;
	min_letters->a[0][1] = 0;
	min_letters->a[0][2] = 0;
	min_letters->a[0][3] = 0;
	min_letters->a[1][0] = 0;
	min_letters->a[1][1] = 1;
	min_letters->a[1][2] = 1;
	min_letters->a[1][3] = 0;
	min_letters->a[2][0] = 0;
	min_letters->a[2][1] = 0;
	min_letters->a[2][2] = 0;
	min_letters->a[2][3] = 1;
	min_letters->a[3][0] = 0;
	min_letters->a[3][1] = 1;
	min_letters->a[3][2] = 1;
	min_letters->a[3][3] = 1;
	min_letters->a[4][0] = 1;
	min_letters->a[4][1] = 0;
	min_letters->a[4][2] = 0;
	min_letters->a[4][3] = 1;
	min_letters->a[5][0] = 0;
	min_letters->a[5][1] = 1;
	min_letters->a[5][2] = 1;
	min_letters->a[5][3] = 1;
}
