/*
** my_strcmp.c for mystrcmp in /home/Alex.Chamardbois/CPool/CPool_Day06
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Mon Oct 10 18:18:14 2016 Alexandre Chamard-bois
** Last update Tue Mar 21 17:06:45 2017 Alexandre Chamard-bois
*/

int	my_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int    my_strncmp(char *s1, char *s2, int n)
{
	while (n > 0 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
		n--;
	}
	if (!n || *s2)
		return (0);
	return (*s1 - *s2);
}

int    my_wordcmp(char *s1, char *s2)
{
	while (*s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s2)
		return (0);
	return (1);
}
