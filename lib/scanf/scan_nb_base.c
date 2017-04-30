/*
** scan_nb_base.c for ok in /home/alexandre/Documents/lib/my_lib/lib/scanf/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Sun Apr 30 15:40:22 2017 Alexandre Chamard-bois
** Last update Sun Apr 30 16:21:08 2017 Alexandre Chamard-bois
*/

#include "libmy.h"
#include "scan.h"

int _scan_octal(t_format *format, t_buffer *buff)
{
  const char base[] = "01234567";

  if (POS(buff) == '\\' && INCR(buff))
    return (1);
  if (_scan_nbrbase(format, buff, base, sizeof(base) - 1))
    return (1);
  return (0);
}

int _scan_hexa1(t_format *format, t_buffer *buff)
{
  const char base[] = "0123456789abcdef";

  if (!my_wordcmp(&POS(buff), "0x"))
  {
    buff->i += 2;
    if (buff->i == READ_SIZE && reset_buff(buff))
      return (1);
  }
  if (_scan_nbrbase(format, buff, base, sizeof(base) - 1))
    return (1);
  return (0);
}

int _scan_hexa2(t_format *format, t_buffer *buff)
{
  const char base[] = "0123456789ABCDEF";

  if (!my_wordcmp(&POS(buff), "0x"))
  {
    buff->i += 2;
    if (buff->i == READ_SIZE && reset_buff(buff))
      return (1);
  }
  if (_scan_nbrbase(format, buff, base, sizeof(base) - 1))
    return (1);
  return (0);
}

int _scan_bin(t_format *format, t_buffer *buff)
{
  const char base[] = "01";

  if (!my_wordcmp(&POS(buff), "0b"))
  {
    buff->i += 2;
    if (buff->i == READ_SIZE && reset_buff(buff))
      return (1);
  }
  if (_scan_nbrbase(format, buff, base, sizeof(base) - 1))
    return (1);
  return (0);
}
