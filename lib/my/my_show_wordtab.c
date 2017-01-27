/*
** my_show_wordtab.c for myshowwordtab in /home/Alex.Chamardbois/CPool/CPool_Day08/task03
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Thu Oct 13 09:34:29 2016 Alexandre Chamard-bois
** Last update Fri Jan 27 12:57:36 2017 Alexandre Chamard-bois
*/

void	my_putchar(char c);

int		my_show_wordtab(char **tab)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (1 != 0)
	{
		if (tab[j][i] == 0)
		{
			i = 0;
			j++;
			my_putchar('\n');
		}
		if (tab[j] == 0)
			return (0);
		my_putchar(tab[j][i]);
		i++;
	}
}
