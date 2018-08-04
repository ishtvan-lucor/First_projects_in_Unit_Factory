/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 14:27:57 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/26 19:50:55 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# define TETRA_SIZE 21
# include <fcntl.h>
# include "include/libft.h"

typedef struct		s_pos
{
	int				x[4];
	int				y[4];
	struct s_pos	*next;
}					t_pos;

typedef struct		s_res
{
	char			*map;
}					t_res;

int					ft_x_left(t_pos *pos, int size);
void				ft_x_right(t_pos *pos);
void				ft_y_down(t_pos *pos);
int					ft_y_up(t_pos *pos, int size);
int					ft_check_all(t_pos **first);
void				ft_list_push_back(t_pos **begin_list, char *temp);
t_pos				*ft_lstnew_pos(void);
t_res				*ft_create_map(t_res **map, int i, int pos);
t_res				*ft_map_filler(t_res *link, int i, int pos);
int					ft_check_int(t_pos *beg, int to);
void				ft_solver(t_pos *cp);
void				ft_mover(t_pos *cp, int bul);
void				ft_raise_err(int i);
void				ft_valid_catch(t_pos *src, char *str);
void				ft_last_terminos(t_pos **begin, char *temp);
#endif
