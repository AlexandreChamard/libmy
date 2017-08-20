/*
** my_free.c for ok in /home/alexandre/Documents/lib/my_lib/lib/garbage/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Sun Jul  2 16:15:19 2017 Alexandre Chamard-bois
** Last update Sun Aug 20 19:22:29 2017 Alexandre Chamard-bois
*/

#include <stdlib.h>
#include <stdio.h>
#include "garbage.h"

t_garbage *gfind_grb(t_glist *li, void *addr)
{
  t_garbage *grb;

  grb = li->garbage;
  while (grb)
  {
    if (grb == addr)
      return (grb);
    grb = NEXT(li->garbage, grb);
  }
  return (NULL);
}

t_garbage *remove_gnode(t_garbage *grb, t_garbage *find)
{
  if (find == find->next)
  {
    free(find);
    return (NULL);
  }
  find->prev->next = find->next;
  find->next->prev = find->prev;
  if (grb == find)
    grb = grb->next;
  free(find);
  return (grb);
}

void _my_free(t_garbage *ptr, t_glist *li)
{
  t_glist *list_find;
  t_garbage *find;

  list_find = li;
  while (list_find->garbage)
  {
    if ((find = gfind_grb(li, ptr)))
    {
      list_find->nb_elm--;
      list_find->garbage = remove_gnode(list_find->garbage, find);
      return ;
    }
    list_find = list_find->prev;
  }
}

void my_free(void *ptr)
{
  _my_free(ptr - sizeof(t_garbage), g_garbage);
}
