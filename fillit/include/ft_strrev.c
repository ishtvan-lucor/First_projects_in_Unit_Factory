/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 17:40:37 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/04 18:06:37 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	char	*cp;
	char	c;

	cp = str + ft_strlen(str);
	while (str <= cp)
	{
		c = *str;
		*str++ = *cp;
		*cp-- = c;
	}
	return (cp);
}
