/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikoloshy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 17:14:52 by ikoloshy          #+#    #+#             */
/*   Updated: 2018/05/30 19:52:03 by ikoloshy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "get_next_line.h"
#include <fcntl.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int	fd;
	char	*line;
	int gnl;
	
	if (argc != 2)
		return (0);
	fd = open(argv[1], O_RDONLY);
	while((gnl = get_next_line(fd, &line)) == 1)
	{
		printf("fd = %d, gnl return = %d, line = %s\n", fd, gnl, line);
		free(line);
	}
		/*gnl = get_next_line(fd, &line);
		printf("fd = %d, gnl return = %d, line = %s\n", fd, gnl, line);
		free(line);
		gnl = get_next_line(fd, &line);
		printf("fd = %d, gnl return = %d, line = %s\n", fd, gnl, line);
		free(line);
*/

	if (close(fd) == -1)
		printf("failclose\n");
	else
		printf("all good\n");

	system("leaks -quiet gnl");
	return (0);
}
