/*
** main.c for ok in /home/alexandre/Documents/lib/my_lib/lib/scanf/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Fri Apr 28 14:15:40 2017 Alexandre Chamard-bois
** Last update Sun Aug 20 20:55:24 2017 Alexandre Chamard-bois
*/

#include <stdlib.h>
#include <unistd.h>
#include "libmy.h"
#include "scanf.h"

int reset_buff(t_myfd *fd)
{
  fd->buffer.i = 0;
  my_memset(fd->buffer.str, 0, READ_SIZE);
  if (read(fd->fd, fd->buffer.str, READ_SIZE) <= 0)
  {
    fd->end = 1;
    return (1);
  }
  return (0);
}

int is_blank(t_myfd *fd)
{
  if (!POS(fd->buffer) && reset_buff(fd))
    return (-1);
  while (BLANK(POS(fd->buffer)))
  {
    if (INCR(fd))
      return (-1);
    if (!POS(fd->buffer) && reset_buff(fd))
      return (-1);
  }
  return (1);
}

int is_format(t_myfd *fd, char *format)
{
  int decal;

  decal = 0;
  if (!POS(fd->buffer) && reset_buff(fd))
    return (-1);
  while (format[decal] && format[decal] != '%' && !BLANK(POS(fd->buffer)) &&
          POS(fd->buffer) == format[decal])
  {
    decal++;
    if (INCR(fd))
      return (-1);
  }
  if (format[decal] != '%' && !BLANK(format[decal]))
    return (-1);
  return (decal);
}

int scan(t_myfd *fd, t_format format)
{
  int nb_read;
  int ret;

  is_blank(fd);
  nb_read = 0;
  while (*format.str)
  {
    if (*format.str == '%')
    {
      if ((ret = get_format(fd, &format)) > 0)
        nb_read++;;
    }
    else if (*format.str == ' ')
      ret = is_blank(fd);
    else
      ret = is_format(fd, format.str);
    if (ret < 0)
      return (nb_read);
    format.str += ret;
  }
  return (nb_read);
}
