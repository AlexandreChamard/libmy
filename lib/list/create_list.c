/*
** create_list.c for ok in /home/alexandre/Documents/lib/my_lib/lib/list/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Thu Apr 13 13:13:22 2017 Alexandre Chamard-bois
** Last update Thu Apr 13 14:25:40 2017 Alexandre Chamard-bois
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

int swap_node(t_list *node1, t_list *node2)
{
  t_list *next_tmp;
  t_list *prev_tmp;

  if (!node1 || !node2)
    return (1);
  next_tmp = node1->next;
  prev_tmp = node1->prev;
  node1->next = node2->next;
  node1->prev = node2->prev;
  node2->next = next_tmp;
  node2->prev = prev_tmp;
  return (0);
}

t_list *remove_node(t_list *list, void (*free_node)(void *))
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

t_list *free_list(t_list *list, void (*free_node)(void *))
{
  t_list *next;

  if (!list)
    return (NULL);
  while (list->prev)
    list = list->prev;
  while (list)
  {
    next = list->next;
    free_node(list->data);
    free(list);
    list = next;
  }
  return (NULL);
}
