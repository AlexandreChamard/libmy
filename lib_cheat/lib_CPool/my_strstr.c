/*
** s_cmp.c for ok in /home/alexandre/Documents/tek-1/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Mon Dec 19 16:29:34 2016 Alexandre Chamard-bois
** Last update Thu Dec 29 16:32:10 2016 Alexandre Chamard-bois
*/

char my_strstr(char *, char *);

char reash(char *s, char *d, char *f)
{
  if ((*s - *d) != 0 && (*d) != 0)
    return (my_strstr(s, f));
  return (!(*d) ? *(s - d + f) : reash(s + 1, d + 1, f));
}

char my_strstr(char *s, char *t)
{
  return ((*s - *t) != 0 ? !(*s) ? 0 : my_strstr(s + 1, t) : reash(s, t, t));
}