/*
** gopn.c for ok in /home/alexandre/Documents/lib/my_lib/lib/garbage/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Sun Aug 20 18:30:08 2017 Alexandre Chamard-bois
** Last update Sun Aug 20 20:13:52 2017 Alexandre Chamard-bois
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "garbage.h"

int _gopen(t_glist **li)
{
  t_glist *l;

  if (!(l = malloc(sizeof(t_glist))))
    return (1);
  memset(l, 0, sizeof(t_glist));
  l->prev = *li;
  if (*li)
    (*li)->next = l;
  *li = l;
  return (0);
}

int gopen()
{
  return (_gopen(&g_garbage));
}
