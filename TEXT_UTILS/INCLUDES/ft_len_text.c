/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_text.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 14:57:35 by wolf              #+#    #+#             */
/*   Updated: 2023/10/25 22:46:39 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "text.h"

size_t	ft_len_text(char *string)
{
	size_t	idx;

	idx = 0;
	if (!string)
		return (idx);
	while (string[idx])
		idx++ ;
	return (idx);
}

size_t	ft_len_const_text(const char *string)
{
	size_t	idx;

	idx = 0;
	if (!string)
		return (idx);
	while (string[idx])
		idx++ ;
	return (idx);
}
