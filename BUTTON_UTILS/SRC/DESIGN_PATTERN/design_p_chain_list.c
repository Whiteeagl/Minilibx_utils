/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   design_p_chain_list.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:17:06 by wolf              #+#    #+#             */
/*   Updated: 2023/10/24 18:27:07 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../INCLUDES/button.h"

t_button	*button_list_instance(void)
{
	static t_button	instance;

	return (&instance);
}

void	init_all_button_stuff(void)
{
	chain_list_button_init();
	init_all_text_stuff();
}
