/*
** garbage.h for ok in /home/alexandre/Documents/lib/my_lib/lib/include/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Mon May 22 11:00:03 2017 Alexandre Chamard-bois
** Last update Sun Aug 20 19:09:21 2017 Alexandre Chamard-bois
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
typedef struct  s_garbage
{
  struct s_garbage  *prev;
  struct s_garbage  *next;
  int               magic;
  size_t            sizeptr;
  int               ptr[];
}               t_garbage;

/*
    liste de garbage non circulaire
*/
typedef struct  s_glist
{
  struct s_glist  *prev;
  struct s_glist  *next;
  int             nb_elm;
  t_garbage       *garbage;
}               t_glist;

extern t_glist *g_garbage;

int   gstack();
int   _gopen(t_glist **);
int   gopen();
t_garbage *gfind_grb(t_glist *li, void *addr);

void free_all_garbage();
void  _gclose(t_glist **);
void  gclose();
void  gclose_all();

void *_my_malloc(size_t size, t_glist *);
void *my_malloc(size_t size);

t_garbage *remove_gnode(t_garbage *grb, t_garbage *find);
void _my_free(t_garbage *data, t_glist *);
void my_free(void *data);

#endif
