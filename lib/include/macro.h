/*
** macro.h for ok in /home/alexandre/Documents/lib/my_lib/lib/include/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Wed Apr 12 20:32:11 2017 Alexandre Chamard-bois
** Last update Wed Apr 12 23:05:05 2017 Alexandre Chamard-bois
*/

#ifndef MIN
# define MIN(x, y) ((x) < (y) ? (x) : (y))
#endif
#ifndef MAX
# define MAX(x, y) ((x) > (y) ? (x) : (y))
#endif
#ifndef ABS
# define ABS(x) ((x) > 0 ? (x) : -(x))
#endif
#ifndef NUM
# define NUM(c) ((c) >= '0' && (c) <= '9' ? 1 : 0)
#endif
#ifndef UPPER
# define UPPER(c) ((c) >= 'A' && (c) <= 'Z' ? 1 : 0)
#endif
#ifndef LOWER
# define LOWER(c) ((c) >= 'a' && (c) <= 'z' ? 1 : 0)
#endif
#ifndef QUOTE
# define QUOTE(c) ((c) != '\'' ? (c) != '\"' ? (c) != '`' ? 0 : 1 : 2 : 3)
#endif
#ifndef SPACE
# define SPACE(c) ((c) == ' ' || (c) == '\t' ? 1 : 0)
#endif
