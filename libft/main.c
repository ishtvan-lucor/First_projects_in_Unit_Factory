/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikoloshy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 20:40:26 by ikoloshy          #+#    #+#             */
/*   Updated: 2018/03/31 22:36:44 by ikoloshy         ###   ########.fr       */
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
		/*ft_strlen(const char *s)*/
		else if (strcmp(argv[1], "ft_strlen") == 0)
		{
			printf("original: %zu\n", strlen(argv[2]));
			printf("my funct: %zu\n", ft_strlen(argv[2]));
		}
	}
	else if (argc == 4)
	{
		/* ft_bzero(void *s, size_t n);*/
		if (strcmp(argv[1], "ft_bzero") == 0)
		{
			//bzero(argv[2], (size_t)atoi(argv[3]));
			//printf("orgin bzero: %s\n", argv[2]);
			ft_bzero(argv[2], (size_t)atoi(argv[3]));
			printf("my ft_bzero: %s", argv[2]);
		}
		/*ft_strequ(char const *s1, char const *s2)*/
		else if (strcmp(argv[1], "ft_strequ") == 0)
			printf("result: %d\n", ft_strequ(argv[2], argv[3]));
		/*ft_strcpy(char *dst, const char *src)*/
		else if (strcmp(argv[1], "ft_strcpy") == 0)
		{
			printf("original: %s\n", strcpy(argv[2], argv[3]));
			printf("my funct: %s\n", ft_strcpy(argv[2], argv[3]));
		}
		/*ft_strcat(char *s1, const char *s2)*/
		else if (strcmp(argv[1], "ft_strcat") == 0)
		{
		//	printf("original: %s\n", strcat(argv[2], argv[3]));
			printf("my fucnt: %s\n", ft_strcat(argv[2], argv[3]));
		}
		/*ft_strchr(const char *s, int c)*/
		else if (strcmp(argv[1], "ft_strchr") == 0)
		{
			printf("original: %s\n", strchr(argv[2], (int)atoi(argv[3])));
			printf("my funct: %s\n", ft_strchr(argv[2], (int)atoi(argv[3])));
		}
	}
	else if (argc == 5)
	{
		/*ft_strnequ(char const *s1, char const *s2, size_t n)*/
		if (strcmp(argv[1], "ft_strnequ") == 0)
			printf("Result: %d\n", ft_strnequ(argv[2], argv[3], (size_t)atoi(argv[4])));
		else if (strcmp(argv[1], "ft_memset") == 0)
		{
			printf("original:%s\n", memset(argv[2], (int)atoi(argv[3]), (size_t)atoi(argv[4])));
			printf("my func:%s\n", ft_memset(argv[2], (int)atoi(argv[3]), (size_t)atoi(argv[4])));
		}
		/*ft_memcpy(void *dst, const void *src, size_t n)*/
		else if (strcmp(argv[1], "ft_memcpy") == 0)
		{
			printf("original: %s\n", memcpy(argv[2], argv[3], (size_t)atoi(argv[4])));
			printf("my funct: %s\n", ft_memcpy(argv[2], argv[3], (size_t)atoi(argv[4])));
		}
		/*ft_memmove(void *dst, const void *src, size_t len)*/
		else if (strcmp(argv[1], "ft_memmove") == 0)
		{
			printf("original: %s\n", memmove(argv[2], argv[3], (size_t)atoi(argv[4])));
		//	printf("my funct: %s\n", ft_memmove(argv[2], argv[3], (size_t)atoi(argv[4])));
		}
		/*ft_strncpy(char *dst, const char *src, size_t len)*/
		else if (strcmp(argv[1], "ft_strncpy") == 0)
		{
			printf("original: %s\n", strncpy(argv[2], argv[3], (size_t)atoi(argv[4])));
			printf("my funct: %s\n", ft_strncpy(argv[2], argv[3], (size_t)atoi(argv[4])));
		}
		/*ft_strncat(char *s1, const char *s2, size_t n)*/
		else if (strcmp(argv[1], "ft_strncat") == 0)
		{
			printf("original: %s\n", strncat(argv[2], argv[3], (size_t)atoi(argv[4])));
			printf("my_funct: %s\n", ft_strncat(argv[2], argv[3], (size_t)atoi(argv[4])));
		}
	}
	else if (argc == 6)
	{
		/*ft_memccpy(void *dst, const void *src, int c, size_t n)*/
		if (strcmp(argv[1], "ft_memccpy") == 0)
		{
			printf("original output: %s\noriginal dst: %s\n", memccpy(argv[2], argv[3], atoi(argv[4]), (size_t)atoi(argv[5])), argv[2]);
			printf("my funct output: %s\nmy funct dst: %s\n", ft_memccpy(argv[2], argv[3], atoi(argv[4]), (size_t)atoi(argv[5])), argv[2]);
		}
	}
	return (0);
}
