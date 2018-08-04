/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_filler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 19:31:56 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/21 19:31:58 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_res	*ft_map_filler(t_res *link, int i, int pos)
{
	int		k;
	int		cp;

	k = 0;
	cp = pos;
	while (k < i)
	{
		if (k == pos)
		{
			link->map[k] = '\n';
			pos += cp + 1;
		}
		else
			link->map[k] = '.';
		k++;
	}
	link->map[k] = '\0';
	return (link);
}
