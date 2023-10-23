/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   design_p_button_event_lst.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wolf <wolf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 21:22:57 by wolf              #+#    #+#             */
/*   Updated: 2023/10/22 12:27:38 by wolf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../INCLUDES/button.h"

t_event_button	*button_event_list_instance(void)
{
	static t_event_button	instance;

	return (&instance);
}

t_event_function	get_button_event(int button_id)
{
	t_event_button		*data;
	t_event_button_lst	*current;
	int					idx;

	data = button_event_list_instance();
	current = data->head;
	if (button_id > data->len_of_lst)
		return (write_func_msg("get_button_event", ERR_ID_BUTTON_GREATER),
			NULL);
	idx = -1;
	while (current != NULL && ++idx < button_id)
		current = current->next;
	if (current != NULL)
		return (current->event_func);
	return (NULL);
}
