/*
** match.c for ok in /home/alexandre/Documents/lib/my_lib/lib/my/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Thu Apr 13 11:29:35 2017 Alexandre Chamard-bois
** Last update Thu Apr 13 13:03:05 2017 Alexandre Chamard-bois
*/

#ifdef ALL
# undef ALL
#endif
#define ALL '*'

int	match(char *s1, char *s2)
{
  if (!*s1 && *s2 == ALL)
    return (match(s1, s2 + 1));
  if (*s1 && *s2 == ALL)
    return ((match(s1 + 1, s2)) || (match(s1, s2 + 1)));
  if ((*s1 == *s2) && *s1 && *s2)
    return (match(s1 + 1, s2 + 1));
  if ((*s1 == *s2) && !*s1 && !*s2)
    return (1);
  return (0);
}

int	nmatch(char *s1, char *s2)
{
  if (!*s1 && *s2 == ALL)
    return (nmatch(s1, s2 + 1));
  if (*s1 && *s2 == ALL)
    return ((nmatch(s1 + 1, s2)) + (nmatch(s1, s2 + 1)));
  if ((*s1 == *s2) && *s1 && *s2)
    return (nmatch(s1 + 1, s2 + 1));
  if ((*s1 == *s2) && !*s1 && !*s2)
    return (1);
  return (0);
}
