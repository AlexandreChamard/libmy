/*
** scan_str.c for ok in /home/alexandre/Documents/lib/my_lib/lib/scanf/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Sun Apr 30 13:00:59 2017 Alexandre Chamard-bois
** Last update Sun Aug 20 18:04:13 2017 Alexandre Chamard-bois
*/

#include "libmy.h"
#include "scanf.h"

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

int
_scan_str(t_myfd *fd, t_format *format, t_option option)
{
  char *str;
  int i;

  if (!(str = va_arg(format->ap, char *)))
    return (0);
  i = 0;
  if (!verif_option(POS(fd->buffer), i, option))
    return (1);
  while (!BLANK(POS(fd->buffer)) && verif_option(POS(fd->buffer), i, option))
  {
    str[i] = POS(fd->buffer);
    if (INCR(fd))
      return (1);
    i++;
  }
  return (0);
}

int
_scan_char(t_myfd *fd, t_format *format, t_option option)
{
  char *c;

  (void) option;
  (void) fd;
  if (!(c = va_arg(format->ap, char *)))
    return (0);
  *c = POS(fd->buffer);
  fd->buffer.i++;
  return (0);
}
