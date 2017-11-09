/*
** movein_list.c for ok in /home/alexandre/Documents/lib/my_lib/lib/list/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Thu Apr 13 17:54:52 2017 Alexandre Chamard-bois
** Last update Thu Nov 09 12:01:58 2017 alexandre Chamard-bois
*/

#include <stdlib.h>
#include "list.h"

clist_t *movein_list(clist_t *list, const int n)
{
	int i = 0;

	if (n > 0) {
		while (i < n) {
			list = list->next;
			i++;
		}
	} else if (n < 0) {
		while (i > n) {
			list = list->prev;
			i--;
		}
	}
	return (list);
}

clist_t *find_node(clist_t *list, void *data, list_cmp_t cmp)
{
	clist_t *tmp = list;

	while (cmp(tmp->ptr, data)) {
		tmp = NEXT(list, tmp);
	}
	return (list);
}
