/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:06:53 by wolf              #+#    #+#             */
/*   Updated: 2023/10/15 23:02:38 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "INCLUDES/text.h"
#include <stdio.h>

void	tests_here(void)
{
	void	*test;

	test = build_string("this is a button", 4, 0xFFFFFF);
	display_string(test, 40, 100);
}

int	main(void)
{
	t_min_letters	min_letters;
	void			*mlx_ptr;
	void			*mlx_win;

	mlx_ptr = mlx_init();
	mlx_win = mlx_new_window(mlx_ptr, 800, 600, "Custom Text");
	update_mlx_infos(mlx_ptr, mlx_win);
	init_all_min_letters(&min_letters);
	mlx_loop(mlx_ptr);
	return (0);
}
