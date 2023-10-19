/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_special_cara.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 23:08:35 by wolf              #+#    #+#             */
/*   Updated: 2023/10/19 23:20:06 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../INCLUDES/text.h"

int	(*is_it_a_special_cara(char c))[WIDTH]
{
	if (c == ' ')
		return (get_special_cara_instance()->space);
	return (NULL);
}