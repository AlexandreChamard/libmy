/*
** my_strcmp.c for mystrcmp in /home/Alex.Chamardbois/CPool/CPool_Day06
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Mon Oct 10 18:18:14 2016 Alexandre Chamard-bois
** Last update Wed Nov 08 13:37:51 2017 alexandre Chamard-bois
*/

#include <sys/types.h>

static inline int _verif_null(const char *s1, const char *s2)
{
	if (!s1) {
		return (-1);
	}
	if (!s2) {
		return (1);
	}
	return (0);
}

int	my_strcmp(const char *s1, const char *s2)
{
	if (!s1 || !s2) {
		return (_verif_null(s1, s2));
	}
	while (*s1 && *s1 == *s2) {
		s1++;
		s2++;
	}
	if (*s1) {
		return (1);
	}
	if (*s2) {
		return (-1);
	}
	return (0);
}

int    my_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!s1 || !s2) {
		return (_verif_null(s1, s2));
	}
	while (n > 0 && *s1 && *s1 == *s2) {
		s1++;
		s2++;
		n--;
	}
	if (*s1) {
		return (1);
	}
	if (*s2) {
		return (-1);
	}
	return (0);
}

int my_memcmp(const void *s1, const void *s2, size_t size)
{
	return (my_strncmp(s1, s2, size));
}

int    my_wordcmp(const char *s1, const char *s2)
{
	if (!s1 || !s2) {
		return (_verif_null(s1, s2));
	}
	while (*s2 && *s1 == *s2) {
		s1++;
		s2++;
	}
	if (*s2) {
		return (1);
	}
	return (0);
}
