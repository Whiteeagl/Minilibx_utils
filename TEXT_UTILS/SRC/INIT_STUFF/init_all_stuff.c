/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_all_stuff.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:17:35 by tboldrin          #+#    #+#             */
/*   Updated: 2023/10/23 23:17:39 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../INCLUDES/text.h"

void	init_all_text_stuff(void)
{
	init_all_special_cara();
	init_all_min_letters();
	init_all_numbers();
	update_scale_value(DEFAULT_SCALE);
}
