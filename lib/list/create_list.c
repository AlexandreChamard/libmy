/*
** create_list.c for ok in /home/alexandre/Documents/lib/my_lib/lib/list/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Thu Apr 13 13:13:22 2017 Alexandre Chamard-bois
** Last update Wed Nov 08 13:35:01 2017 alexandre Chamard-bois
*/

#include <stdlib.h>
#include "list.h"

clist_t *new_node(clist_t *list, void *data)
{
	clist_t *new_node = my_malloc(sizeof(clist_t));

	if (!new_node) {
		return (list);
	}
	new_node->ptr = data;
	if (list) {
		new_node->next = list;
		new_node->prev = list->prev;
		list->prev->next = new_node;
		list->prev = new_node;
	} else {
		new_node->prev = new_node;
		new_node->next = new_node;
	}
	return (new_node);
}

int nb_node(clist_t *list)
{
	clist_t *tmp = list;
	size_t i = 0;

	while (tmp) {
		tmp = NEXT(list, tmp);
		i++;
	}
	return (i);
}

int swap_node(clist_t *node1, clist_t *node2)
{
	void *tmp;

	if (!node1 || !node2) {
		return (1);
	}
	tmp = node1->ptr;
	node1->ptr = node2->ptr;
	node2->ptr = tmp;
	return (0);
}

clist_t *remove_node(clist_t *list, list_free_t free_node)
{
	clist_t *next;

	if (list->next == list) {
		free_node(list->ptr);
		my_free(list);
		return (NULL);
	}
	next = list->next;
	free_node(list->ptr);
	if (list == list->next) {
		my_free(list);
		return (NULL);
	}
	list->prev->next = list->next;
	list->next->prev = list->prev;
	my_free(list);
	return (next);
}

clist_t *free_list(clist_t *list, list_free_t free_node)
{
	clist_t *next;

	if (list) {
		list->prev->next = NULL;
	}
	while (list) {
		next = list->next;
		free_node(list->ptr);
		my_free(list);
		list = next;
	}
	return (NULL);
}
