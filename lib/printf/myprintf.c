/*
** myprintf.c for ok in /home/alexandre/Documents/projet_perso/printf2.0/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Sat Feb  4 23:05:33 2017 Alexandre Chamard-bois
** Last update Sun Aug 20 20:32:18 2017 Alexandre Chamard-bois
*/

#include "printf.h"

t_print to_be_printed[] =
{
  {'d', call_put_nbr},
  {'s', call_putstr},
  {'c', call_putchar},
  {'i', call_put_nbr},
	{'o', call_put_o_nbr},
	{'x', call_put_x_nbr},
	{'X', call_put_X_nbr},
  {'b', call_put_b_nbr},
  {'u', call_put_unsigned_nbr},
	{'%', call_percent},
	{0, NULL}
};

char *find_func(va_list ap, char *str, const char *start)
{
  int i;

  i = 0;
  while (to_be_printed[i].c && to_be_printed[i].c != *(start + 1))
    i++;
  if (to_be_printed[i].c)
    str = to_be_printed[i].func(ap, str);
  else
    str = call_percent(ap, str);
  return (str);
}

int is_a_func(char c)
{
  int i;

  i = 0;
  while (to_be_printed[i].c && to_be_printed[i].c != c)
    i++;
  if (to_be_printed[i].c)
    return (1);
  return (0);
}

char *my_print(const char *start, va_list ap)
{
  char *str;

  str = _printf_realloc(NULL, 1024);
  while (*start)
  {
    if (*start == '%' && is_a_func(*(start + 1)))
    {
      str = find_func(ap, str, start);
    start++;
    }
    else
      put_char(str, *start);
    start++;
  }
  return (str);
}
