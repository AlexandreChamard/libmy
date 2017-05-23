/*
** my_power_rec.c for ok in /home/alexandre/Documents/lib_cheat/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Tue Jan  3 12:17:27 2017 Alexandre Chamard-bois
** Last update Tue May 23 10:14:12 2017 Alexandre Chamard-bois
*/

int   my_power_rec(int nb, int power)
{
  return (power > 0 ? my_power_rec(nb, power - 1) * nb : 1);
}
