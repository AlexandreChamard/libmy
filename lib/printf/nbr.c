/*
** nbr.c for ok in /home/alexandre/Documents/projet_perso/printf2.0/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Sat Feb  4 23:08:49 2017 Alexandre Chamard-bois
** Last update Thu Apr 13 09:49:13 2017 Alexandre Chamard-bois
*/

#include "printf.h"
#include <stdio.h>

char *pnb(int nb, char *base, int size, char *str)
{
  *(str + 1) = 0;
  if (nb >= size)
    pnb(nb / size, base, size, str + 1);
  *str = base[nb % size];
  return (str);
}

void my_printnbr_base(char *str, int nbr, char *base)
{

  str = pnb(nbr, base, my_printstrlen(base), str);
}

char rec_nbr(int n, char *str)
{
  *(str + 1) = 0;
  if (n >= 10)
    rec_nbr(n / 10, str + 1);
  *str = n % 10 + '0';
  return (0);
}

void my_printnbr(char *str, int nbr)
{
  if (nbr < 0)
  {
    *str = '-';
    rec_nbr(-1 * nbr, str + 1);
  }
  else
   rec_nbr(nbr, str);
}

char		*call_put_nbr(va_list ap, char *str)
{
	int i;
	int	nb;

	i = my_printstrlen(str);
	nb = va_arg(ap, int);
	my_printnbr(str + i, nb);
	str = my_printrevstr(str, i);
	return (str);
}
