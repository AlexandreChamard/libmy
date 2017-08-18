/*
** scan_nb_base.c for ok in /home/alexandre/Documents/lib/my_lib/lib/scanf/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Sun Apr 30 15:40:22 2017 Alexandre Chamard-bois
** Last update Fri Aug 18 22:20:27 2017 Alexandre Chamard-bois
*/

#include "libmy.h"
#include "scan.h"

int
_scan_octal(const int fd, t_format *format, t_buffer *buff, t_option option)
{
  t_base base;

  my_memset(&base, 0, sizeof(t_base));
  base.size = 8;
  my_strcpy(base.base, "01234567");
  (void) option;
  if (POS(buff) == '\\' && INCR(fd, buff))
    return (1);
  if (_scan_nbrbase(fd, format, buff, base))
    return (1);
  return (0);
}

int
_scan_hexa1(const int fd, t_format *format, t_buffer *buff, t_option option)
{
  t_base base;

  my_memset(&base, 0, sizeof(t_base));
  base.size = 16;
  my_strcpy(base.base, "0123456789abcdef");
  (void) option;
  if (!my_wordcmp(&POS(buff), "0x"))
  {
    buff->i += 2;
    if (buff->i == READ_SIZE && reset_buff(fd, buff))
      return (1);
  }
  if (_scan_nbrbase(fd, format, buff, base))
    return (1);
  return (0);
}

int
_scan_hexa2(const int fd, t_format *format, t_buffer *buff, t_option option)
{
  t_base base;

  my_memset(&base, 0, sizeof(t_base));
  base.size = 16;
  my_strcpy(base.base, "0123456789ABCDEF");
  (void) option;
  if (!my_wordcmp(&POS(buff), "0x"))
  {
    buff->i += 2;
    if (buff->i == READ_SIZE && reset_buff(fd, buff))
      return (1);
  }
  if (_scan_nbrbase(fd, format, buff, base))
    return (1);
  return (0);
}

int
_scan_bin(const int fd, t_format *format, t_buffer *buff, t_option option)
{
  t_base base;

  my_memset(&base, 0, sizeof(t_base));
  base.size = 2;
  my_strcpy(base.base, "01");
  (void) option;
  if (!my_wordcmp(&POS(buff), "0b"))
  {
    buff->i += 2;
    if (buff->i == READ_SIZE && reset_buff(fd, buff))
      return (1);
  }
  if (_scan_nbrbase(fd, format, buff, base))
    return (1);
  return (0);
}
