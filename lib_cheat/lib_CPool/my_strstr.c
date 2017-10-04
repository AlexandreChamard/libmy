/*
** s_cmp.c for ok in /home/alexandre/Documents/tek-1/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Mon Dec 19 16:29:34 2016 Alexandre Chamard-bois
** Last update Wed Oct  4 11:57:35 2017 Alexandre Chamard-bois
*/

char *my_strstr(char *, char *);

char *reash(char *s, char *d, char *f)
{
  if (*s - *d && *d)
    return (my_strstr(s, f));
  return (*d ? reash(s + 1, d + 1, f) : s - d + f);
}

char *my_strstr(char *s, char *t)
{
  return (*s - *t ? *s ? my_strstr(s + 1, t) : 0 : reash(s, t, t));
}
