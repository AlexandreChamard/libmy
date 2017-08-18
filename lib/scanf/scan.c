/*
** main.c for ok in /home/alexandre/Documents/lib/my_lib/lib/scanf/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Fri Apr 28 14:15:40 2017 Alexandre Chamard-bois
** Last update Fri Aug 18 23:04:07 2017 Alexandre Chamard-bois
*/

#include <stdlib.h>
#include <unistd.h>
#include "libmy.h"
#include "scan.h"

int reset_buff(const int fd, t_buffer *buff)
{
  buff->i = 0;
  my_memset(buff->str, 0, READ_SIZE + 1);
  if (read(fd, buff->str, READ_SIZE) <= 0)
    return (1);
  return (0);
}

int is_blank(const int fd, t_buffer *buff)
{
  if (!POS(buff) && reset_buff(fd, buff))
    return (-1);
  while (BLANK(POS(buff)))
  {
    if (INCR(fd, buff))
      return (-1);
  }
  return (1);
}

int is_format(const int fd, t_buffer *buff, char *format)
{
  int decal;

  decal = 0;
  if (!POS(buff) && reset_buff(fd, buff))
    return (-1);
  while (format[decal] && format[decal] != '%' && !BLANK(POS(buff)) &&
          POS(buff) == format[decal])
  {
    decal++;
    if (INCR(fd, buff))
      return (-1);
  }
  if (format[decal] != '%' && !BLANK(format[decal]))
    return (-1);
  return (decal);
}

int scan(const int fd, t_format format)
{
  static t_buffer buff = {"", 0};
  int nb_read;
  int ret;

  is_blank(fd, &buff);
  nb_read = 0;
  while (*format.str)
  {
    if (*format.str == '%')
    {
      if ((ret = get_format(fd, &buff, &format)) > 0)
        nb_read++;;
    }
    else if (*format.str == ' ')
      ret = is_blank(fd, &buff);
    else
      ret = is_format(fd, &buff, format.str);
    if (ret < 0)
      return (nb_read);
    format.str += ret;
  }
  return (nb_read);
}
