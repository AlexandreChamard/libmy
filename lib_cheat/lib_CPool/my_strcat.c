/*
** my_strcat.c for ok in /home/alexandre/Documents/lib_cheat/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Wed Jan  4 08:19:51 2017 Alexandre Chamard-bois
** Last update Thu Feb 23 13:48:05 2017 Alexandre Chamard-bois
*/

#include <stdlib.h>

int p(char *s, int i)
{
  return (*s ? p(s + 1, i + 1) : i);
}

char *conc(char *dest, char *src, char *str)
{
  *src ? (*str = *src) && conc(dest, src + 1, str + 1) : 0;
  *dest ? (*str = *dest) && conc(dest + 1, src, str + 1) : 0;
  return (str + (*(str + p(dest, 0) + p(src, 0)) = 0));
}

char *my_strcat(char *dest, char *src)
{
  return (conc(dest, src, malloc((p(dest, 0) + p(src, 0) + 1))));
}
