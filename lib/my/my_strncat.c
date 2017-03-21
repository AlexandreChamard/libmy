/*
** my_strncat.c for mystrncat in /home/Alex.Chamardbois/CPool/CPool_Day07
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Tue Oct 11 21:29:02 2016 Alexandre Chamard-bois
** Last update Tue Mar 21 15:59:08 2017 Alexandre Chamard-bois
*/

char	*my_strncat(char *dest, char *src, int nb)
{
	int	size_dest;
	int	i;

  size_dest = 0;
	while (dest[++size_dest]);
	i = -1;
	while (++i < nb)
		dest[size_dest + i] = src[i];
	dest[size_dest + i] = 0;
	return (dest);
}
