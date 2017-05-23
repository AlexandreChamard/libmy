/*
** scan_str.c for ok in /home/alexandre/Documents/lib/my_lib/lib/scanf/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Sun Apr 30 13:00:59 2017 Alexandre Chamard-bois
** Last update Mon May  8 12:29:28 2017 Alexandre Chamard-bois
*/

#include "libmy.h"
#include "scan.h"

int verif_option(char c, int act, t_option option)
{
  int i;

  i = 0;
  if (option.nb_max && act >= option.nb_max)
    return (0);
  while (option.without[i] && i < 42)
  {
    if (c == option.without[i])
      return (0);
    i++;
  }
  return (1);
}

int _scan_str(t_format *format, t_buffer *buff, t_option option)
{
  char *str;
  int i;

  if (!(str = va_arg(format->ap, char *)))
    return (0);
  i = 0;
  if (!verif_option(POS(buff), i, option))
    return (1);
  while (!BLANK(POS(buff)) && verif_option(POS(buff), i, option))
  {
    str[i] = POS(buff);
    if (INCR(buff))
      return (1);
    i++;
  }
  return (0);
}

int _scan_char(t_format *format, t_buffer *buff, t_option option)
{
  char *c;

  (void) option;
  if (!(c = va_arg(format->ap, char *)))
    return (0);
  *c = POS(buff);
  buff->i++;
  return (0);
}
