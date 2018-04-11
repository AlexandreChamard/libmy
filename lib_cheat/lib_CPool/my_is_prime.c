/*
** my_is_prime.c for ok in /home/alexandre/Documents/lib_cheat/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Tue Jan  3 15:09:56 2017 Alexandre Chamard-bois
** Last update Wed Feb 28 19:54:13 2018 alexandre Chamard-bois
*/

int f(int nb, int p)
{
  return (p < nb ? nb % p ? f(nb, p + 2) : 0 : 1);
}

int my_is_prime(int nb)
{
  return (nb > 3 ? nb % 2 ? f(nb, 3) : 0 : nb > 1);
}
