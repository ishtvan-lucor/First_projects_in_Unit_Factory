/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikoloshy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 22:04:19 by ikoloshy          #+#    #+#             */
/*   Updated: 2018/04/03 20:28:50 by ikoloshy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t len;
	size_t index;

	index = 0;
	len = ft_strlen(dst);
	if (dstsize == 0 || dstsize < len)
		return (ft_strlen(src) + dstsize);
	while (src[index] != '\0' && index < (dstsize - len - 1))
	{
		dst[len + index] = src[index];
		index++;
	}
	if (index == (dstsize - len - 1))
		return (len + ft_strlen(src));
	dst[len + index] = '\0';
	return (len + index);
}
