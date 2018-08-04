/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 15:48:34 by azaporoz          #+#    #+#             */
/*   Updated: 2018/03/29 19:01:37 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char			*d;
	const	char	*s;

	d = dst;
	s = src;
	if (s < d)
	{
		len--;
		while (len + 1)
		{
			d[len] = s[len];
			len--;
		}
	}
	else
	{
		while (len-- > 0)
			*d++ = *s++;
	}
	return (dst);
}
