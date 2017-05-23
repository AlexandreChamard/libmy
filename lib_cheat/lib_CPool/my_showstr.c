/*
** my_showstr.c for ok in /home/alexandre/Documents/lib_cheat/lib_CPool/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Wed Jan  4 10:58:27 2017 Alexandre Chamard-bois
** Last update Tue May 23 11:29:21 2017 Alexandre Chamard-bois
*/

#include <unistd.h>

void my_putchar(char c);
int my_putnbr_base(int nb, char *base);

int bas(int c)
{
  return (my_putchar('\\'), my_putnbr_base(c, "0123456789abcdef"));
}

int   my_showstr(char *str)
{
  *str ? (*str > 31 && *str < 127 ? my_putchar(*str) : bas(*str)) : 0;
  return (*str ? my_showstr(str + 1) : 0);
}
