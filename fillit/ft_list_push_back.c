/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 16:12:11 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/26 17:46:08 by ikoloshy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_list_push_back(t_pos **begin_list, char *temp)
{
	t_pos *cursor;

	cursor = *begin_list;
	if (!cursor)
	{
		(*begin_list) = ft_lstnew_pos();
		ft_valid_catch(*begin_list, temp);
	}
	else
	{
		while (cursor->next != NULL)
			cursor = cursor->next;
		cursor->next = ft_lstnew_pos();
		ft_valid_catch(cursor->next, temp);
	}
}
