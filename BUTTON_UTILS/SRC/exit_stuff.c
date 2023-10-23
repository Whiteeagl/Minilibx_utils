/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_stuff.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:16:06 by wolf              #+#    #+#             */
/*   Updated: 2023/10/23 23:32:18 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/button.h"

/* 
	Pour quitter le programme de manière "propre".

*/
void	handle_window_close(char *msg)
{
	write_msg(msg);
	write_msg("\n");
	free_button_list();
	free_text_addr_list();
	free_mlx_infos();
	free_garbage();
	exit(EXIT_SUCCESS);
}

void	handle_window_close_err_alloc(char *function)
{
	write_func_msg(function, ERR_ALLOCATION);
	write_msg(WINDOW_CLOSE_ERR_ALLOC);
	free_button_list();
	free_text_addr_list();
	free_mlx_infos();
	free_garbage();
	exit(EXIT_SUCCESS);
}
