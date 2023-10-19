/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   design_p_special_cara.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 23:16:18 by wolf              #+#    #+#             */
/*   Updated: 2023/10/19 23:17:06 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../INCLUDES/text.h"

t_special_cara	*get_special_cara_instance(void)
{
	static t_special_cara	instance;
	
	return (&instance);
}
