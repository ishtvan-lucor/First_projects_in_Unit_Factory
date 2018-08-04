/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_last_terminos.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikoloshy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 16:55:48 by ikoloshy          #+#    #+#             */
/*   Updated: 2018/04/26 19:32:54 by ikoloshy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void		check_else_in_last(size_t i, char *str)
{
	if (i % 5 == 4)
	{
		if (str[i] != '\n')
			ft_raise_err(1);
	}
	else if (str[i] != '.')
		ft_raise_err(1);
}

static size_t	ft_hashtag_last(t_pos *src, char *str, int i, int index)
{
	size_t	count;

	count = 0;
	if (i > 4 && str[i - 5] == '#')
		count++;
	if ((i % 5) != 4 && str[i + 1] == '#')
		count++;
	if (i < 15 && str[i + 5] == '#')
		count++;
	if ((i % 5) != 0 && str[i - 1] == '#')
		count++;
	src->x[index] = i % 5;
	src->y[index] = i / 5;
	return (count);
}

void			ft_valid_catch_last(t_pos *src, char *str)
{
	size_t	i;
	size_t	j;
	size_t	cnct;

	i = 0;
	j = 0;
	cnct = 0;
	while (i < (TETRA_SIZE - 1))
	{
		if (str[i] == '#')
			if (j < 4)
				cnct += ft_hashtag_last(src, str, i, j++);
			else
				j++;
		else
			check_else_in_last(i, str);
		i++;
	}
	if (j > 4)
		ft_raise_err(1);
	if (cnct == 6 || cnct == 8)
		return ;
	else
		ft_raise_err(1);
}

void			ft_last_terminos(t_pos **begin, char *temp)
{
	t_pos	*list;

	list = *begin;
	if (!list)
	{
		(*begin) = ft_lstnew_pos();
		ft_valid_catch_last(*begin, temp);
	}
	else
	{
		while (list->next != NULL)
			list = list->next;
		list->next = ft_lstnew_pos();
		ft_valid_catch_last(list->next, temp);
	}
}
