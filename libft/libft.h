/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikoloshy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/24 17:27:31 by ikoloshy          #+#    #+#             */
/*   Updated: 2018/03/30 22:51:41 by ikoloshy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

void	ft_bzero(void *s, size_t n);

void	ft_memdel(void **ap);
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_strclr(char *s);
void	ft_strdel(char **as);
void	*ft_memalloc(size_t size);
void	*ft_memcpy(void *dst, void const *src, size_t n);
void	*ft_memccpy(void *dst, void const *src, int c, size_t n);
void	*ft_memset(void *b, int c, size_t len);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strnew(size_t size);
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
size_t	ft_strlen(const char *s);

#endif
