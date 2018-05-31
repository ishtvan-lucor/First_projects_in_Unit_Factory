/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikoloshy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 19:00:26 by ikoloshy          #+#    #+#             */
/*   Updated: 2018/05/30 20:24:20 by ikoloshy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 100

# include "libft/libft.h"

typedef struct	s_tail
{
	int			fd;
	char		tail[BUFF_SIZE];
}				t_tail;

int				get_next_line(const int fd, char **line);

#endif
