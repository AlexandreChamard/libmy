/*
** start.c for ok in /home/alexandre/Documents/projet_perso/printf2.0/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Sun Feb  5 01:04:11 2017 Alexandre Chamard-bois
** Last update Wed Apr 12 20:21:02 2017 Alexandre Chamard-bois
*/

#include "myprint.h"

int my_printf(char *str, ...)
{
  char *final;
  va_list ap;

  va_start(ap, str);
  final = my_print(str, ap);
  write(1, final, my_printstrlen(final));
  va_end(ap);
  free(final);
  return (0);
}

int my_dprintf(int i, char *str, ...)
{
  char *final;
  va_list ap;

  va_start(ap, str);
  final = my_print(str, ap);
  write(i, final, my_printstrlen(final));
  va_end(ap);
  free(final);
  return (0);
}

char *my_sprintf(char *str, ...)
{
  char *final;
  va_list ap;

  va_start(ap, str);
  final = my_print(str, ap);
  va_end(ap);
  return (final);
}
