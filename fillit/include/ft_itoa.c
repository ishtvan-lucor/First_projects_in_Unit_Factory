/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 13:51:18 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/02 16:37:53 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*max(char *str)
{
	str = ft_strnew(11);
	return (ft_strcpy(str, "-2147483648"));
}

static int	count(int n)
{
	int i;

	if (n == -2147483648)
		return (0);
	i = 0;
	if (n == 0)
		i++;
	else
	{
		if (n < 0)
		{
			i++;
			n *= -1;
		}
		while (n > 0)
		{
			i++;
			n /= 10;
		}
	}
	return (i);
}

char		*ft_itoa(int n)
{
	char	*pos;
	int		i;
	int		sig;

	sig = 0;
	pos = NULL;
	i = count(n);
	if (i == 0)
		return (max(pos));
	pos = ft_strnew(i);
	if (pos == NULL)
		return (NULL);
	if (n < 0)
	{
		sig = 1;
		n *= -1;
	}
	while (i-- > 0)
	{
		pos[i] = (n % 10) + '0';
		n /= 10;
	}
	if (sig)
		pos[0] = '-';
	return (pos);
}
