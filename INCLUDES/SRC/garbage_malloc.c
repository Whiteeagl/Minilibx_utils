/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   garbage_malloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 11:48:31 by wolf              #+#    #+#             */
/*   Updated: 2023/10/25 22:30:30 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../basique_mlx_needed.h"

void	*ft_malloc(size_t size)
{
	void	*ptr;

	ptr = malloc(size);
	if (!ptr)
		handle_window_close_err_alloc(A_FUNC);
	garbage_add(ptr);
	return (ptr);
}
