/*
** my_sort_int_tab.c for mysortinttabrec in /home/Alex.Chamardbois/CPool
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Wed Oct 12 08:22:33 2016 Alexandre Chamard-bois
** Last update Fri Apr 14 19:45:14 2017 Alexandre Chamard-bois
*/

int *sort(int *tab, int start, int end, int compare)
{
  int tmp;
  int min;
  int max;

  min = start;
  max = end - 1;
  if (end - start <= 1)
    return (tab);
  while (min < max)
  {
    while (min < max - 1 && tab[min] < compare)
      min++;
    while (max > min && tab[max] >= compare)
      max--;
    if (tab[min] != tab[max])
    {
      tmp = tab[min];
      tab[min] = tab[max];
      tab[max] = tmp;
    }
  }
  sort(tab, start, min + 1, tab[start]);
  sort(tab, min + 1, end, tab[min + 1]);
  return (tab);
}

int *my_sort_int_tab(int *array, const int size)
{
	array = sort(array, 0, size, array[0]);
	return (array);
}
