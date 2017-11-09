/*
** my_malloc.c for ok in /home/alexandre/Documents/lib/my_lib/lib/garbage/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Mon May 22 13:44:21 2017 Alexandre Chamard-bois
** Last update Wed Nov 08 13:11:00 2017 alexandre Chamard-bois
*/

#include <stdio.h>
#include <stdlib.h>
#include "macro.h"
#include "garbage.h"
#include "libmy.h"

void *_my_malloc(size_t size, glist_t *li)
{
	garbage_t *new_node = malloc(sizeof(garbage_t) + size);

	if (!new_node) {
		return (NULL);
	}
	li->nb_elm++;
	my_memset(new_node, 0, sizeof(garbage_t) + size);
	if (li->garbage) {
		new_node->next = li->garbage;
		new_node->prev = li->garbage->prev;
		li->garbage->prev->next = new_node;
		li->garbage->prev = new_node;
	} else {
		new_node->prev = new_node;
		new_node->next = new_node;
	}
	li->garbage = new_node;
	new_node->sizeptr = size;
	new_node->magic = MAGIC;
	return (new_node->ptr);
}

void *my_malloc(size_t size)
{
	return (_my_malloc(size, g_garbage));
}

garbage_t *replace_node(garbage_t *node, garbage_t *new_node)
{
	if (node != node->prev) {
		node->prev->next = new_node;
		node->next->prev = new_node;
		new_node->next = node->next;
		new_node->prev = node->prev;
	} else {
		free(node);
	}
	return (new_node);
}

/* pas fini */
void *my_realloc(void *ptr, size_t size)
{
	garbage_t *node = ptr - sizeof(garbage_t);
	garbage_t *new_node;

	if (node->magic != MAGIC) {
		return (NULL);
	}
	if (!(new_node = malloc(sizeof(garbage_t) + size))) {
		return (NULL);
	}
	my_memset(new_node, 0, sizeof(garbage_t) + size);
	my_memcpy(new_node->ptr, ptr, MIN(size, node->sizeptr));
	replace_node(node, new_node);
	return (new_node->ptr);
}
