/*
** macro.h for ok in /home/alexandre/Documents/lib/my_lib/lib/include/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Wed Apr 12 20:32:11 2017 Alexandre Chamard-bois
** Last update Wed Apr 12 20:32:26 2017 Alexandre Chamard-bois
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
#ifndef IS_UP
# define IS_UP(c) ((c) >= 'A' && (c) <= 'Z' ? 0 : 1)
#endif
#ifndef IS_LO
# define IS_LO(c) ((c) >= 'a' && (c) <= 'z' ? 0 : 1)
#endif
#ifndef IS_QUOTE
# define IS_QUOTE(c) ((c) == '\'' ? 1 : (c) == '\"' ? 2 : (c) == '`' ? 3 : 0)
#endif
#ifndef IS_QUOTE
# define IS_QUOTE(c) ((c) != '\'' ? (c) != '\"' ? (c) != '`' ? 0 : 1 : 2 : 3)
#endif
#ifndef IS_SPACE
# define IS_SPACE(c) ((c) == ' ' || (c) == '\t' ? 0 : 1)
#endif
