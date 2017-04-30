/*
** clean_line.c for ok in /home/alexandre/Documents/lib/my_lib/lib/my/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Wed Apr 12 21:34:44 2017 Alexandre Chamard-bois
** Last update Sun Apr 30 12:33:27 2017 Alexandre Chamard-bois
*/

#include "libmy.h"

char *clean_line(char *str)
{
  int i;

  i = 0;
  while (SPACE(str[i]))
    i++;
  if (i)
    my_strcpy(str, str + i);
  i = my_strlen(str) - 1;
  while (i >= 0 && SPACE(str[i]))
  {
    str[i] = 0;
    i--;
  }
  return (str);
}
