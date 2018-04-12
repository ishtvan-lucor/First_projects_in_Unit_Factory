/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordssplit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikoloshy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 15:10:25 by ikoloshy          #+#    #+#             */
/*   Updated: 2018/04/09 16:15:57 by ikoloshy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wordssplit(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			while (*s != c && *s != '\0')
				s++;
			count++;
		} else 
			s++;
	}
	return (count);
}
