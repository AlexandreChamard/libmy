/*
** my_is_prime.c for ok in /home/alexandre/Documents/lib_cheat/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Tue Jan  3 15:09:56 2017 Alexandre Chamard-bois
** Last update Tue Jan  3 18:05:56 2017 Alexandre Chamard-bois
*/

int f(int nb, int p)
{
  return (p < nb ? nb % p == 0 ? 0 : f(nb, p + 2) : 1);
}

int my_is_prime(int nb)
{
  return (nb > 3 ? nb % 2 == 0 ? 0 : f(nb, 3) : nb > 1 ? 1 : 0);
}
