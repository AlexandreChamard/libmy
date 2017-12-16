/*
** my_strcmp.c for mystrcmp in /home/Alex.Chamardbois/CPool/CPool_Day06
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Mon Oct 10 18:18:14 2016 Alexandre Chamard-bois
** Last update Thu Nov 09 15:23:00 2017 alexandre Chamard-bois
*/

#include <sys/types.h>

static inline int _verif_null(const char *s1, const char *s2)
{
	return (!s1 ? !s2 ? 0 : -1 : 1);
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
	return (*s1 - *s2);
}

int    my_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!s1 || !s2) {
		return (_verif_null(s1, s2));
	}
	while (n > 1 && *s1 && *s1 == *s2) {
		s1++;
		s2++;
		n--;
	}
	return (*s1 - *s2);
}

int my_memcmp(const void *s1, const void *s2, size_t size)
{
	char *ss1 = (char*)s1;
	char *ss2 = (char*)s2;

	if (!ss1 || !ss2) {
		return (_verif_null(ss1, ss2));
	}
	while (size > 1 && *ss1 && *ss1 == *ss2) {
		ss1++;
		ss2++;
		size--;
	}
	if (!*ss1 || !*ss2) {
		return (*ss1 - *ss2);
	}
	return ((*ss1 - *ss2) * 256);
}

int    my_wordcmp(const char *s1, const char *s2)
{
	if (!s1 || !s2) {
		return (1);
	}
	while (*s2 && *s1 == *s2) {
		s1++;
		s2++;
	}
	return (!!*s2);
}
