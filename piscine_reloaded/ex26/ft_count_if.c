/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikoloshy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 16:09:52 by ikoloshy          #+#    #+#             */
/*   Updated: 2018/03/22 16:29:00 by ikoloshy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	index;
	int	counter;

	index = 0;
	counter = 0;
	while (tab[index])
	{
		if ((*f)(tab[index]) == 1)
			counter++;
		index++;
	}
	return (counter);
}
