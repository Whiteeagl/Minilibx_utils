/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_stuff.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboldrin <tboldrin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:16:06 by wolf              #+#    #+#             */
/*   Updated: 2023/10/20 15:59:17 by tboldrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/button.h"

/* 
	Pour quitter le programme de manière "propre".

*/
void	handle_window_close(void)
{
	free_button_list();
	free_text_addr_list();
	free_mlx_infos();
	exit(EXIT_SUCCESS);
}
