/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors_msg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 22:15:15 by wolf              #+#    #+#             */
/*   Updated: 2023/10/15 22:15:32 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../INCLUDES/text.h"

void	err_charactere_not_recoginzed(char c)
{
	write_msg("Character : ");
	if (c == 32)
		write_msg("(space)");
	else
		write(1, &c, 1);
	write_msg(" not supported here.\n");
}
