/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 11:22:51 by azaporoz          #+#    #+#             */
/*   Updated: 2018/03/23 13:05:41 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *cs;

	cs = (unsigned char*)s;
	while (n > 0 && *cs != (unsigned char)c)
	{
		cs++;
		n--;
	}
	if (n == 0)
		return (NULL);
	else
		return (cs);
}
