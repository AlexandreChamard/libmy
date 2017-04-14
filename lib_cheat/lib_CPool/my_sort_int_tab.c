/*
** my_sort_int_tab.c for ok in /home/alexandre/Documents/lib_cheat/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Mon Jan  2 22:20:34 2017 Alexandre Chamard-bois
** Last update Wed Mar  1 19:20:18 2017 Alexandre Chamard-bois
*/

int swp(int *un, int *deux, int trois)
{
  return ((*deux = *un) && (*un = trois));
}

int	bubble(int *f, int *a, int s)
{
  (s) && *f > *a ? swp(f, a, *a) : 0;
  return ((s) ? bubble(f, a + 1, s - 1) : s);
}

int	my_sort_int_tab(int *tab, int s)
{
  return (!(bubble(tab, tab, s)) && (s) ? my_sort_int_tab(tab + 1, s - 1) : 0);
}
