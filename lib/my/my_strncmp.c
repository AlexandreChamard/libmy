/*
** my_strncmp.c for mystrncmp in /home/Alex.Chamardbois/CPool/CPool_Day06
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Mon Oct 10 18:31:59 2016 Alexandre Chamard-bois
** Last update Mon Feb  6 21:17:17 2017 Alexandre Chamard-bois
*/

int    my_strncmp(char *s1, char *s2, int n)
{
	while (n > 0 && *s1 && *s1 == *s2)
	{
		s1++;
		s2++;
		n--;
	}
	if (!n)
		return (0);
	return (*s1 - *s2);
}
