/*
** my_showstr.c for ok in /home/alexandre/Documents/lib_cheat/lib_CPool/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Wed Jan  4 10:58:27 2017 Alexandre Chamard-bois
** Last update Wed Jan  4 13:02:35 2017 Alexandre Chamard-bois
*/

#include <unistd.h>
#include "lib_cheat.h"

int pt(char c)
{
  return (write(1, &c, 1));
}

int bas(int c)
{
  return (pt('\\') && my_putnbr_base(c, "0123456789abcdef"));
}

int   my_showstr(char *str)
{
  *str ? *str > 31 && *str < 127 ? pt(*str) : bas(*str) : 0;
  return (*str ? my_showstr(str + 1) : 0);
}
