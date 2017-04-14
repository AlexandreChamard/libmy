/*
** my_strcpy.c for ok in /home/alexandre/Documents/lib_cheat/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Tue Jan  3 17:41:36 2017 Alexandre Chamard-bois
** Last update Thu Feb 23 14:08:49 2017 Alexandre Chamard-bois
*/

#include "lib_cheat.h"

char  *my_strcpy(char *dest, char *src)
{
  *src ? (*dest = *src) && my_strcpy(dest + 1, src + 1) : 0;
  return (dest);
}
