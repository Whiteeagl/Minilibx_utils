/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   others_stuff.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 15:07:11 by wolf              #+#    #+#             */
/*   Updated: 2023/10/15 16:34:10 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/text.h"

void	write_func_msg(char *func_name, char *msg)
{
	write_msg(func_name);
	write_msg("() : ");
	write_msg(msg);
}

void	write_msg(char *string)
{
	int	len_of_string;

	len_of_string = ft_len_text(string);
	write(1, string, len_of_string);
}