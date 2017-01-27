/*
** my_strlen.c for my_strlen in /home/Alex.Chamardbois/CPool/CPool_Day04
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Thu Oct  6 15:32:00 2016 Alexandre Chamard-bois
** Last update Fri Jan 27 13:31:18 2017 Alexandre Chamard-bois
*/

int	my_strlen(char *str)
{
	int	i;

	i= 0;
	while (str[i])
		i++;
	return (i);
}
