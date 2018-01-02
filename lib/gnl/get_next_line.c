/*
** get_next_line.c in /home/alexandre/Documents/tek-1/CPE_2016_getnextline/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Wed Jan  4 22:01:04 2017 Alexandre Chamard-bois
** Last update Thu Nov 09 12:05:00 2017 alexandre Chamard-bois
*/

#include <unistd.h>
#include "libmy.h"

static char *my_realloc(char *str, ssize_t *size, int plus)
{
	char *n_str;
	ssize_t i = 0;

	*size += plus;
	if (!(n_str = my_malloc(sizeof(char) * (*size + READ_SIZE + 1)))) {
		return (NULL);
	}
	for (; i < *size; i++) {
		n_str[i] = str[i];

	}
	n_str[i] = 0;
	my_free(str);
	return (n_str);
}

ssize_t verif(char *str, int end)
{
	ssize_t i = 0;
	int find = 0;

	str[end] = 0;
	for (; str[i]; i++) {
		if (str[i] == '\n') {
			find = 1;
			break;
		}
	}
	return (find ? i : -1);
}

char *create_save(char *str, ssize_t *size, int plus)
{
	char *save;
	ssize_t i = 0;

	*size -= plus + 1;
	if (*size < 0) {
		*size = 0;
		return (NULL);
	}
	if (!(save = my_malloc(sizeof(char) * (*size + READ_SIZE + 1)))) {
		return (NULL);
	}
	for (; i < *size; i++) {
		save[i] = str[i];
	}
	for (; i < *size + READ_SIZE; i++) {
		save[i] = 0;
	}
	return (save);
}

void my_free_func(char *save, char *str)
{
	if (save) {
		my_free(save);
	}
	if (str) {
		my_free(str);
	}
}

char *get_next_line(const int fd)
{
	static char *save = NULL;
	static ssize_t s = 0;
	char *str = save;
	ssize_t end = s;
	int i = 0;

	if (!str && !(str = my_malloc(sizeof(char) * (READ_SIZE + 1)))) {
		return (NULL);
	}
	while ((s = verif(str, end)) < 0 &&
		(i = read(fd, str + end, READ_SIZE)) > 0) {

			str = my_realloc(str, &end, i);
		}
	if (!str || ((s < 0 && i <= 0) && !str[0])) {
		my_free_func(save, str);
		s = 0;
		return (NULL);
	}
	i = -1;
	while (str[++i] && str[i] != '\n');
	str[i] = 0;
	save = create_save(str + i + 1, &s, i);
	return (str);
}
