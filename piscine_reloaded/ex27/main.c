/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikoloshy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 17:33:38 by ikoloshy          #+#    #+#             */
/*   Updated: 2018/03/22 19:12:44 by ikoloshy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_display_file(av[1]);
	else if (ac == 1)
		ft_putstr("File name missing.\n");
	else
		ft_putstr("Too many arguments.\n");
	return (0);
}
