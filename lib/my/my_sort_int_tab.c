/*
** my_sort_int_tab.c for mysortinttabrec in /home/Alex.Chamardbois/CPool
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Wed Oct 12 08:22:33 2016 Alexandre Chamard-bois
** Last update Wed Apr 12 22:26:24 2017 Alexandre Chamard-bois
*/

static void	tri(int *fn, int *array, int size)
{
	int				c;

	if (size != 0)
	{
		if (*fn > *array)
		{
			c = *fn;
			*fn = *array;
			*array = c;
		}
		tri(fn, array + 1, size - 1);
	}
}

int	my_sort_int_tab(int *array, const int size)
{
	if (size != 0)
	{
		tri(array, array, size);
		my_sort_int_tab(array + 1, size - 1);
	}
	return (0);
}
