/*
** my_str_isprintable.c for mystrisprintable in /home/Alex.Chamardbois/CPool/CPool_Day06
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Mon Oct 10 20:27:19 2016 Alexandre Chamard-bois
** Last update Fri Jan 27 13:03:34 2017 Alexandre Chamard-bois
*/

static int	my_strlen(char *str)
{
  int   		i;

  i = 0;
  while (str[i])
      i++;
  return (i);
}

int		my_str_isprintable(char *str)
{
	int	i;
	int	size_str;

	i = 0;
	size_str = my_strlen(str);
	while (i < size_str)
	{
		if (str[1] >= '!' && str[i] <= '~')
			return (1);
		i++;
	}
	return (0);
}
