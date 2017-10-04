/*
** my_sort_int_tab.c for ok in /home/alexandre/Documents/lib_cheat/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Mon Jan  2 22:20:34 2017 Alexandre Chamard-bois
** Last update Wed Oct  4 12:08:07 2017 Alexandre Chamard-bois
*/

int my_swap(int *a, int *b);

int	insert(int *f, int *a, int s)
{
  return (s ? (*f > *a ? my_swap(f, a) : 0), insert(f, a + 1, s - 1) : s);
}

int	my_sort_int_tab(int *tab, int s)
{
  return (insert(tab, tab, s), s < 0 ? 0 : my_sort_int_tab(tab + 1, s - 1));
}
