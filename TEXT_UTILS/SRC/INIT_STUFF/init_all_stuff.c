/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_all_stuff.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:17:35 by tboldrin          #+#    #+#             */
/*   Updated: 2023/10/25 23:41:49 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../INCLUDES/text.h"

void	init_all_text_stuff(void)
{
	init_all_special_cara();
	init_all_min_letters();
	init_all_numbers();
	update_button_building_info(false);
	if (!get_scale())
		update_scale_value(DEFAULT_SCALE);
}
