/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 17:29:15 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/26 19:50:42 by ikoloshy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	read_file(int fd, t_pos **src)
{
	int		count;
	char	temp[TETRA_SIZE];
	t_pos	*list;
	int		count_read;

	list = *src;
	count = 26;
	while (count-- > 0)
	{
		count_read = read(fd, temp, TETRA_SIZE);
		if (count_read == TETRA_SIZE)
			ft_list_push_back(&list, temp);
		else if (count_read == (TETRA_SIZE - 1))
		{
			ft_last_terminos(&list, temp);
			break ;
		}
		else
			ft_raise_err(1);
	}
	if (count == -1)
		ft_raise_err(1);
	*src = list;
}

int		main(int argc, char **argv)
{
	int		fd;
	t_pos	*src;
	t_pos	*cp;

	if (argc != 2)
		ft_raise_err(0);
	if ((fd = open(argv[1], O_RDONLY)) == -1)
		ft_raise_err(1);
	read_file(fd, &src);
	cp = src;
	while (cp != NULL)
	{
		ft_mover(cp, 0);
		ft_mover(cp, 1);
		cp = cp->next;
	}
	ft_solver(src);
	close(fd);
	while (src)
	{
		cp = src->next;
		free(src);
		src = cp;
	}
	return (0);
}
