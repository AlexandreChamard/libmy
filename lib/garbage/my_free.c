/*
** my_free.c for ok in /home/alexandre/Documents/lib/my_lib/lib/garbage/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Sun Jul  2 16:15:19 2017 Alexandre Chamard-bois
** Last update Tue Jan 02 15:34:26 2018 alexandre Chamard-bois
*/

# include <stdlib.h>
# include <stdio.h>

# ifdef ALLOW_GARBAGE

# include "garbage.h"

garbage_t *gfind_grb(glist_t *li, void *addr)
{
	garbage_t *grb = li->garbage;

	while (grb) {
		if (grb == addr) {
			return (grb);
		}
		grb = NEXT(li->garbage, grb);
	}
	return (NULL);
}

garbage_t *remove_gnode(garbage_t *grb, garbage_t *find)
{
	if (find == find->next) {
		free(find);
		return (NULL);
	}
	find->prev->next = find->next;
	find->next->prev = find->prev;
	if (grb == find) {
		grb = grb->next;
	}
	free(find);
	return (grb);
}

void _my_free(garbage_t *ptr, glist_t *li)
{
	glist_t *list_find = li;
	garbage_t *find;

	while (list_find->garbage) {
		if ((find = gfind_grb(li, ptr))) {
			list_find->nb_elm--;
			list_find->garbage = remove_gnode(list_find->garbage, find);
			return ;
		}
		list_find = list_find->prev;
	}
}

void my_free(void *ptr)
{
	_my_free(ptr - sizeof(garbage_t), g_garbage);
}

# else

void my_free(void *ptr)
{
	free(ptr);
}

# endif
