/*
** scan_str.c for ok in /home/alexandre/Documents/lib/my_lib/lib/scanf/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Sun Apr 30 13:00:59 2017 Alexandre Chamard-bois
** Last update Sun Apr 30 15:13:36 2017 Alexandre Chamard-bois
*/

#include "scan.h"

int _scan_str(t_format *format, t_buffer *buff)
{
  char *str;
  int i;

  if (!(str = va_arg(format->ap, char *)))
    return (0);
  i = 0;
  while (!BLANK(POS(buff)))
  {
    str[i] = POS(buff);
    if (INCR(buff))
      return (1);
    i++;
  }
  return (0);
}

int _scan_char(t_format *format, t_buffer *buff)
{
  char *c;

  if (!(c = va_arg(format->ap, char *)))
    return (0);
  *c = POS(buff);
  buff->i++;
  return (0);
}
