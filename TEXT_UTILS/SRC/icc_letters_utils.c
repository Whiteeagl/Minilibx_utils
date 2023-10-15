/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   icc_letters_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 22:37:29 by wolf              #+#    #+#             */
/*   Updated: 2023/10/15 22:55:40 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/text.h"

int	icc_letters(char c)
{
	if (c == 'm' || c == 'w'
		|| c == 'v' || c == 'x'
		|| c == 'y' || c == 'z')
		return (1);
	return (0);
}

int	spaces_letters(char c)
{
	if (c == 'l' || c == 'i'
		|| c == 'p' || c == 't'
		|| c == 'c')
		return (1);
	return (0);
}

int	count_icc_letters(char *str)
{
	int	idx;
	int	sum;

	idx = 0;
	if (!str)
		return (idx);
	sum = 0;
	while (str[idx])
	{
		sum += icc_letters(str[idx]);
		idx++ ;
	}
	return (sum);
}

int	particular_scale(char c)
{
	if (c == 'm' || c == 'v'
		|| c == 'x' || c == 'y'
		|| c == 'z')
		return (3);
	if (c == 'w')
		return (8);
	return (0);
}
