/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 14:32:44 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/03 16:49:51 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n > 0)
	{
		while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0' && n > 0)
		{
			s1++;
			s2++;
			n--;
		}
		if (n == 0)
			return (0);
		else
			return ((unsigned char)*s1 - (unsigned char)*s2);
	}
	return (0);
}
