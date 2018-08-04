/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 15:48:26 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/21 15:49:06 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_res	*ft_create_map(t_res **map, int i, int size)
{
	t_res *link;

	link = NULL;
	link = (t_res*)malloc(sizeof(t_res));
	if (map != NULL)
		map = NULL;
	link->map = (char*)malloc((sizeof(char) * i) + 1);
	link = ft_map_filler(link, i, size);
	return (link);
}
