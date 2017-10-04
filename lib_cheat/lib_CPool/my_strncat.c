/*
** my_strncat.c for ok in /home/alexandre/Documents/lib_cheat/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Wed Jan  4 08:49:28 2017 Alexandre Chamard-bois
** Last update Wed Oct  4 14:21:29 2017 Alexandre Chamard-bois
*/

#include <stdlib.h>

int my_strlen(char *str);

char *conc(char *des, char *src, char *str, int n)
{
  *src && n > 0 ? *str = *src, conc(des, src + 1, str + 1, n - 1) : 0;
  *des ? *str = *des, conc(des + 1, src, str + 1, n) : 0;
  return (*(str + my_strlen(des) + my_strlen(src)) = 0, str);
}

char *my_strncat(char *dest, char *src, int nb)
{
  return (conc(dest, src, malloc(my_strlen(dest) + my_strlen(src) + 1), nb));
}
