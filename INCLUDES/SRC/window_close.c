/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window_close.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 19:25:39 by wolf              #+#    #+#             */
/*   Updated: 2023/10/23 19:30:47 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../basique_mlx_needed.h"

void	handle_window_close(char *msg)
{
	write_msg(msg);
	free_text_addr_list();
	free_mlx_infos();
	free_garbage();
	exit(EXIT_FAILURE);
}

void	handle_window_close_err_alloc(char *function)
{
	write_func_msg(function, WINDOW_CLOSE_ERR_ALLOC);
	free_text_addr_list();
	free_mlx_infos();
	free_garbage();
	exit(EXIT_FAILURE);
}
