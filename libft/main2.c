/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikoloshy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/15 14:17:40 by ikoloshy          #+#    #+#             */
/*   Updated: 2018/04/16 17:56:00 by ikoloshy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list *create(void *content, size_t content_size)
{
	t_list *new;
	size_t n;

	n = 0;
	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = ft_strdup((char*)content);
	new->content_size = content_size;
	new->next = NULL;
	return (new);
}

t_list *push_to_front(t_list *cur, t_list *new)
{
	new->next = cur;
	return (new);
}

void	print(t_list **head)
{
	t_list *cur;

	cur = *head;
	while (cur)
	{
		printf("%s\n", cur->content);
		cur = cur->next;
	}
}

t_list	*func(t_list *elem)
{
	elem->content = "el";
	return (elem);
}

/*
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t len;
	size_t index;

	index = 0;
	len = ft_strlen(dst);
	if (dstsize == 0 || dstsize < len)
		return (ft_strlen(src) + dstsize);
	while (src[index] != '\0' && index < (dstsize - len))
	{
		dst[len + index] = src[index];
		index++;
	}
	if (index == (dstsize - len))
	{
		dst[len + index - 1] = '\0';
		return (len + ft_strlen(src));
	}
	dst[len + index] = '\0';
	return (len + index);
}*/
int		main(void)
{
	t_list *list;
	t_list *list1;
	t_list *list2;

	list = create("asdasd", 6);
	list1 = create("hello", 5);
	list1 = push_to_front(list1, list);
	list2 = ft_lstmap(list1, &func);
	print(&list2);
	return (0);
}
