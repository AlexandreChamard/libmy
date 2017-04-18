/*
** movein_list.c for ok in /home/alexandre/Documents/lib/my_lib/lib/list/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Thu Apr 13 17:54:52 2017 Alexandre Chamard-bois
** Last update Sat Apr 15 16:19:43 2017 Alexandre Chamard-bois
*/

#include <stdlib.h>
#include "list.h"

t_list *goto_startlist(t_list *list)
{
  if (!list)
    return (NULL);
  while (list->prev)
    list = list->prev;
  return (list);
}

t_list *goto_endlist(t_list *list)
{
  if (!list)
    return (NULL);
  while (list->next)
    list = list->next;
  return (list);
}

t_list *goto_nlist(t_list *list, const int n)
{
  int i;

  if (!list)
    return (NULL);
  list = goto_startlist(list);
  i = 0;
  while (i < n && list->next)
  {
    list = list->next;
    i++;
  }
  return (list);
}

t_list *movein_list(t_list *list, const int n)
{
  int i;

  i = 0;
  if (n > 0)
  {
    while (i < n && list->next)
    {
      list = list->next;
      i++;
    }
  }
  else if (n < 0)
  {
    while (i > n && list->prev)
    {
      list = list->prev;
      i--;
    }
  }
  return (list);
}

t_list *find_node(t_list *list, void *data, t_list_cmp cmp)
{
  if (!list)
    return (NULL);
  list = goto_startlist(list);
  while (list && cmp(list->data, data))
    list = list->next;
  return (list);
}
