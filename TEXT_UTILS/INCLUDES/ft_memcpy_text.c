/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_text.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:01:40 by tboldrin          #+#    #+#             */
/*   Updated: 2023/10/14 16:16:56 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "text.h"

void	*ft_memcpy_text(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*srccpy;

	i = 0;
	srccpy = (char *)src;
	while (i < n)
	{
		((char *)dest)[i] = srccpy[i];
		i++ ;
	}
	return (dest);
}
