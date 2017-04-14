/*
** my_square_root.c for ok in /home/alexandre/Documents/lib_cheat/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Tue Jan  3 12:25:32 2017 Alexandre Chamard-bois
** Last update Tue Jan  3 14:23:27 2017 Alexandre Chamard-bois
*/

int find_pow(int nb, int n)
{
  return (nb > 0 ? n * n > nb ? 0 : n * n < nb ? find_pow(nb, n + 1) : n : 0);
}

int   my_square_root(int nb)
{
  return (find_pow(nb, 1));
}
