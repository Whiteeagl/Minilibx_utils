/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   design_p_darkening_factor.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 01:36:46 by wolf              #+#    #+#             */
/*   Updated: 2023/10/25 22:58:23 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../INCLUDES/button.h"

t_darkening_factor	*get_d_factor_instance(void)
{
	static t_darkening_factor	instance;

	return (&instance);
}

void	update_d_factor(double factor)
{
	t_darkening_factor	*f;

	f = get_d_factor_instance();
	f->dark_factor = factor;
}

double	get_d_factor(void)
{
	t_darkening_factor	*f;

	f = get_d_factor_instance();
	return (f->dark_factor);
}
