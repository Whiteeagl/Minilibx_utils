/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window_close.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 19:25:39 by wolf              #+#    #+#             */
/*   Updated: 2023/10/24 20:15:46 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../basique_mlx_needed.h"

void	handle_window_close(char *msg)
{
	write_msg(msg);
	free_all_text_stuff();
	free_mlx_infos();
	free_garbage();
	exit(EXIT_FAILURE);
}

void	handle_window_close_err_alloc(char *function_name)
{
	write_func_msg(function_name, WINDOW_CLOSE_ERR_ALLOC);
	free_all_text_stuff();
	free_mlx_infos();
	free_garbage();
	exit(EXIT_FAILURE);
}
