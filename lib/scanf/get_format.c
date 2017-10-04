/*
** get_format.c for ok in /home/alexandre/Documents/lib/my_lib/lib/scanf/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Sat Apr 29 17:00:19 2017 Alexandre Chamard-bois
** Last update Tue Aug 22 14:54:09 2017 Alexandre Chamard-bois
*/

#include <unistd.h>
#include "libmy.h"
#include "scanf.h"

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

int pars_num(char *format, int *i)
{
  int nb;

  nb = 0;
  while (NUM(format[*i]))
  {
    nb = 10 * nb + format[*i] - '0';
    (*i)++;
  }
  return (nb);
}

int pars_without(char *format, int *i, char without[42])
{
  int j;

  j = 0;
  (*i)++;
  while (format[*i] && format[*i] != ']')
  {
    without[j] = format[*i];
    j++;
    (*i)++;
  }
  return (0);
}

t_option pars_option(char *format, int *i)
{
  t_option option;

  my_memset(&option, 0, sizeof(t_option));
  (*i) = 1;
  while (NUM(format[(*i)]) || format[*i] == '[')
  {
    if (NUM(format[*i]))
      option.nb_max = pars_num(format, i);
    else if (format[*i] == '[')
      pars_without(format, i, option.without);
    (*i)++;
  }
  (*i)--;
  return (option);
}

int calc_decal(char *format, char *str)
{
  int i;

  i = 1;
  while (NUM(format[i]))
    i++;
  if (format[i] == '[')
  {
    while (format[i] != ']')
      i++;
     i++;
  }
  i += my_strlen(str);
  return (i);
}

int get_format(t_myfd *fd, t_format *format)
{
  int find;
  int size;
  t_option option;

  if (is_blank(fd) == -1)
    return (-1);
  find = 0;
  option = pars_option(format->str, &size);
  if (!POS(fd->buffer) && reset_buff(fd))
    return (-1);
  while (g_scan[find].patern &&
        my_wordcmp(format->str + size + 1, g_scan[find].patern))
    find++;
  if (!g_scan[find].patern || g_scan[find].func(fd, format, option))
    return (-1);
  return (calc_decal(format->str, g_scan[find].patern));
}
