/*
** my_strcmp.c for mystrcmp in /home/Alex.Chamardbois/CPool/CPool_Day06
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Mon Oct 10 18:18:14 2016 Alexandre Chamard-bois
** Last update Sun Apr 30 12:42:41 2017 Alexandre Chamard-bois
*/

static inline int _verif_null(const char *s1, const char *s2)
{
	if (!s1)
		return (-1);
	if (!s2)
		return (1);
	return (0);
}

int	my_strcmp(const char *s1, const char *s2)
{
	if (!s1 || !s2)
		return (_verif_null(s1, s2));
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
	if (!s1 || !s2)
		return (_verif_null(s1, s2));
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

int my_memcmp(const void *s1, const void *s2, int size)
{
	if (!s1 || !s2)
		return (_verif_null(s1, s2));
  while (size && *(char*)s1 == *(char*)s2)
  {
    s1++;
    s2++;
		size--;
  }
  if (*(char*)s1 > *(char*)s2)
    return (1);
  if (*(char*)s1 < *(char*)s2)
    return (-1);
  return (0);
}

int    my_wordcmp(const char *s1, const char *s2)
{
	if (!s1 || !s2)
		return (_verif_null(s1, s2));
	while (*s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s2)
		return (1);
	return (0);
}
