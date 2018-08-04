/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikoloshy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 20:44:16 by ikoloshy          #+#    #+#             */
/*   Updated: 2018/03/21 21:38:36 by ikoloshy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*temp;
	int	len;
	int	index;

	index = 0;
	len = max - min;
	if (len <= 0)
		temp = NULL;
	else
	{
		temp = malloc(sizeof(*temp) * len);
		if (temp == NULL)
			return (temp);
		while (index < len)
		{
			temp[index] = min;
			index++;
			min++;
		}
	}
	return (temp);
}
