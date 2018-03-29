/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikoloshy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 20:40:26 by ikoloshy          #+#    #+#             */
/*   Updated: 2018/03/29 19:49:40 by ikoloshy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	char	*s;
	size_t		i;

	i = 0;
	if (argc == 3)
	{
		/* ft_putchar(char c)*/
		if (strcmp(argv[1], "ft_putchar") == 0)
		{
			ft_putstr("my ft_putchar by my put str: ");
			ft_putchar(argv[2][0]);
			ft_putchar('\n');
		}
		/* ft_putstr(char const *s)*/
		else if (strcmp(argv[1], "ft_putstr") == 0)
		{
			ft_putstr("My ft_putstr show this string: ");
			ft_putstr(argv[2]);
			ft_putchar('\n');
		}
		/*ft_memalloc(size_t size)*/
		else if (strcmp(argv[1], "ft_memalloc") == 0)
		{
			s = ft_memalloc((size_t)atoi(argv[2]));
			if (s != NULL)
			{
				while (i < ((size_t)atoi(argv[2]) - 1))
					s[i++] = 'A';
				s[i] = '\0';
			}
			printf("memalloc: %s\n", s);
		}
		/*ft_memdel(void **ap)*/
		else if (strcmp(argv[1], "ft_memdel") == 0)
		{
			ft_memdel((void**)argv);
			printf("Out after memdel: A%sB if nothing between A and B, it works!\n", *argv);
		}
		/*ft_strdel(char **as)*/
		else if (strcmp(argv[1], "ft_strdel") == 0)
		{
			ft_strdel(argv);
			printf("the output must be between A and B: A%sB\n", *argv);
		}
		/*ft_strnew(size_t size)*/
		else if (strcmp(argv[1], "ft_strnew") == 0)
		{
			s = ft_strnew((size_t)atoi(argv[2]));
			if (s != NULL)
			{
				while (i < ((size_t)atoi(argv[2])))
					s[i++] = 'A';
				s[i] = '\0';
			}
			printf("strnew: %s\n", s);
		}
		/*ft_strclr(char *s)*/
		else if (strcmp(argv[1], "ft_strclr") == 0)
		{
			ft_strclr(argv[2]);
			printf("The needed string here: %s\n", argv[2]);
		}
	}
	else if (argc == 4)
	{
		/* ft_bzero(void *s, size_t n);*/
		if (strcmp(argv[1], "ft_bzero") == 0)
		{
			bzero(argv[2], (size_t)atoi(argv[3]));
			printf("orgin bzero: %s\n", argv[2]);
			ft_bzero(argv[2], (size_t)atoi(argv[3]));
			printf("my ft_bzero: %s", argv[2]);
		}
		/*ft_strequ(char const *s1, char const *s2)*/
		if (strcmp(argv[1], "ft_strequ") == 0)
			printf("result: %d\n", ft_strequ(argv[2], argv[3]));
	}
	else if (argc == 5)
	{
		/*ft_strnequ(char const *s1, char const *s2, size_t n)*/
		if (strcmp(argv[1], "ft_strnequ") == 0)
			printf("Result: %d\n", ft_strnequ(argv[2], argv[3], (size_t)atoi(argv[4])));
	}
	return (0);
}
