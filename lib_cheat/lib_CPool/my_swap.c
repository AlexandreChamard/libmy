/*
** my_swap.c for ok in /home/alexandre/Documents/lib_cheat/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Tue Jan  3 11:13:48 2017 Alexandre Chamard-bois
** Last update Wed May 24 10:45:19 2017 Alexandre Chamard-bois
*/

int my_swapp(void **a, void **b)
{
  void *c;

  return (c = *a, *a = *b, *b = c, 0);
}

int my_swap(int *a, int *b)
{
  return (*a = *b + *a - (*b = *a), 0);
}
