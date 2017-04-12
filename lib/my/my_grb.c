/*
** my_grb.c for ok in /home/alexandre/Documents/lib/my_lib/lib/my/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Mon Apr 10 09:17:32 2017 Alexandre Chamard-bois
** Last update Mon Apr 10 09:31:44 2017 Alexandre Chamard-bois
*/

#include <stdlib.h>

typedef struct  s_grb
{
  void          *alloc
  struct s_grb  *next;
}               t_grb;

void my_grb(void *alloc)
{
  static t_grb *grb = NULL;
  t_grb *new;

  if (!(new = malloc(sizef(t_grb))))
    return;
  new->alloc = alloc;
  new->next = grb;
}

void *my_alloc(size_t size)
{
  void *alloc;
  int i;

  if (!(alloc = malloc(sizeof(size + 1))))
    return (NULL);
  i = -1;
  while (++i <= size)
    alloc[i] = 0;
  return (alloc);
}
