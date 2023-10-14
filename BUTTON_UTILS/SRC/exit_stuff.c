/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_stuff.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:16:06 by wolf              #+#    #+#             */
/*   Updated: 2023/10/14 11:55:40 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/button.h"

/* 
	Pour quitter le programme de manière "propre".

*/
void	handle_window_close(void)
{
	free_button_list();
	mlx_destroy_window(get_mlx_ptr(), get_win_ptr());
	mlx_destroy_display(get_mlx_ptr());
	free(get_mlx_ptr());
	exit(EXIT_SUCCESS);
}
