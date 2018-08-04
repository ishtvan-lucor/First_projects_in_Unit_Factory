/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikoloshy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 20:11:08 by ikoloshy          #+#    #+#             */
/*   Updated: 2018/03/21 20:42:09 by ikoloshy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*copy;
	int		len;
	int		index;

	index = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	copy = malloc(sizeof(*copy) * (len + 1));
	if (copy == NULL)
		return (NULL);
	while (index < len)
	{
		copy[index] = src[index];
		index++;
	}
	copy[len] = '\0';
	return (copy);
}
