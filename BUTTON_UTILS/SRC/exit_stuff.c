/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_stuff.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:16:06 by wolf              #+#    #+#             */
/*   Updated: 2023/10/25 22:49:51 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/button.h"

/*
	[── FR ──]
	│
	│	Permet de quitter le programme de manière "propre".

	[── EN ──]
	│
	│	Allows exiting the program cleanly.

*/
void	handle_window_close(char *msg)
{
	write_msg(msg);
	write_msg("\n");
	free_all_button_stuff();
	free_all_text_stuff();
	free_mlx_infos();
	free_garbage();
	exit(EXIT_SUCCESS);
}

/*
	[── FR ──]
	│
	│	Même chose que [handle_window_close(...)] mais quand une
	│		erreur d'allocation mémoire s'est produite.

	[── EN ──]
	│
	│	Same as [handle_window_close(...)] but when a
	│		memory allocation error occurs.

*/
void	handle_window_close_err_alloc(const char *function_name)
{
	write_func_msg(function_name, ERR_ALLOCATION);
	write_msg(WINDOW_CLOSE_ERR_ALLOC);
	free_all_button_stuff();
	free_all_text_stuff();
	free_mlx_infos();
	free_garbage();
	exit(EXIT_SUCCESS);
}
