/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   others_stuff.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 15:07:11 by wolf              #+#    #+#             */
/*   Updated: 2023/10/19 22:56:57 by wolf             ###   ########.fr       */
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

int	do_we_stop(int (*array)[WIDTH])
{
	int	sum;
	int	i;
	int	j;

	i = -1;
	while (++i < WIDTH)
	{
		j = -1;
		sum = 0;
		while (++j < LENGTH)
		{
			if (array[j][i] == 0)
				sum++ ;
		}
		if (sum == LENGTH)
			return (i);
	}
	return (WIDTH);
}
