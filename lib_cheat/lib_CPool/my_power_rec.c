/*
** my_power_rec.c for ok in /home/alexandre/Documents/lib_cheat/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Tue Jan  3 12:17:27 2017 Alexandre Chamard-bois
** Last update Tue Jan  3 12:22:24 2017 Alexandre Chamard-bois
*/

int powa(int nb, int power, int result)
{
  return (power > 0 ? powa(nb, power - 1, result * nb) : result);
}

int   my_power_rec(int nb, int power)
{
  return (powa(nb, power - 1, nb));
}
