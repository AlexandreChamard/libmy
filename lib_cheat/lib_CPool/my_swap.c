/*
** my_swap.c for ok in /home/alexandre/Documents/lib_cheat/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Tue Jan  3 11:13:48 2017 Alexandre Chamard-bois
** Last update Tue May 23 14:00:30 2017 Alexandre Chamard-bois
*/

int my_swapp(void **a, void **b)
{
  void *c;

  return (c = *a, *a = *b, *b = c, 0);
}

int my_swap(int *a, int *b)
{
  int c;

  return (c = *a, *a = *b, *b = c, 0);
}
