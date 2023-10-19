/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_special_cara.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 23:00:43 by wolf              #+#    #+#             */
/*   Updated: 2023/10/19 23:23:52 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../INCLUDES/text.h"


void	init_special_cara(t_special_cara *special_cara)
{
	create_spc_space(special_cara);
}


void	init_all_special_cara(void)
{
	t_special_cara	*special_cara;

	special_cara = get_special_cara_instance();

	init_special_cara(special_cara);
}
