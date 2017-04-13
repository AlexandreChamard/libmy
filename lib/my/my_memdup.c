/*
** my_memdup.c for ok in /home/alexandre/Documents/lib/my_lib/lib/my/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Thu Apr 13 10:49:22 2017 Alexandre Chamard-bois
** Last update Thu Apr 13 10:55:11 2017 Alexandre Chamard-bois
*/

#include <stdlib.h>
#include "libmy.h"

void *my_memdup(const void *ptr, const int size)
{
  void *new_ptr;

  if (!(new_ptr = malloc(sizeof(size))))
    return (NULL);
  my_memcpy(new_ptr, ptr, size);
  return (new_ptr);
}
