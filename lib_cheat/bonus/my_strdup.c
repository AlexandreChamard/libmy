/*
** my_strdup.c for ok in /home/alexandre/Documents/lib/my_lib/lib_cheat/bonus/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Wed May 24 13:08:44 2017 Alexandre Chamard-bois
** Last update Wed Oct  4 14:56:44 2017 Alexandre Chamard-bois
*/

#include <stdlib.h>
#include "lib_cheat.h"

char *dup(char *dest, char *src)
{
  return (dest ? *src ? *dest = *src, dup(dest + 1, src + 1) : 0, dest : 0);
}

char *my_strdup(char *str)
{
  return (dup(malloc(sizeof(char) * my_strlen(str) + 1), str));
}
