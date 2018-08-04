/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikoloshy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 16:34:19 by ikoloshy          #+#    #+#             */
/*   Updated: 2018/03/21 20:07:18 by ikoloshy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort(int max, char **array)
{
	char	*temp;
	int		iter;

	max--;
	while (max > 1)
	{
		iter = 1;
		while (iter < max)
		{
			if (ft_strcmp(array[iter], array[iter + 1]) > 0)
			{
				temp = array[iter];
				array[iter] = array[iter + 1];
				array[iter + 1] = temp;
			}
			iter++;
		}
		max--;
	}
}

void	ft_print_params(int count, char **array)
{
	int	index;
	int	iter;

	index = 1;
	while (index < count)
	{
		iter = 0;
		while (array[index][iter] != '\0')
			ft_putchar(array[index][iter++]);
		ft_putchar('\n');
		index++;
	}
}

int		main(int argc, char **argv)
{
	ft_sort(argc, argv);
	ft_print_params(argc, argv);
	return (0);
}
