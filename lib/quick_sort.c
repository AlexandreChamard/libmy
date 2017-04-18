/*
** quick_sort.c for ok in /home/alexandre/Documents/lib/my_lib/lib/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Fri Apr 14 16:10:12 2017 Alexandre Chamard-bois
** Last update Tue Apr 18 15:03:49 2017 Alexandre Chamard-bois
*/

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "list.h"

void print_list(t_list *list)
{
  int i;

  i = 0;
  // printf("nb nodes: %d  [%d] -> [%d]\n", end - start , start, end);
  // while (i <= end - start)
  while (list)
  {
    printf("%d ", *(int*)list->data);
    list = list->next;
    i++;
  }
  printf("\n");
}

void all_print_list(t_list *list, int start, int end)
{
  int i;

  i = 0;
  list = goto_startlist(list);
  printf("nb nodes: %d  [%d] -> [%d]\n", end - start , start, end);
  // while (i <= end - start)
  while (list)
  {
    printf("%d ", *(int*)list->data);
    list = list->next;
    i++;
  }
  printf("\n");
}

t_list *init_list(int nb, int size)
{
  t_list *list = NULL;
  int i;
  int *data;

  i = 0;
  srand(time(NULL));
  while (i < nb)
  {
    data = malloc(sizeof(int));
    *data = rand() % size;
    list = new_node(list, data);
    i++;
  }
  return (goto_startlist(list));
}

static void sort(t_list *list, t_lsort stsort, t_list_cmp cmp, int dir)
{
  int min;
  t_list *lmin;
  t_list *lmax;

  lmin = list->next;
  lmax = movein_list(list, stsort.end - stsort.start);
  if (stsort.end - stsort.start < 2)
  {
    if (stsort.end - stsort.start == 1 &&
        cmp(list->data, list->next->data) != dir &&
        cmp(list->data, list->next->data) != 0)
      swap_node(list, list->next);
    return;
  }
  min = stsort.start + 1;
  while (lmin != lmax)
  {
    while (lmin != lmax && cmp(lmin->data, list->data) == dir)
    {
      lmin = lmin->next;
      min++;
    }
    while (lmin != lmax && cmp(lmax->data, list->data) != dir)
      lmax = lmax->prev;
    if (lmin != lmax)
      swap_node(lmin, lmax);
  }
  if (cmp(lmin->data, list->data) != dir)
  {
    lmin = lmin->prev;
    min--;
  }
  swap_node(list, lmin);
  sort(list, (t_lsort){stsort.start, min - 1}, cmp, dir);
  if (lmin->next)
    sort(lmin->next, (t_lsort){min + 1, stsort.end}, cmp, dir);
}

int new_sort_list(t_list *list, t_list_cmp cmp, int direction)
{
	sort(list, (t_lsort){0, nb_node(list) - 1, list->data}, cmp, direction);
  goto_startlist(list);
	return (0);
}

int comp(void *data1, void *data2)
{
  if (!data2 || *(int*)data1 < *(int*)data2)
    return (1);
  if (!data1 || *(int*)data1 > *(int*)data2)
    return (-1);
  return (0);
}

int main(int ac, char **av)
{
  t_list *list;
  int nb;
  int size;
  int cl;

  (void) ac;
  nb = atoi(av[1]);
  size = atoi(av[2]);
  list = init_list(nb, size);
  // print_list(list);
  cl = clock();
  new_sort_list(list, comp, ASC);
  cl = clock() - cl;
  print_list(list);
  printf("quick sort: %d\n", cl);
  return (free_list(list, &free), 0);
}
