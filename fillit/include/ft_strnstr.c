/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 13:33:31 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/05 14:19:21 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	cp;
	int		found;

	i = -1;
	found = 1;
	if (ft_strlen(needle) == 0)
		return ((char*)haystack);
	while (*(haystack + ++i) && i < len)
	{
		j = 0;
		if (*(haystack + i) == *needle)
		{
			cp = i;
			found = 1;
			while (*(haystack + cp) && *(needle + j) && j < len && cp < len)
				if (*(haystack + cp++) != *(needle + j++))
					found = 0;
			if (found && *(needle + j) == '\0')
				return ((char*)haystack + i);
		}
	}
	return (NULL);
}
