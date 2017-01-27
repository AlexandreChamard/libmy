/*
** my_str_isupper.c for mystrisupper in /home/Alex.Chamardbois/CPool/CPool_Day06
**
** Made by Alexandre Chamard-bois
** Login	 <Alex.Chamardbois@epitech.net>
**
** Started on  Mon Oct 10 20:23:23 2016 Alexandre Chamard-bois
** Last update Mon Oct 10 20:23:58 2016 Alexandre Chamard-bois
*/

static int	my_strlen(char *str)
{
  int   		i;

  i = 0;
  while (str[i])
      i++;
  return (i);
}

int		my_str_isupper(char *str)
{
	int	i;
	int	size_str;

	i = 0;
	size_str = my_strlen(str);
	while (i < size_str)
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}
