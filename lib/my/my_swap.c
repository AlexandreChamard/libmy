/*
** my_swap.c for my_swap in /home/Alex.Chamardbois/CPool/CPool_Day04
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Thu Oct  6 11:32:01 2016 Alexandre Chamard-bois
** Last update Fri Jan 27 13:17:33 2017 Alexandre Chamard-bois
*/

int		my_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
	return (0);
}
