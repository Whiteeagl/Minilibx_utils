/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys_stuff.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:15:58 by wolf              #+#    #+#             */
/*   Updated: 2023/10/20 22:49:12 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/button.h"

/*
	Pour récupérer les différentes touches du clavier.

*/
int	handle_keypress(int keycode)
{
	if (keycode == ESC)
		handle_window_close();
	return (0);
}
