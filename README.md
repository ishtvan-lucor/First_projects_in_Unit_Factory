# First_projects_in_Unit_Factory
My first projects during the education in Unit Factory by 42 school methodology.

1. Piscine Reloaded - is a best-of of the exercises I did during the Piscine C that help me to remind all 
    the basics of the C programming language.
    
2. Libft is project that contain useful functions.
    + Part 1 - Libc functions: ft_memset, ft_bzero, ft_memcpy, ft_memccpy, ft_memmove, ft_memchr, ft_memcmp, ft_strlen,
      ft_strdup, ft_strcpy, ft_strncpy, ft_strcat, ft_strncat, ft_strlcat, ft_strchr, ft_strrchr, ft_strstr, ft_strnstr,
      ft_strcmp, ft_strncmp, ft_atoi, ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint, ft_toupper, ft_tolower.
    + Part 2 - Additional functions: ft_memalloc, ft_memdel, ft_strnew, ft_strdel, ft_strclr, ft_striter, ft_striteri,
      ft_strmap, ft_strmapi, ft_strequ, ft_strnequ, ft_strsub, ft_strjoin, ft_strtrim, ft_strsplit, ft_itoa, ft_putchar,
      ft_putstr, ft_putendl, ft_putnbr, ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd.
    + Part 3 - Bonus part: ft_lstnew, ft_lstdelone, ft_lstdel, ft_lstadd, ft_lstiter, ft_lstmap, ft_wordssplit, ft_realloc,
      ft_lstswap, ft_strclen, ft_intlen.
      
3. Fillit - is a program that will take a file as parameter, which contains a list of Tetriminos*, and arrange them in order to create the smallest square possible. And it's a paired project.

4. Get_Next_Line - a function that will allow to read a line ending with a newline character from a file descriptor.

5. init - this project about learning system and network basic commands, many of the services used on a server machine, as well as a few ideas of scripts that can be useful for SysAdmins on a daily basis.

Projects Piscine Reloaded(1) and init(5) not full-fledged programs.  Soon will be add a subject to this project.

The projects Libft(2), Fillit(3) and Get_Next_Line(4) supported by Makefile and where is needed by main.c file to check.
Makefile suported the next command: make all, clean, fclean, re.

Usage(in command line):
+ make
+ (if compile libft with main.c libft: gcc -o test main.c libft.a)
+ ./name_project argument**

** Libft arguments: first is name of function, next the argument/arguments of function 
+ Exemple: ./test ft_putchar A
+ Warning: in error case, it will print a list of available functions prototypes

** Get_Next_Line argument: only the file that need to read
+ Exemple: ./get_next_line name_file_with_text
       
** Fillit argument: only the file with Tetriminos
+ Exemple: ./fillit name_file_with_Tetriminos
       
'*' Tetriminos must respect the following rules :
+ Precisely 4 lines of 4 characters, each followed by a new line (well... a 4x4 square).
+ A Tetrimino is a classic piece of Tetris composed of 4 blocks.
+ Each character must be either a block character(’#’ ) or an empty character (’.’).
+ Each block of a Tetrimino must touch at least one other block on any of his 4 sides (up, down, left and right).
