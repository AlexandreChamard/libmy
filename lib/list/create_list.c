/*
** create_list.c for ok in /home/alexandre/Documents/lib/my_lib/lib/list/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Thu Apr 13 13:13:22 2017 Alexandre Chamard-bois
** Last update Mon May 22 18:22:26 2017 Alexandre Chamard-bois
*/

#include <stdlib.h>
#include "list.h"

t_clist *new_node(t_clist *list, void *data)
{
  t_clist *new_node;

  if (!(new_node = malloc(sizeof(t_clist))))
    return (list);
  new_node->ptr = data;
  if (list)
  {
    new_node->next = list;
    new_node->prev = list->prev;
    list->prev->next = new_node;
    list->prev = new_node;
  }
  else
  {
    new_node->prev = new_node;
    new_node->next = new_node;
  }
  return (new_node);
}

int nb_node(t_clist *list)
{
  t_clist *tmp;
  int i;

  i = 0;
  tmp = list;
  while (tmp)
  {
    i++;
    tmp = NEXT(list, tmp);
  }
  return (i);
}

int swap_node(t_clist *node1, t_clist *node2)
{
  void *tmp;

  if (!node1 || !node2)
    return (1);
  tmp = node1->ptr;
  node1->ptr = node2->ptr;
  node2->ptr = tmp;
  return (0);
}

t_clist *remove_node(t_clist *list, t_list_free free_node)
{
  t_clist *next;

  if (list->next == list)
  {
    free_node(list->ptr);
    free(list);
    return (NULL);
  }
  next = list->next;
  free_node(list->ptr);
  if (list == list->next)
  {
    free(list);
    return (NULL);
  }
  list->prev->next = list->next;
  list->next->prev = list->prev;
  free(list);
  return (next);
}

t_clist *free_list(t_clist *list, t_list_free free_node)
{
  t_clist *next;

  if (list)
    list->prev->next = NULL;
  while (list)
  {
    next = list->next;
    free_node(list->ptr);
    free(list);
    list = next;
  }
  return (NULL);
}
