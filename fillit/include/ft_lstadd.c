/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 20:32:29 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/02 21:37:59 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (new != NULL)
	{
		if (alst == NULL)
		{
			ft_lstnew(new->content, new->content_size);
			new->next = NULL;
		}
		else
		{
			new->next = *alst;
			*alst = new;
		}
	}
}
