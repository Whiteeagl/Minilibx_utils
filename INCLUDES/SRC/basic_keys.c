/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_keys.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 23:12:47 by wolf              #+#    #+#             */
/*   Updated: 2023/10/21 23:13:18 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../basique_mlx_needed.h"

int	handle_keypress(int keycode)
{
	if (keycode == ESC)
		handle_window_close("Window closed by ESC key");
	return (0);
}
