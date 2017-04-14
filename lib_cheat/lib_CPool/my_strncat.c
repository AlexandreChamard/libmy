/*
** my_strncat.c for ok in /home/alexandre/Documents/lib_cheat/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Wed Jan  4 08:49:28 2017 Alexandre Chamard-bois
** Last update Thu Feb 23 13:53:40 2017 Alexandre Chamard-bois
*/

#include <stdlib.h>

int p(char *s, int i)
{
  return (*s ? p(s + 1, i + 1) : i);
}

char *c(char *dest, char *src, char *str, int n)
{
  *src && n > 0 ? (*str = *src) && c(dest, src + 1, str + 1, n - 1) : 0;
  *dest ? (*str = *dest) && c(dest + 1, src, str + 1, n) : 0;
  return (str + (*(str + p(dest, 0) + p(src, 0)) = 0));
}

char *my_strncat(char *dest, char *src, int nb)
{
  return (c(dest, src, malloc(p(dest, 0) + p(src, 0) + 1), nb));
}
