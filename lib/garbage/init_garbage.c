/*
** init_garbage.c for ok in /home/alexandre/Documents/lib/my_lib/garbag/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Mon May 22 09:08:29 2017 Alexandre Chamard-bois
** Last update Mon May 22 18:06:36 2017 Alexandre Chamard-bois
*/

#include <stdlib.h>
#include "libmy.h"
#include "garbage.h"

t_clist *g_garbage = NULL;

t_clist *find_garb(char *key)
{
  t_clist *tmp;

  tmp = g_garbage;
  while (tmp)
  {
    if (!my_wordcmp(GARB_KEY(tmp), key))
      return (tmp);
    tmp = NEXT(g_garbage, tmp);
  }
  return (NULL);
}

t_garbage *init_garbage(char *key)
{
  t_clist *list;
  t_garbage *garbage;

  if ((list = find_garb(key)))
    return (list->ptr);
  if (!(garbage = malloc(sizeof(t_garbage))))
    return (NULL);
  my_memset(garbage, 0, sizeof(t_garbage));
  my_strncpy(garbage->key, key, 42);
  if (!(g_garbage = new_node(g_garbage, garbage)))
    return (NULL);
  return (garbage);
}

void _free_garbage(void *g)
{
  t_garbage *garbage;

  garbage = g;
  free_list(garbage->list, &free);
  free(g);
}

void free_garbage(char *key)
{
  char def[] = "trash";
  t_clist *list;

  if (!key)
    key = def;
  if (!(list = find_garb(key)))
    return;
  g_garbage = remove_node(list, _free_garbage);
}

void free_garbage_all()
{
  if (!g_garbage)
    return;
  g_garbage = free_list(g_garbage, &_free_garbage);
}
