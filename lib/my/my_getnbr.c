/*
** my_genbr.c for my_getnbr in /home/Alex.Chamardbois/CPool/CPool_Day04
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Thu Oct  6 22:28:26 2016 Alexandre Chamard-bois
** Last update Thu Nov 09 10:53:36 2017 alexandre Chamard-bois
*/

#include <sys/types.h>

int		my_getnbr(const char *str)
{
	int	nbr = 0;
	int	nega = 1;

	if (*str == '-') {
		nega = -1;
		str++;
	}
	while (*str <= '9' && *str >= '0') {
		nbr = nbr * 10 + *str - '0';
		str++;
	}
	return (nega * nbr);
}

int is_base(const char c, const char *base, const int i)
{
	if (!c) {
		return (-1);
	}
	if (!*base) {
		return (-2);
	}
	if (c == *base) {
		return (i);
	}
	return (is_base(c, base + 1, i + 1));
}

int verif_base(const char *str)
{
	size_t i = 0;

	if (!str) {
		return (-1);
	}
	for (; str[i]; i++) {
		for (size_t j = i; str[j]; j++) {
			if (str[i] == str[j]) {
				return (-1);
			}
		}
	}
	return (i);
}

int my_getnbr_base(const char *str, const char *base)
{
	int len = verif_base(base);
	int nb = 0;
	int pos;

	if (len == -1 || !str) {
		return (0);
	}
	while ((pos = is_base(*str, base, 0)) >= 0) {
		nb = nb * len + pos;
		str++;
	}
	return (pos != -2 ? nb : 0);
}
