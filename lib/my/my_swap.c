/*
** my_swap.c for my_swap in /home/Alex.Chamardbois/CPool/CPool_Day04
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Thu Oct  6 11:32:01 2016 Alexandre Chamard-bois
** Last update Thu Nov 09 11:28:13 2017 alexandre Chamard-bois
*/

int		my_swap(void **a, void **b)
{
	void	*c;

	c = *a;
	*a = *b;
	*b = c;
	return (0);
}
