/*
** my_strupcase.c for mysrtupcase in /home/Alex.Chamardbois/CPool/CPool_Day06
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Mon Oct 10 18:39:49 2016 Alexandre Chamard-bois
** Last update Fri Jan 27 13:17:23 2017 Alexandre Chamard-bois
*/

static int	my_strlen(char *str)
{
  int   		i;

  i = 0;
  while (str[i])
      i++;
  return (i);
}

char	*my_strupcase(char *str)
{
	int	i;
	int	size_str;

	size_str = my_strlen(str);
	i = 0;
	while (i < size_str)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
