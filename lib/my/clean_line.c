/*
** clean_line.c for ok in /home/alexandre/Documents/lib/my_lib/lib/my/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Wed Apr 12 21:34:44 2017 Alexandre Chamard-bois
** Last update Wed Apr 12 23:04:42 2017 Alexandre Chamard-bois
*/

#include "libmy.h"

char *clean_line(char *str)
{
  int i;

  i = -1;
  while (SPACE(str[++i]));
  if (i)
    my_strcpy(str, str + i);
  i = my_strlen(str);
  while (--i >= 0 && SPACE(str[i]))
    str[i] = 0;
  return (str);
}
