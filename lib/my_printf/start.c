/*
** start.c for ok in /home/alexandre/Documents/projet_perso/printf2.0/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Sun Feb  5 01:04:11 2017 Alexandre Chamard-bois
** Last update Sun Aug 20 18:06:33 2017 Alexandre Chamard-bois
*/

#include "myprint.h"

int my_printf(const char *str, ...)
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

int my_dprintf(const int fd, const char *str, ...)
{
  char *final;
  va_list ap;

  va_start(ap, str);
  final = my_print(str, ap);
  write(fd, final, my_printstrlen(final));
  va_end(ap);
  free(final);
  return (0);
}

char *my_sprintf(const char *str, ...)
{
  char *final;
  va_list ap;

  va_start(ap, str);
  final = my_print(str, ap);
  va_end(ap);
  return (final);
}
