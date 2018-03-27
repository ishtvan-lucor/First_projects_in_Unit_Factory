/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikoloshy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 20:40:26 by ikoloshy          #+#    #+#             */
/*   Updated: 2018/03/27 15:46:41 by ikoloshy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "includes/head.h"

int	main(int argc, char **argv)
{
	int	i = 0;
	// bzero(void *s, size_t n);
	if (argc == 4 && strcmp(argv[1], "ft_bzero") == 0)
	{
		bzero(argv[2], 3);
		while (i < 3)
		{
			printf("origin function: %c", argv[2][i]);
			i++;
		}
		ft_bzero(argv[2], 3);
		printf("my function: %s", argv[2]);
	}

	// ft_strclr(char *s);
	else if (argc == 3 && !strcmp(argv[1], "ft_strclr"))
	{
		ft_strclr(argv[2]);
		printf("result: %s\n", argv[2]);
	}
	return (0);
}
