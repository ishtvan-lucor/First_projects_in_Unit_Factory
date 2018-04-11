/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikoloshy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 14:56:46 by ikoloshy          #+#    #+#             */
/*   Updated: 2018/04/11 21:25:35 by ikoloshy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**str;
	size_t	words;
	size_t	sindex;
	size_t	index;

	sindex = 0;
	index = 0;
	if (!s)
		return (NULL);
	words = ft_wordssplit(s, c);
	if ((str = (char**)malloc(sizeof(**str) * (words + 1))) == NULL)
		return (str);
	while (index < words)
	{
		while (s[sindex] == c)
			sindex++;
		str[index] = ft_strsub(s, (unsigned int)sindex, ft_strclen(s, sindex, c));
		if (str[index] == NULL)
			return (NULL);
		sindex = sindex + ft_strclen(s, sindex, c);
		index++;
	}
	return (str);
}
