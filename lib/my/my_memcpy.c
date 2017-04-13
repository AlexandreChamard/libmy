/*
** my_mem_cpy.c for ok in /home/alexandre/Documents/lib/my_lib/lib/my/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Thu Apr 13 10:54:34 2017 Alexandre Chamard-bois
** Last update Thu Apr 13 10:54:45 2017 Alexandre Chamard-bois
*/

void *my_memcpy(void *dest, const void *src, const int size)
{
  char *s1;
  const char *s2;
  int i;

  s1 = dest;
  s2 = src;
  i = -1;
  while (++i < size)
    s1[i] = s2[i];
  return (dest);
}
