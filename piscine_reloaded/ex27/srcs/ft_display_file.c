/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikoloshy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 17:19:16 by ikoloshy          #+#    #+#             */
/*   Updated: 2018/03/22 19:31:28 by ikoloshy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

#define BUFFER 1

void	ft_display_file(char *file)
{
	int		fd;
	char	buff[BUFFER];

	fd = open(file, O_RDONLY);
	if (fd == -1)
		ft_putstr("open() error\n");
	while (read(fd, buff, BUFFER))
		write(1, buff, BUFFER);
	if (close(fd) == -1)
		ft_putstr("close() error\n");
}
