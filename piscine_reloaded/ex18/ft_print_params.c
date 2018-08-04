/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikoloshy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 22:19:47 by ikoloshy          #+#    #+#             */
/*   Updated: 2018/03/20 22:26:31 by ikoloshy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int	index;
	int	iter;

	index = 1;
	while (index < argc)
	{
		iter = 0;
		while (argv[index][iter] != '\0')
			ft_putchar(argv[index][iter++]);
		ft_putchar('\n');
		index++;
	}
	return (0);
}
