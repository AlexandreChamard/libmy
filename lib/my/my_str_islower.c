/*
** mystr_islower.c for mystrislower in /home/Alex.Chamardbois/CPool/CPool_Day06
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Mon Oct 10 20:19:49 2016 Alexandre Chamard-bois
** Last update Fri Jan 27 13:02:05 2017 Alexandre Chamard-bois
*/

static int	my_strlen(char *str)
{
  int   		i;

  i = 0;
  while (str[i])
      i++;
  return (i);
}

int		my_str_islower(char *str)
{
	int	i;
	int	size_str;

	i = 0;
	size_str = my_strlen(str);
	while (i < size_str)
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
