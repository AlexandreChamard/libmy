/*
** my_free.c for ok in /home/alexandre/Documents/lib/my_lib/lib/my/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Fri Apr 14 08:13:04 2017 Alexandre Chamard-bois
** Last update Sun Aug 20 20:14:50 2017 Alexandre Chamard-bois
*/

#include <stdlib.h>
#include "libmy.h"

char **free_tab(char **tab)
{
  int i;

  i = 0;
  while (tab[i])
  {
    my_free(tab[i]);
    i++;
  }
  my_free(tab);
  return (NULL);
}
