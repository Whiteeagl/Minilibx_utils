/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:15:51 by wolf              #+#    #+#             */
/*   Updated: 2023/10/21 22:17:54 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/button.h"

/*
	Ici on met le code à tester.
	Exemple :

			○ create_empty_button(x, y, width, height)
*/
void	mon_programme(void)
{
	void	*t;

	t = build_string("cx", 3, 0xFFFFFF, RECT_COLOR);
	create_empty_button(100, 100, 400, 400);
	display_string(t, 105, 110);
	return ;
}

// Main à retirer dans le cadre d'autres projets.
//
int	main(void)
{
	t_min_letters	min_letters;
	void			*mlx_ptr;
	void			*win_ptr;

	mlx_ptr = mlx_init();
	if (!mlx_ptr)
		return (1);
	win_ptr = mlx_new_window(mlx_ptr, 800, 600, "Image Minilibx");
	if (!win_ptr)
		return (free(mlx_ptr), 2);
	update_mlx_infos(mlx_ptr, win_ptr, NULL);
	init_all_min_letters(&min_letters);
	mon_programme();
	mlx_hook(win_ptr, 2, 1L << 0, &handle_keypress, NULL);
	mlx_loop(mlx_ptr);
	return (0);
}
