/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:06:53 by wolf              #+#    #+#             */
/*   Updated: 2023/10/16 12:26:37 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "INCLUDES/text.h"
#include <stdio.h>

void	tests_here(void)
{
	void	*test;

	test = build_string("looks like plain text buddy", 2, 0x00FF00);
	display_string(test, 40, 100);
}

int	main(void)
{
	t_min_letters	min_letters;
	void			*mlx_ptr;
	void			*mlx_win;

	mlx_ptr = mlx_init();
	if (!mlx_ptr)
		return (1);
	mlx_win = mlx_new_window(mlx_ptr, 800, 600, "Custom Text");
	if (!mlx_win)
		return (free(mlx_ptr), 2);
	update_mlx_infos(mlx_ptr, mlx_win, NULL);
	init_all_min_letters(&min_letters);
	tests_here();
	mlx_loop(mlx_ptr);
	return (0);
}
