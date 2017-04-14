/*
** my_find_prime_sup.c for ok in /home/alexandre/Documents/lib_cheat/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Tue Jan  3 16:39:12 2017 Alexandre Chamard-bois
** Last update Tue Jan  3 18:06:50 2017 Alexandre Chamard-bois
*/

int my_is_prime(int nb);

int   my_find_prime_sup(int nb)
{
  return (!my_is_prime(nb) ? my_find_prime_sup(nb + 1) : nb);
}
