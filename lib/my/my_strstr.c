/*
** my_strstr.c for mystrstr in /home/Alex.Chamardbois/CPool/CPool_Day06
**
** Made by Alexandre Chamard-bois
** Login	 <Alex.Chamardbois@epitech.net>
**
** Started on  Mon Oct 10 14:05:37 2016 Alexandre Chamard-bois
** Last update Thu Nov 09 11:24:35 2017 alexandre Chamard-bois
*/

static int comp(const char *str, const char *to_find)
{
	while (*to_find && *str == *to_find) {
		str++;
		to_find++;
	}
	return ((*to_find));
}

char	my_strstr(const char *str, const char *to_find)
{
	while (*str) {
		while (*str && *str != *to_find) {
			str++;
		}
		if (!comp(str, to_find)) {
			return (*str);
		}
		str++;
	}
	return (*str);
}
