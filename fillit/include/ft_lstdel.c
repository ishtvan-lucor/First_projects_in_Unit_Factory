/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 19:46:55 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/03 14:01:34 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list *cp;
	t_list *lst;

	if (alst != NULL && del != NULL)
	{
		lst = *alst;
		while (lst != NULL)
		{
			cp = lst->next;
			ft_lstdelone(&lst, del);
			lst = cp;
		}
		*alst = NULL;
	}
}
