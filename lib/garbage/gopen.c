/*
** gopn.c for ok in /home/alexandre/Documents/lib/my_lib/lib/garbage/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Sun Aug 20 18:30:08 2017 Alexandre Chamard-bois
** Last update Tue Jan 02 15:34:26 2018 alexandre Chamard-bois
*/

# ifdef ALLOW_GARBAGE

# include <stdlib.h>
# include "garbage.h"
# include "libmy.h"

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

# endif
