/*
** my_getline.c for ok in /home/alexandre/Documents/lib/my_lib/lib_cheat/bonus/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Wed May 24 09:04:58 2017 Alexandre Chamard-bois
** Last update Wed May 24 11:35:40 2017 Alexandre Chamard-bois
*/

#include <stdlib.h>
#include <unistd.h>

char *r(char *n, char *s, char c, int i)
{
  n ? *((short*)(n + i)) = (s ? s[i] ? s[i] : c : 0) : s ? free(s) : 0;
  return (n && s ? s[i] ? r(n, s, c, i + 1) : free(s), n : n);
}

char *g(int f, char *s, char c, int l)
{
  l = read(f, &c, 1) > 0 && c != 10 ? l + 1 : !c && !*s ? free(s), s= 0, 0 : 0;
  return (l ? g(f, r(malloc(l + 2), s, c, 0), 0, l) : s && (*s || c) ? s : 0);
}

char *my_getline(int fd)
{
  return (g(fd, r(malloc(2), NULL, 0, 0), 0, 0));
}
