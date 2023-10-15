/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   design_p_chain_list_text.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:56:06 by wolf              #+#    #+#             */
/*   Updated: 2023/10/15 16:57:49 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../INCLUDES/text.h"

t_text_addr	*get_text_list_instance(void)
{
	static t_text_addr	instance;

	return (&instance);
}
