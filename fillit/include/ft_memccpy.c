/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 14:43:56 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/05 13:00:48 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*cp;
	size_t	i;

	cp = dst;
	i = -1;
	while (++i < n)
	{
		*(cp + i) = *((unsigned char*)src + i);
		if (*((unsigned char *)src + i) == (unsigned char)c)
			return (dst + 1 + i);
	}
	return (NULL);
}
