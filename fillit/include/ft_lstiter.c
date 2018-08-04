/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 20:50:05 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/02 21:09:39 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list *cp;

	if (lst != NULL && f != NULL)
	{
		cp = lst;
		while (cp != NULL)
		{
			f(cp);
			cp = cp->next;
		}
	}
}
