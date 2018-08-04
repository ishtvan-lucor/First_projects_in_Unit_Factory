/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_pos.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 15:37:29 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/21 15:37:44 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_pos	*ft_lstnew_pos(void)
{
	t_pos *link;

	link = (t_pos*)malloc(sizeof(t_pos));
	if (link == NULL)
		return (NULL);
	link->next = NULL;
	return (link);
}
