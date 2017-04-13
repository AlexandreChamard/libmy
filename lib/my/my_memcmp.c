/*
** my_memcmp.c for ok in /home/alexandre/Documents/lib/my_lib/lib/my/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Thu Apr 13 19:24:58 2017 Alexandre Chamard-bois
** Last update Thu Apr 13 19:30:06 2017 Alexandre Chamard-bois
*/

int my_memcmp(const void *str1, const void *str2, const int size)
{
  const char *s1;
  const char *s2;
  int i;

  if (!str1 && !str2)
    return (0);
  if (!str1)
    return (-1);
  if (!str2)
    return (1);
  i = -1;
  s1 = str1;
  s2 = str2;
  while (++i < size && *s1 == *s2)
  {
    s1++;
    s2++;
  }
  if (*s1 > *s2)
    return (1);
  if (*s1 < *s2)
    return (-1);
  return (0);
}
