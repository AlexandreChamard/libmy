/*
** gclose.c for ok in /home/alexandre/Documents/lib/my_lib/lib/garbage/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Sun Jul  2 16:18:29 2017 Alexandre Chamard-bois
** Last update Sun Aug 20 19:19:02 2017 Alexandre Chamard-bois
*/

#include <stdio.h>
#include "garbage.h"

void _gclose(t_glist **li)
{
  t_glist *to_free;

  to_free = *li;
  *li = (*li)->prev;
  if (*li)
    (*li)->next = NULL;
  while (to_free->garbage)
    _my_free(to_free->garbage->prev, to_free);
  free(to_free);
}

void gclose()
{
  if (g_garbage)
    _gclose(&g_garbage);
}

void gclose_all()
{
  while (g_garbage)
    _gclose(&g_garbage);
}
