/*
** my_put_nbrbase.c for ok in /home/alexandre/Documents/lib_cheat/jsp/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Wed Jan  4 09:40:07 2017 Alexandre Chamard-bois
** Last update Tue May 23 11:28:54 2017 Alexandre Chamard-bois
*/

#include <unistd.h>
#include "lib_cheat.h"

int put(char c)
{
  return (write(1, &c, 1));
}

int pnb(int n, char *b, int s)
{
  return (n >= s ? pnb(n / s, b, s) && put(b[n % s]) : put(b[n % s]));
}

int my_putnbr_base(int nbr, char *base)
{
  return (pnb(nbr, base, LEN(base)));
}
