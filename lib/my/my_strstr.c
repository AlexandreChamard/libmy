/*
** my_strstr.c for mystrstr in /home/Alex.Chamardbois/CPool/CPool_Day06
**
** Made by Alexandre Chamard-bois
** Login	 <Alex.Chamardbois@epitech.net>
**
** Started on  Mon Oct 10 14:05:37 2016 Alexandre Chamard-bois
** Last update Wed Oct 12 17:39:07 2016 Alexandre Chamard-bois
*/

static int comp(char *str, char *to_find)
{
  while (*to_find && *str == *to_find)
  {
    str++;
    to_find++;
  }
  if (!*to_find)
    return (0);
  return (1);
}

char	my_strstr(char *str, char *to_find)
{
  while (*str)
  {
    while (*str && *str != *to_find)
      str++;
    if (!comp(str, to_find))
      return (*str);
    str++;
  }
	return (*str);
}
