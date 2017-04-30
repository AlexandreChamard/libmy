/*
** get_format.c for ok in /home/alexandre/Documents/lib/my_lib/lib/scanf/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Sat Apr 29 17:00:19 2017 Alexandre Chamard-bois
** Last update Sun Apr 30 15:53:17 2017 Alexandre Chamard-bois
*/

#include <unistd.h>
#include "libmy.h"
#include "scan.h"

t_scan g_scan[] =
{
  {"d", _scan_int},
  {"ld", _scan_long},
  {"lld", _scan_longlong},
  {"s", _scan_str},
  {"c", _scan_char},
  {"i", _scan_int},
	{"o", _scan_octal},
	{"x", _scan_hexa1},
	{"X", _scan_hexa2},
  {"f", _scan_float},
  {"b", _scan_bin},
	{0, NULL}
};

int calc_decal(char *format, char *str)
{
  int i;

  i = 0;
  if (format[1] == '[')
    while (format[i] != ']')
      i++;
  while (format[i] != str[my_strlen(str) - 1])
    i++;
  return (i + 1);
}

int get_format(t_buffer *buff, t_format *format)
{
  int find;

  if (is_blank(buff) == -1)
    return (-1);
  find = 0;
  if (!POS(buff) && reset_buff(buff))
    return (-1);
  while (g_scan[find].patern && my_wordcmp(format->str + 1, g_scan[find].patern))
    find++;
  if (!g_scan[find].patern || g_scan[find].func(format, buff))
    return (-1);
  return (calc_decal(format->str, g_scan[find].patern));
}
