/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 14:40:23 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/23 20:21:22 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_printmap(t_res *map, t_pos *pos, int size)
{
	int		i;
	int		j;
	char	c;

	size++;
	c = 'A';
	while (pos)
	{
		j = 0;
		i = 0;
		while (map->map[i] != '\0')
		{
			if ((i % size == pos->x[j]) &&
				(i / size == pos->y[j]) && map->map[i] != '\n')
			{
				map->map[i] = c;
				j++;
			}
			i++;
		}
		c++;
		pos = pos->next;
	}
	ft_putstr(map->map);
}

int		is_map(t_pos *cp, int size)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (cp->x[i] >= size || cp->y[i] >= size)
			return (0);
		i++;
	}
	return (1);
}

int		ft_rec(t_pos *beg, t_pos *pos, int size, int to)
{
	if (pos == NULL)
		return (1);
	while (is_map(pos, size) &&
			(!ft_check_int(beg, to) || !ft_rec(beg, pos->next, size, to + 1)))
	{
		ft_x_right(pos);
		if (is_map(pos, size) == 0)
		{
			ft_mover(pos, 0);
			ft_y_down(pos);
			if (is_map(pos, size) == 0)
			{
				ft_mover(pos, 1);
				ft_mover(pos, 0);
				return (0);
			}
		}
	}
	if (ft_check_all(&beg) == 1 && is_map(pos, size))
		return (1);
	return (0);
}

void	ft_solver(t_pos *cp)
{
	t_res	*map;
	int		size;
	int		map_c;
	int		ad;
	int		bul;

	map = NULL;
	size = 2;
	map_c = 6;
	ad = 6;
	bul = 0;
	while (bul == 0)
	{
		map = ft_create_map(&map, map_c, size);
		bul = ft_rec(cp, cp, size, 1);
		if (bul == 0)
		{
			map_c += ad;
			ad += 2;
			size++;
		}
	}
	ft_printmap(map, cp, size);
	free(map);
}
