/*
** create_list.c for ok in /home/alexandre/Documents/lib/my_lib/lib/list/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Thu Apr 13 13:13:22 2017 Alexandre Chamard-bois
** Last update Sat Apr 15 15:26:25 2017 Alexandre Chamard-bois
*/

#include <stdlib.h>
#include "list.h"

t_list *new_node(t_list *list, void *data)
{
  t_list *new_node;

  if (!(new_node = malloc(sizeof(t_list))))
    return (NULL);
  new_node->data = data;
  new_node->prev = list;
  new_node->next = NULL;
  if (list)
    list->next = new_node;
  return (new_node);
}

int nb_node(t_list *list)
{
  int i;

  i = 0;
  while (list)
  {
    list = list->next;
    i++;
  }
  return (i);
}

int swap_node(t_list *node1, t_list *node2)
{
  void *tmp;

  if (!node1 || !node2)
    return (1);
  tmp = node1->data;
  node1->data = node2->data;
  node2->data = tmp;
  return (0);
}

t_list *remove_node(t_list *list, t_list_free free_node)
{
  t_list *next;
  t_list *prev;

  if (!list)
    return (NULL);
  next = list->next;
  prev = list->prev;
  if (next)
    next->prev = prev;
  if (prev)
    prev->next = next;
  free_node(list->data);
  free(list);
  if (prev)
    return (prev);
  return (next);
}

t_list *free_list(t_list *list, t_list_free free_node)
{
  t_list *next;

  list = goto_startlist(list);
  while (list)
  {
    next = list->next;
    free_node(list->data);
    free(list);
    list = next;
  }
  return (NULL);
}
