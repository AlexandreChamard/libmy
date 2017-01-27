/*
** my_sort_int_tab.c for mysortinttabrec in /home/Alex.Chamardbois/CPool
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Wed Oct 12 08:22:33 2016 Alexandre Chamard-bois
** Last update Fri Jan 27 12:58:47 2017 Alexandre Chamard-bois
*/

static void	tri(int *fn, int *tab, int size)
{
	int				c;

	if (size != 0)
	{
		if (*fn > *tab)
		{
			c = *fn;
			*fn = *tab;
			*tab = c;
		}
		tri(fn, tab + 1, size - 1);
	}
}

int	my_sort_int_tab(int *tab, int size)
{
	if (size != 0)
	{
		tri(tab, tab, size);
		my_sort_int_tab(tab + 1, size - 1);
	}
	return (0);
}
