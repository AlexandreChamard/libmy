/*
** my_put_nbr.c for ok in /home/alexandre/Documents/lib_cheat/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Mon Jan  2 22:14:46 2017 Alexandre Chamard-bois
** Last update Wed Jan  4 15:09:12 2017 Alexandre Chamard-bois
*/

#include <unistd.h>

char put(char c)
{
  return (write(1, &c, 1));
}

char rec_nbr(int n)
{
  return (n >= 10 ? rec_nbr(n / 10) && put(n % 10 + '0') : put(n % 10 + '0'));
}

int my_put_nbr(int nbr)
{
  return (nbr < 0 ? put('-') && rec_nbr(-1 * nbr) : rec_nbr(nbr));
}
