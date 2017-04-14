/*
** my_swap.c for ok in /home/alexandre/Documents/lib_cheat/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Tue Jan  3 11:13:48 2017 Alexandre Chamard-bois
** Last update Wed Mar  1 19:21:05 2017 Alexandre Chamard-bois
*/

int w(int *un, int *deux, int trois)
{
  return ((*deux = *un) && (*un = trois));
}

int my_swap(int *a, int *b)
{
  return (w(a, b, *b) && 0);
}
