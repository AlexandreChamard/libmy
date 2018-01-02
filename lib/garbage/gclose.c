/*
** gclose.c for ok in /home/alexandre/Documents/lib/my_lib/lib/garbage/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Sun Jul  2 16:18:29 2017 Alexandre Chamard-bois
** Last update Tue Jan 02 15:34:26 2018 alexandre Chamard-bois
*/

# ifdef ALLOW_GARBAGE

# include <stdio.h>
# include "garbage.h"

void _gclose(glist_t **li)
{
	glist_t *to_free = *li;

	*li = (*li)->prev;
	if (*li) {
		(*li)->next = NULL;
	}
	while (to_free->garbage)
	_my_free(to_free->garbage->prev, to_free);
	free(to_free);
}

void gclose()
{
	if (g_garbage) {
		_gclose(&g_garbage);
	}
}

void gclose_all()
{
	while (g_garbage) {
		_gclose(&g_garbage);
	}
}

# endif
