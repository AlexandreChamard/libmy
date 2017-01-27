/*
** my_isneg.c for my_isneg in /home/Alex.Chamardbois/CPool/CPool_Day03
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Wed Oct  5 14:22:37 2016 Alexandre Chamard-bois
** Last update Fri Jan 27 12:55:01 2017 Alexandre Chamard-bois
*/

void	my_putchar(char c);

int	my_isneg(int n)
{
	if (n < 0)
	{
		my_putchar('N');
	}
	else
	{
		my_putchar('P');
	}
	return (0);
}
