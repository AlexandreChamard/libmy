/*
** my_strtoc.c for ok in /home/alexandre/Documents/lib/my_lib/lib/my/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Wed Apr 12 20:06:42 2017 Alexandre Chamard-bois
** Last update Fri Apr 14 08:18:25 2017 Alexandre Chamard-bois
*/

#include <stdio.h>
#include <stdlib.h>
#include "libmy.h"

int is_separator(char c, const char *separators)
{
  int i;

  i = -1;
  while (separators[++i])
    if (c == separators[i])
      return (1);
  return (0);
}

char *my_strtok(const char *str, const char *separators)
{
  int i;
  static int j;
  static const char *save = NULL;
  char *new_str;

  new_str = NULL;
  if (!save || save != str)
  {
    j = 0;
    save = str;
  }
  if (!str[j])
    return (NULL);
  i = j;
  while (str[i] && !is_separator(str[i], separators))
    i++;
  new_str = my_strndup(str + j, i - j);
  j = i;
  while (is_separator(str[j], separators))
    j++;
  return (new_str);
}
