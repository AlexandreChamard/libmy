/*
** my_sort_int_tab.c for mysortinttabrec in /home/Alex.Chamardbois/CPool
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Wed Oct 12 08:22:33 2016 Alexandre Chamard-bois
** Last update Sat Apr 15 18:24:01 2017 Alexandre Chamard-bois
*/

static inline void swp(int *n1, int *n2)
{
  int tmp;

  tmp = *n1;
  *n1 = *n2;
  *n2 = tmp;
}

static void sort(int *tab, int start, int end)
{
  int mid;
  int max;

  if (end - start < 2)
  {
    if (end - start == 1 && tab[start] > tab[end])
      swp(tab + start, tab + end);
    return ;
  }
  mid = start + 1;
  max = end;
  while (mid != max)
  {
    while (mid < max && tab[mid] < tab[start])
      mid++;
    while (mid < max && tab[max] >= tab[start])
      max--;
    if (mid != max)
      swp(tab + mid, tab + max);
  }
  if (tab[mid] >= tab[start])
    mid--;
  swp(tab + start, tab + mid);
  sort(tab, start, mid - 1);
  sort(tab, mid + 1, end);
}

int my_sort_int_tab(int *array, const int size)
{
	sort(array, 0, size - 1);
	return (0);
}
