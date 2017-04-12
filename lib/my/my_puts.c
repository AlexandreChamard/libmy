/*
** puts.c for ok in /home/alexandre/Documents/lib/my_lib/lib/my/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Wed Apr 12 22:43:24 2017 Alexandre Chamard-bois
** Last update Wed Apr 12 22:51:47 2017 Alexandre Chamard-bois
*/

#include <unistd.h>
#include "libmy.h"

void my_putchar(const char c)
{
  write(1, &c, 1);
}

void my_puts(const char *str)
{
  if (str)
    write(1, str, my_strlen(str));
}

void my_put_nbr(const int nb)
{
  char c;

  c = nb % 10;
  if (nb >= 10)
    my_put_nbr(nb / 10);
  write(1, &c, 1);
}

void my_put_nbr_base(const int nb, const char *base)
{
  char c;
  int size;

  size = my_strlen(base);
  c = nb % size + '0';
  if (nb >= size)
    my_put_nbr_base(nb / size, base);
  write(1, &c, 1);
}
