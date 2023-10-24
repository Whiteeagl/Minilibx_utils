/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   design_p_garbage_malloc.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 11:54:53 by wolf              #+#    #+#             */
/*   Updated: 2023/10/24 23:30:36 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../basique_mlx_needed.h"

t_garbage	*get_garbage_instance(void)
{
	static t_garbage	instance;

	return (&instance);
}
