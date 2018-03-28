/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikoloshy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 19:00:52 by ikoloshy          #+#    #+#             */
/*   Updated: 2018/03/28 20:28:58 by ikoloshy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*temp;

	if ((temp = (char*)malloc(sizeof(*temp) * size)) == NULL)
		return (temp);
	ft_bzero(temp, size);
	return (temp);
}
