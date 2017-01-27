/*
** my_strstr.c for mystrstr in /home/Alex.Chamardbois/CPool/CPool_Day06
**
** Made by Alexandre Chamard-bois
** Login	 <Alex.Chamardbois@epitech.net>
**
** Started on  Mon Oct 10 14:05:37 2016 Alexandre Chamard-bois
** Last update Wed Oct 12 17:39:07 2016 Alexandre Chamard-bois
*/

static int	my_strlen(char *str)
{
  int   		i;

  i = 0;
  while (str[i])
      i++;
  return (i);
}

static void	change_string(char *str, int end_str, int *i)
{
	int				j;

	j = 0;
	while (*i != end_str + 1)
	{
		str[j] = str[*i];
		(*i)++;
		j++;
	}
	str[j] = '\0';
}

static int	verif(char *str, char *to_find, int i, int j)
{
	while (to_find[j] != '\0')
	{
		if (to_find[j] != str[i])
			return (1);
		j++;
		i++;
	}
	return (0);
}

char	my_strstr(char *str, char *to_find)
{
	int	i_have_find;
	int	end_str;
	int	i;

	i = 0;
	end_str = my_strlen(str);
	i_have_find = 1;
	while (i < end_str)
	{
		if (str[i] == to_find[0])
			i_have_find = verif(str, to_find, i, 0);
		if (i_have_find == 0)
		{
			change_string(str, end_str, &i);
		}
		i++;
	}
	return (*str);
}
