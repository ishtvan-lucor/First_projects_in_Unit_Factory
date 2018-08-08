/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikoloshy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 20:40:26 by ikoloshy          #+#    #+#             */
/*   Updated: 2018/08/08 17:20:26 by ikoloshy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <ctype.h>

int	main(int argc, char **argv)
{
	char	*s;
	char	**str;
	size_t		i;
	t_list	*list;

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
			printf("original: %zu\n", ft_strlen(argv[2]));
			printf("my funct: %zu\n", ft_strlen(argv[2]));
		}
		/*ft_atoi(const char *str)*/
		else if (strcmp(argv[1], "ft_atoi") == 0)
		{
			printf("original: %d\n", atoi(argv[2]));
			printf("my func: %d\n", ft_atoi(argv[2]));
		}
		/*ft_isalpha(int c)*/
		else if (strcmp(argv[1], "ft_isalpha") == 0)
		{
			printf("original: %d\n", isalpha((int)(argv[2][0])));
			printf("my funct: %d\n", ft_isalpha((int)(argv[2][0])));
		}
		/*ft_isdigit(int c)*/
		else if (strcmp(argv[1], "ft_isdigit") == 0)
		{
			printf("original: %d\n", isdigit((int)argv[2][0]));
			printf("my funct: %d\n", ft_isdigit((int)argv[2][0]));
		}
		/*ft_isalnum(int c)*/
		else if (strcmp(argv[1], "ft_isalnum") == 0)
		{
			printf("original: %d\n", isalnum((int)argv[2][0]));
			printf("my_funct: %d\n", ft_isalnum((int)argv[2][0]));
		}
		/*ft_isascii(int c)*/
		else if (strcmp(argv[1], "ft_isascii") == 0)
		{
			printf("original: %d\n", isascii((int)argv[2][0]));
			printf("my funct: %d\n", ft_isascii((int)argv[2][0]));
		}
		/*ft_isprint(int c)*/
		else if (strcmp(argv[1], "ft_isprint") == 0)
		{
			printf("original: %d\n", isprint((int)argv[2][0]));
			printf("my funct: %d\n", ft_isprint((int)argv[2][0]));
		}
		/*ft_toupper(int c)*/
		else if (strcmp(argv[1], "ft_toupper") == 0)
		{
			printf("original: %d\n", toupper((int)argv[2][0]));
			printf("my funct: %d\n", ft_toupper((int)argv[2][0]));
		}
		/*ft_tolower(int c)*/
		else if (strcmp(argv[1], "ft_tolower") == 0)
		{	
			printf("original: %d\n", tolower((int)argv[2][0]));
			printf("my funct: %d\n", ft_tolower((int)argv[2][0]));
		}
		/*ft_strdup(const char *s1)*/
		else if (strcmp(argv[1], "ft_strdup") == 0)
		{
			printf("original: %s\n", strdup(argv[2]));
			printf("my funct: %s\n", ft_strdup(argv[2]));
		}
		/*ft_putendl(char const *s)*/
		else if (strcmp(argv[1], "ft_putendl") == 0)
			ft_putendl(argv[2]);
		/*ft_strtrim(char const *s)*/
		else if (strcmp(argv[1], "ft_strtrim") == 0)
			printf("My funct: %s\n", ft_strtrim(argv[2]));
		/*ft_intlen(int n)*/
		else if (strcmp(argv[1], "ft_intlen") == 0)
			printf("Len int: %zu\n", ft_intlen(atoi(argv[2])));
		/*ft_itoa(int n)*/
		else if (strcmp(argv[1], "ft_itoa") == 0)
			printf("str of int: %s\n", ft_itoa(atoi(argv[2])));
		/*ft_putnbr(int n)*/
		else if (strcmp(argv[1], "ft_putnbr") == 0)
			ft_putnbr(atoi(argv[2]));
		/*ft_striter(char *s, void (*f)(char *))*/
		else if (strcmp(argv[1], "ft_striter") == 0)
		{
			ft_striter(argv[2], &ft_strclr);
			printf("string must be cleaned: %s\n", argv[2]);
		}
	}
	else if (argc == 4)
	{
		/* ft_bzero(void *s, size_t n)*/
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
			printf("original: %s\n", strcat(argv[2], argv[3]));
			printf("my fucnt: %s\n", ft_strcat(argv[2], argv[3]));
		}
		/*ft_strchr(const char *s, int c)*/
		else if (strcmp(argv[1], "ft_strchr") == 0)
		{
			printf("original: %s\n", strchr(argv[2], (int)atoi(argv[3])));
			printf("my funct: %s\n", ft_strchr(argv[2], (int)atoi(argv[3])));
		}
		/*ft_strrchr(const char *s, int c)*/
		else if (strcmp(argv[1], "ft_strrchr") == 0)
		{
			
			printf("my funct: %s\n", ft_strrchr(argv[2], (int)atoi(argv[3])));
			printf("my funct: %s\n", ft_strrchr(argv[2], (int)atoi(argv[3])));
		}
		/*ft_strcmp(const char *s1, const char *s2)*/
		else if (strcmp(argv[1], "ft_strcmp") == 0)
		{	
			printf("original: %d\n", strcmp(argv[2], argv[3]));
			printf("my funct: %d\n", ft_strcmp(argv[2], argv[3]));
		}
		/*ft_strstr(const char *haystack, const char *needle)*/
		else if (strcmp(argv[1], "ft_strstr") == 0)
		{
			printf("original: %s\n", strstr(argv[2], argv[3]));
			printf("my funct: %s\n", ft_strstr(argv[2], argv[3]));
		//	printf("original: %s\n", strstr("fake", ((void*)0)));
		//	printf("my funct: %s\n", ft_strstr("fake", ((void*)0)));
		}
		/*ft_strjoin(char const *s1, char const *s2)*/
		else if (strcmp(argv[1], "ft_strjoin") == 0)
			printf("My funct: %s\n", ft_strjoin(argv[2], argv[3]));
		/*ft_wordssplit(char const *s, char c)*/
		else if (strcmp(argv[1], "ft_wordssplit") == 0)
			printf("Amount of words: %zu\n", ft_wordssplit(argv[2], argv[3][0]));
		/*ft_strsplit(char const *s, char c)*/
		else if (strcmp(argv[1], "ft_strsplit") == 0)
		{
		i = ft_wordssplit(argv[2], argv[3][0]);
		str = ft_strsplit(argv[2], argv[3][0]);
			while (i-- != 0)
			{
				printf("--> %s\n", str[i]);
			}
		}
		/*ft_lstnew(void const *content, size_t content_size)*/
		else if (strcmp(argv[1], "ft_lstnew") == 0)
		{
			list = ft_lstnew(argv[2], (size_t)atoi(argv[3]));
			printf("content: %s\n", list->content);
		}
	}
	else if (argc == 5)
	{
		/*ft_strnequ(char const *s1, char const *s2, size_t n)*/
		if (strcmp(argv[1], "ft_strnequ") == 0)
			printf("Result: %d\n", ft_strnequ(argv[2], argv[3], (size_t)atoi(argv[4])));
		/*ft_memset(void *b, int c, size_t len)*/
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
			printf("my funct: %s\n", ft_memmove(argv[2], argv[3], (size_t)atoi(argv[4])));
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
		/*ft_strncmp(const char *s1, const char *s2, size_t n)*/
		else if (strcmp(argv[1], "ft_strncmp") == 0)
		{
			printf("original: %d\n", strncmp(argv[2], argv[3], (size_t)atoi(argv[4])));
			printf("my funct: %d\n", ft_strncmp(argv[2], argv[3], (size_t)atoi(argv[4])));
		}
		/*ft_strnstr(const char *haystack, const char *needle, size_t len)*/
		else if (strcmp(argv[1], "ft_strnstr") == 0)
		{
			printf("original: %s\n", strnstr(argv[2], argv[3], (size_t)atoi(argv[4])));
			printf("my funct: %s\n", ft_strnstr(argv[2], argv[3], (size_t)atoi(argv[4])));
		}
		/*ft_memchr(const void *s, int c, size_t n)*/
		else if (strcmp(argv[1], "ft_memchr") == 0)
		{
			printf("original: %s\n", memchr(argv[2], atoi(argv[3]), (size_t)atoi(argv[4])));
			printf("my funct: %s\n", ft_memchr(argv[2], atoi(argv[3]), (size_t)atoi(argv[4])));
		}
		/*ft_memcmp(const void *s1, const void *s2, size_t n)*/
		else if (strcmp(argv[1], "ft_memcmp") == 0)
		{
			printf("original: %d\n", memcmp(argv[2], argv[3], (size_t)atoi(argv[4])));
			printf("original: %d\n", memcmp(argv[2], argv[3], (size_t)atoi(argv[4])));
		}
		/*ft_strlcat(char *dst, const char *src, size_t dstsize)*/
		else if (strcmp(argv[1], "ft_strlcat") == 0)
		{
			printf("original: %zu\n", strlcat(argv[2], argv[3], (size_t)atoi(argv[4])));
			printf("--> %s\n", argv[2]);
			printf("my funct: %zu\n", ft_strlcat(argv[2], argv[3], (size_t)atoi(argv[4])));
			printf("--> %s\n", argv[2]);
		}
		/*ft_strsub(char const *s, unsigned int start, size_t len)*/
		else if (strcmp(argv[1], "ft_strsub") == 0)
			printf("substring: %s\n", ft_strsub(argv[2], (unsigned int)atoi(argv[3]), (size_t)atoi(argv[4])));
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
	else
	{
	
		printf("Bad usage!\n\
			Prototypes of available functions:\n\
			ft_putchar(char c)\n\
			ft_putstr(char const *s)\n\
			ft_memalloc(size_t size)\n\
			ft_memdel(void **ap)\n\
			ft_strdel(char **as)\n\
			ft_strnew(size_t size)\n\
			ft_strclr(char *s)\n\
			ft_strlen(const char *s)\n\
			ft_atoi(const char *str)\n\
			ft_isalpha(int c)\n\
			ft_isdigit(int c)\n\
			ft_isalnum(int c)\n\
			ft_isascii(int c)\n\
			ft_isprint(int c)\n\
			ft_toupper(int c)\n\
			ft_tolower(int c)\n\
			ft_strdup(const char *s1)\n\
			ft_putendl(char const *s)\n\
			ft_strtrim(char const *s)\n\
			ft_intlen(int n)\n\
			ft_itoa(int n)\n\
			ft_putnbr(int n)\n\
			ft_striter(char *s, void (*f)(char *)) - the second parametr will given by default (function ft_strclr)\n\
			ft_bzero(void *s, size_t n)\n\
			ft_strequ(char const *s1, char const *s2)\n\
			ft_strcpy(char *dst, const char *src)\n\
			ft_strcat(char *s1, const char *s2)\n\
			ft_strchr(const char *s, int c)\n\
			ft_strrchr(const char *s, int c)\n\
			ft_strcmp(const char *s1, const char *s2)\n\
			ft_strstr(const char *haystack, const char *needle)\n\
			ft_strjoin(char const *s1, char const *s2)\n\
			ft_wordssplit(char const *s, char c)\n\
			ft_strsplit(char const *s, char c)\n\
			ft_lstnew(void const *content, size_t content_size)\n\
			ft_strnequ(char const *s1, char const *s2, size_t n)\n\
			ft_memset(void *b, int c, size_t len)\n\
			ft_memcpy(void *dst, const void *src, size_t n)\n\
			ft_memmove(void *dst, const void *src, size_t len)\n\
			ft_strncpy(char *dst, const char *src, size_t len)\n\
			ft_strncat(char *s1, const char *s2, size_t n)\n\
			ft_strncmp(const char *s1, const char *s2, size_t n)\n\
			ft_strnstr(const char *haystack, const char *needle, size_t len)\n\
			ft_memchr(const void *s, int c, size_t n)\n\
			ft_memcmp(const void *s1, const void *s2, size_t n)\n\
			ft_strlcat(char *dst, const char *src, size_t dstsize)\n\
			ft_strsub(char const *s, unsigned int start, size_t len)\n\
			ft_memccpy(void *dst, const void *src, int c, size_t n)\n");
	}
	return (0);
}
