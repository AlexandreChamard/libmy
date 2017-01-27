/*
** my_strncat.c for mystrncat in /home/Alex.Chamardbois/CPool/CPool_Day07
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Tue Oct 11 21:29:02 2016 Alexandre Chamard-bois
** Last update Fri Jan 27 13:13:54 2017 Alexandre Chamard-bois
*/

static int	my_strlen(char *str)
{
  int   		i;

  i = 0;
  while (str[i])
      i++;
  return (i);
}
char	*my_strncat(char *dest, char *src, int nb)
{
	int	size_dest;
	int	i;

	size_dest = my_strlen(dest);
	i = 0;
	while (i < nb)
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	dest[size_dest + i] = 0;
	return (dest);
}
