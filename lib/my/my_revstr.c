/*
** my_revstr.c for myrevstr in /home/Alex.Chamardbois/CPool/CPool_Day06
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Mon Oct 10 11:40:03 2016 Alexandre Chamard-bois
** Last update Fri Jan 27 12:56:46 2017 Alexandre Chamard-bois
*/

static inline int	my_strlen(char *str)
{
	int							i;

	i = 0;
	while (str[i] != '\0')
		i = i + 1;
	return (i);
}

char		*my_revstr(char *str)
{
	char	remplace;
	int		size;
	int		i;

	size = my_strlen(str) - 1;
	i = 0;
	while (i < size)
	{
		remplace = str[i];
		str[i] = str[size];
		str[size] = remplace;
		i++;
		size--;
	}
	return (str);
}
