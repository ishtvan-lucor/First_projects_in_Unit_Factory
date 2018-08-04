/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 14:20:12 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/02 15:11:39 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char		*pos(const char *s, char c, int sig)
{
	if (sig)
		while (*s != '\0' && *s == c)
			s++;
	else
		while (*s != '\0' && *s != c)
			s++;
	return (s);
}

static int				count(const char *s, char c)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		s = pos(s, c, 1);
		if (*s != '\0')
		{
			i++;
			s = pos(s, c, 0);
		}
	}
	return (i);
}

static char				**delel(char **res, int i)
{
	int len;

	len = 0;
	while (len < i)
	{
		free(res[len]);
		res[len++] = NULL;
	}
	free(res);
	return (NULL);
}

char					**ft_strsplit(char const *s, char c)
{
	char		**res;
	const char	*cp;
	int			i;

	if (s == NULL)
		return (NULL);
	res = (char**)malloc(sizeof(char*) * count(s, c) + 1);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		s = pos(s, c, 1);
		if (*s != '\0')
		{
			cp = pos(s, c, 0);
			res[i] = ft_strsub(s, 0, cp - s);
			if (res[i] == NULL)
				return (delel(res, i));
			i++;
			s = cp;
		}
	}
	res[i] = 0;
	return (res);
}
