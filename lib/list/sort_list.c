/*
** cmp_list.c for ok in /home/alexandre/Documents/lib/my_lib/lib/list/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Thu Apr 13 14:31:19 2017 Alexandre Chamard-bois
** Last update Sun Apr 16 23:59:29 2017 Alexandre Chamard-bois
*/

#include <stdio.h>
#include "list.h"

void print_list(t_list *list, int start, int end)
{
  int i;

  i = 0;
  printf("nb nodes: %d  [%d] -> [%d]\n", end - start , start, end);
  while (i <= end - start)
  {
    printf("%d ", *(int*)list->data);
    list = list->next;
    i++;
  }
  printf("\n");
}

static int sort(t_list *list, t_lsort stsort, t_list_cmp cmp, int dir)
{
  t_list *lmin;
  t_list *lmax;
  int min;

  if (stsort.end - stsort.start <= 1)
    return (0);
  print_list(list, stsort.start, stsort.end);
  lmin = list;
  lmax = movein_list(list, stsort.end - stsort.start - 1);
  min = stsort.start;
  while (lmin < lmax)
  {
    while (lmin != lmax->prev && cmp(lmin->data, stsort.compare) == dir)
    {
      lmin = lmin->next;
      min++;
    }
    while (lmax != lmin && cmp(lmax->data, stsort.compare) != dir)
      lmax = lmax->prev;
    if (lmin != lmax)
      swap_node(lmin, lmax);
  }
  print_list(list, stsort.start, stsort.end);
  printf("\n");
  sort(list, (t_lsort){stsort.start, min, list->data}, cmp, dir);
  sort(lmax->next, (t_lsort){min + 1, stsort.end, lmax->next->data}, cmp, dir);
  return (0);
}

t_list *sort_list(t_list *list, t_list_cmp cmp, int direction)
{
  sort(list, (t_lsort){0, nb_node(list), list->data}, cmp, direction);
	return (goto_startlist(list));
}
