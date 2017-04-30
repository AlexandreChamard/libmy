/*
** my_free.c for ok in /home/alexandre/Documents/lib/my_lib/lib/my/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Fri Apr 14 08:13:04 2017 Alexandre Chamard-bois
** Last update Sun Apr 30 12:33:56 2017 Alexandre Chamard-bois
*/

#include <stdlib.h>

char **free_tab(char **tab)
{
  int i;

  i = 0;
  while (tab[i])
  {
    free(tab[i]);
    i++;
  }
  free(tab);
  return (NULL);
}
