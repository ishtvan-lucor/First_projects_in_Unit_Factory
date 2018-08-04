/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 21:02:02 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/03 18:23:24 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *first;
	t_list *elm;

	first = NULL;
	elm = NULL;
	if (lst != NULL && f != NULL)
	{
		first = ft_lstnew(lst->content, lst->content_size);
		if (first == NULL)
			return (NULL);
		first = f(first);
		elm = first;
		lst = lst->next;
		while (lst != NULL)
		{
			elm->next = ft_lstnew(lst->content, lst->content_size);
			if (elm->next == NULL)
				return (NULL);
			elm->next = f(elm->next);
			lst = lst->next;
			elm = elm->next;
		}
		return (first);
	}
	return (NULL);
}
