/*
** movein_list.c for ok in /home/alexandre/Documents/lib/my_lib/lib/list/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Thu Apr 13 17:54:52 2017 Alexandre Chamard-bois
** Last update Mon May 22 10:02:28 2017 Alexandre Chamard-bois
*/

#include <stdlib.h>
#include "list.h"

t_clist *movein_list(t_clist *list, const int n)
{
  int i;

  i = 0;
  if (n > 0)
  {
    while (i < n)
    {
      list = list->next;
      i++;
    }
  }
  else if (n < 0)
  {
    while (i > n)
    {
      list = list->prev;
      i--;
    }
  }
  return (list);
}

t_clist *find_node(t_clist *list, void *data, t_list_cmp cmp)
{
  t_clist *tmp;

  tmp = list;
  while (cmp(tmp->ptr, data))
    tmp = NEXT(list, tmp);
  return (list);
}
