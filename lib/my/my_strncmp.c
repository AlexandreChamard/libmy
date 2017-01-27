/*
** my_strncmp.c for mystrncmp in /home/Alex.Chamardbois/CPool/CPool_Day06
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Mon Oct 10 18:31:59 2016 Alexandre Chamard-bois
** Last update Fri Jan 27 13:14:43 2017 Alexandre Chamard-bois
*/

int    my_strncmp(char *s1, char *s2, int n)
{
	while (n > 0 && *s1 && *s1 == *s2)
	{
		s1++;
		s2++;
		n--;
	}
	return (*s1 - *s2);
}
