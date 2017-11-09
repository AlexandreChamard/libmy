/*
** gopn.c for ok in /home/alexandre/Documents/lib/my_lib/lib/garbage/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Sun Aug 20 18:30:08 2017 Alexandre Chamard-bois
** Last update Wed Nov 08 13:09:27 2017 alexandre Chamard-bois
*/

#include <stdlib.h>
#include "garbage.h"
#include "libmy.h"

int _gopen(glist_t **li)
{
	glist_t *l = malloc(sizeof(glist_t));

	if (!l) {
		return (1);
	}
	my_memset(l, 0, sizeof(glist_t));
	l->prev = *li;
	if (*li) {
		(*li)->next = l;
	}
	*li = l;
	return (0);
}

int gopen()
{
	return (_gopen(&g_garbage));
}
