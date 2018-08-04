/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 17:39:53 by azaporoz          #+#    #+#             */
/*   Updated: 2018/03/30 18:35:59 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (s == NULL)
		return (NULL);
	sub = (ft_strnew(len));
	if (sub == NULL)
		return (NULL);
	i = 0;
	s = s + start;
	while (i < len)
	{
		sub[i] = s[i];
		i++;
	}
	return (sub);
}
