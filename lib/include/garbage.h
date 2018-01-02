/*
** garbage.h for ok in /home/alexandre/Documents/lib/my_lib/lib/include/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Mon May 22 11:00:03 2017 Alexandre Chamard-bois
** Last update Wed Nov 08 13:01:20 2017 alexandre Chamard-bois
*/

#ifndef GARBAGE_H_
# define GARBAGE_H_

#include <stdlib.h>

#ifndef MAGIC
# define MAGIC 0x432234
#endif

# ifndef NEXT
#  define NEXT(c, l) ((l)->next != (c) ? (l)->next : NULL)
# endif
# ifndef PREV
#  define PREV(c, l) ((l)->prev != (c) ? (l)->prev : NULL)
# endif

/*
liste de pointeurs avec ses infos
*/
typedef struct			s_garbage {
	struct s_garbage	*prev;
	struct s_garbage	*next;
	int			magic;
	size_t			sizeptr;
	int			ptr[];
}	garbage_t;

/*
liste de garbage non circulaire
*/
typedef struct		s_glist {
	struct s_glist  *prev;
	struct s_glist  *next;
	int             nb_elm;
	garbage_t       *garbage;
}	glist_t;

extern glist_t *g_garbage;

int		gstack();
int		_gopen(glist_t **);
int		gopen();
garbage_t	*gfind_grb(glist_t *li, void *addr);

void		free_all_garbage();
void		_gclose(glist_t **);
void		gclose();
void		gclose_all();

void		*_my_malloc(size_t size, glist_t *);
void		*my_malloc(size_t size);

garbage_t	*remove_gnode(garbage_t *grb, garbage_t *find);
void		_my_free(garbage_t *data, glist_t *);
void		my_free(void *data);

#endif
