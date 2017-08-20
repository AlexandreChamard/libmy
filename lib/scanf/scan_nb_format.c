/*
** scan_nb_format.c for ok in /home/alexandre/Documents/lib/my_lib/lib/scanf/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Sun Apr 30 14:38:32 2017 Alexandre Chamard-bois
** Last update Sun Aug 20 18:00:51 2017 Alexandre Chamard-bois
*/

#include <stdarg.h>
#include "scan.h"

int
_scan_float(t_myfd *fd, t_format *format, t_option option)
{
  float *res;
  double nb;

  (void) option;
  if (!(res = va_arg(format->ap, float *)))
    return (0);
  if (_getfloat(fd, &nb))
    return (1);
  *res = (float) nb;
  return (0);
}

int
_scan_int(t_myfd *fd, t_format *format, t_option option)
{
  int *res;
  long long nb;

  (void) option;
  if (!(res = va_arg(format->ap, int *)))
    return (0);
  if (_getll(fd, &nb))
    return (1);
  *res = (int) nb;
  return (0);
}

int
_scan_long(t_myfd *fd, t_format *format, t_option option)
{
  long *res;
  long long nb;

  (void) option;
  if (!(res = va_arg(format->ap, long *)))
    return (0);
  if (_getll(fd, &nb))
    return (1);
  *res = (long) nb;
  return (0);
}

int
_scan_longlong(t_myfd *fd, t_format *format, t_option option)
{
  long long *res;
  long long nb;

  (void) option;
  if (!(res = va_arg(format->ap, long long *)))
    return (0);
  if (_getll(fd, &nb))
    return (1);
  *res = nb;
  return (0);
}
