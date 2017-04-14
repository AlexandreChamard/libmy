/*
** my_free.c for ok in /home/alexandre/Documents/lib/my_lib/lib/my/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Fri Apr 14 08:13:04 2017 Alexandre Chamard-bois
** Last update Fri Apr 14 08:14:38 2017 Alexandre Chamard-bois
*/

#include <stdlib.h>

char **free_tab(char **tab)
{
  int i;

  i = -1;
  while (tab[++i])
    free(tab[i]);
  free(tab);
  return (NULL);
}
