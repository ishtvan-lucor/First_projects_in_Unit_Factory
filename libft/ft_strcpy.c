/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikoloshy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 22:42:25 by ikoloshy          #+#    #+#             */
/*   Updated: 2018/03/30 23:06:15 by ikoloshy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	index;

	index = 0;
	while (dst[index] != '\0' && src[index] != '\0')
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = src[index];
	return (dst);
}
