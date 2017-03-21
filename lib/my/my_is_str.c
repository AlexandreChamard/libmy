/*
** mystr_islower.c for mystrislower in /home/Alex.Chamardbois/CPool/CPool_Day06
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Mon Oct 10 20:19:49 2016 Alexandre Chamard-bois
** Last update Tue Mar 21 17:03:30 2017 Alexandre Chamard-bois
*/

int		my_str_islower(char *str)
{
	while (*str >= 'a' && *str <= 'z')
    str++;
  if (*str)
	 return (1);
  return (0);
}

int		my_str_isupper(char *str)
{
	while (*str >= 'a' && *str <= 'z')
    str++;
  if (*str)
	 return (1);
  return (0);
}

int		my_str_isprintable(char *str)
{
	while (*str >= 32 && *str <= 126)
    str++;
  if (*str)
    return (1);
	return (0);
}

int		my_str_isalpha(char *str)
{
	while ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
		str++;
	if (*str)
		return (1);
	return (0);
}
