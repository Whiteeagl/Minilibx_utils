/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_stuff.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:16:06 by wolf              #+#    #+#             */
/*   Updated: 2023/10/21 23:08:46 by wolf             ###   ########.fr       */
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
	exit(EXIT_SUCCESS);
}
