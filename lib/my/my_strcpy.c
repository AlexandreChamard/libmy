/*
** my_strcpy.c for mystrcpy in /home/Alex.Chamardbois/CPool/CPool_Day06
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Mon Oct 10 09:35:53 2016 Alexandre Chamard-bois
** Last update Tue Mar 21 15:57:00 2017 Alexandre Chamard-bois
*/

char	*my_strcpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = 0;
	return (dest);
}
