/*
** my_malloc.c for ok in /home/alexandre/Documents/lib/my_lib/lib/garbage/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Mon May 22 13:44:21 2017 Alexandre Chamard-bois
** Last update Mon May 22 16:40:48 2017 Alexandre Chamard-bois
*/

#include <stdio.h>
#include <stdlib.h>
#include "garbage.h"

void *my_malloc(size_t size, char *key)
{
  char def[] = "trash";
  t_clist *list;
  void *data;

  if (!(data = malloc(size)))
    return (NULL);
  if (!key)
    key = def;
  if (!(list = find_garb(key)) && init_garbage(key) &&
      !(list = find_garb(key)))
    return (data);
  GARB_LIST(list) = new_node(GARB_LIST(list), data);
  return (data);
}

void my_free(void *data, char *key)
{
  char def[] = "trash";
  t_clist *list;
  t_garbage *garbage;

  if (!key)
    key = def;
  if ((list = find_garb(key)))
  {
    garbage = list->ptr;
    while (garbage->list)
    {
      if (garbage->list->ptr == data)
      {
        garbage->list = remove_node(garbage->list, free);
        break;
      }
      garbage->list = garbage->list->next;
    }
  }
  else
    free(data);
}
