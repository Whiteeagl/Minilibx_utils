/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   design_p_mlx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:16:59 by wolf              #+#    #+#             */
/*   Updated: 2023/10/15 16:38:35 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../basique_mlx_needed.h"

t_mlx_stuff	*mlx_instance(void)
{
	static t_mlx_stuff	instance;

	return (&instance);
}

void	update_mlx_infos(void *mlx_ptr, void *win_ptr)
{
	t_mlx_stuff	*mlx_infos;

	mlx_infos = mlx_instance();
	mlx_infos->mlx_ptr = mlx_ptr;
	mlx_infos->win_ptr = win_ptr;
}

void	*get_mlx_ptr(void)
{
	t_mlx_stuff	*mlx_infos;

	mlx_infos = mlx_instance();
	return (mlx_infos->mlx_ptr);
}

void	*get_win_ptr(void)
{
	t_mlx_stuff	*mlx_infos;

	mlx_infos = mlx_instance();
	return (mlx_infos->win_ptr);
}

void	free_mlx_infos(void)
{
	t_mlx_stuff	*mlx_infos;

	mlx_infos = mlx_instance();
	mlx_destroy_window(mlx_infos->mlx_ptr, mlx_infos->win_ptr);
	mlx_destroy_display(mlx_infos->mlx_ptr);
	free(mlx_infos->mlx_ptr);
}