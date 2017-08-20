/*
** my_malloc.c for ok in /home/alexandre/Documents/lib/my_lib/lib/garbage/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Mon May 22 13:44:21 2017 Alexandre Chamard-bois
** Last update Sun Aug 20 19:13:12 2017 Alexandre Chamard-bois
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "macro.h"
#include "garbage.h"

void *_my_malloc(const size_t size, t_glist *li)
{
  t_garbage *new_node;

  if (!(new_node = malloc(sizeof(t_garbage) + size)))
    return (NULL);
  li->nb_elm++;
  memset(new_node, 0, sizeof(t_garbage) + size);
  if (li->garbage)
  {
    new_node->next = li->garbage;
    new_node->prev = li->garbage->prev;
    li->garbage->prev->next = new_node;
    li->garbage->prev = new_node;
  }
  else
  {
    new_node->prev = new_node;
    new_node->next = new_node;
  }
  li->garbage = new_node;
  new_node->sizeptr = size;
  new_node->magic = MAGIC;
  return (new_node->ptr);
}

void *my_malloc(const size_t size)
{
  return (_my_malloc(size, g_garbage));
}

t_garbage *replace_node(t_garbage *node, t_garbage *new_node)
{
  if (node != node->prev)
  {
    node->prev->next = new_node;
    node->next->prev = new_node;
    new_node->next = node->next;
    new_node->prev = node->prev;
  }
  else
  free(node);
  return (new_node);
}

/* pas fini */
void *my_realloc(void *ptr, const size_t size)
{
  t_garbage *node;
  t_garbage *new_node;

  node = ptr - sizeof(t_garbage);
  if (node->magic != MAGIC)
    return (NULL);
  if (!(new_node = malloc(sizeof(t_garbage) + size)))
    return (NULL);
  memset(new_node, 0, sizeof(t_garbage) + size);
  memcpy(new_node->ptr, ptr, MIN(size, node->sizeptr));
  replace_node(node, new_node);
  return (new_node->ptr);
}
