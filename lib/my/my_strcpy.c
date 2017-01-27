/*
** my_strcpy.c for mystrcpy in /home/Alex.Chamardbois/CPool/CPool_Day06
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Mon Oct 10 09:35:53 2016 Alexandre Chamard-bois
** Last update Fri Jan 27 13:10:18 2017 Alexandre Chamard-bois
*/

char	*my_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i = i + 1;
	}
	return (dest);
}
