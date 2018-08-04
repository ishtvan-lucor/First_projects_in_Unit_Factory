/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 12:23:31 by azaporoz          #+#    #+#             */
/*   Updated: 2018/03/27 12:44:41 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *cs;

	cs = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			cs = ((char*)s);
		s++;
	}
	if (*s == (char)c)
		return ((char*)s);
	else
		return (cs);
}
