/*
** cmp_list.c for ok in /home/alexandre/Documents/lib/my_lib/lib/list/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Thu Apr 13 14:31:19 2017 Alexandre Chamard-bois
** Last update Thu Apr 13 18:04:03 2017 Alexandre Chamard-bois
*/

#include <stdlib.h>
#include "list.h"

static void	sort(t_list *first, t_list *list, int direction, t_cmp cmp)
{
  t_list *tmp;

  while (list)
	{
		if (cmp(first, list) == direction)
		{
      swap_node(first, list);
      tmp = list;
      list = first;
      first = tmp;
      list = list->next;
		}
	}
}

t_list *sort_list(t_list *list, t_cmp cmp, int direction)
{
  int     i;
  int     j;

  if (!list)
    return (NULL);
  list = goto_startlist(list);
  if (direction != ASC && direction != DESC)
    return (list);
  i = 0;
  while (list)
  {
    list = goto_startlist(list);
    j = -1;
    while (++j < i)
      list = list->next;
    sort(list, list->next, direction, cmp);
  }
  list = goto_startlist(list);
  return (list);
}
