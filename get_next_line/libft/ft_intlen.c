/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikoloshy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 17:28:08 by ikoloshy          #+#    #+#             */
/*   Updated: 2018/04/12 17:50:31 by ikoloshy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_intlen(int n)
{
	size_t	len;

	len = 1;
	if (n > 0)
	{
		len--;
		n *= -1;
	}
	while (n < 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}
