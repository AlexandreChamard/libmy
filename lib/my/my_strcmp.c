/*
** my_strcmp.c for mystrcmp in /home/Alex.Chamardbois/CPool/CPool_Day06
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Mon Oct 10 18:18:14 2016 Alexandre Chamard-bois
** Last update Thu Apr 13 15:09:30 2017 Alexandre Chamard-bois
*/

int	my_strcmp(const char *s1, const char *s2)
{
	if (!s1 && !s2)
		return (0);
	if (!s1)
		return (-1);
	if (!s2)
		return (1);
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1)
		return (1);
	if (*s2)
		return (-1);
	return (0);
}

int    my_strncmp(const char *s1, const char *s2, int n)
{
	if (!s1 && !s2)
		return (0);
	if (!s1)
		return (-1);
	if (!s2)
		return (1);
	while (n > 0 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
		n--;
	}
	if (*s1)
		return (1);
	if (*s2)
		return (-1);
	return (0);
}

int    my_wordcmp(const char *s1, const char *s2)
{
	if (!s1 && !s2)
		return (0);
	if (!s1 || !s2)
		return (1);
	while (*s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s2)
		return (0);
	return (1);
}
