/*
** list.h for ok in /home/alexandre/Documents/lib/my_lib/lib/include/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Thu Apr 13 13:05:02 2017 Alexandre Chamard-bois
** Last update Mon May 22 10:04:01 2017 Alexandre Chamard-bois
*/

#ifndef LIST_H_
# define LIST_H_

#ifdef ASC
# undef ASC
#endif
#define ASC 1

#ifdef DESC
# undef DESC
#endif
#define DESC -1

#define NEXT(c, l) ((l)->next != (c) ? (l)->next : NULL)
#define PREV(c, l) ((l)->prev != (c) ? (l)->prev : NULL)

typedef int   (*t_list_cmp)(void *, void *);
typedef void  (*t_list_free)(void *);

typedef struct  s_clist
{
  void          *ptr;
  struct s_clist *next;
  struct s_clist *prev;
}               t_clist;

typedef struct  s_lsort
{
  int           start;
  int           end;
  void          *compare;
}               t_lsort;

t_clist    *new_node(t_clist *list, void *data);
int       swap_node(t_clist *node1, t_clist *node2);
t_clist    *remove_node(t_clist *list, t_list_free);
t_clist    *free_list(t_clist *list, t_list_free);
t_clist    *sort_list(t_clist *list, t_list_cmp, int direction);
t_clist    *find_node(t_clist *list, void *data, t_list_cmp cmp);
t_clist    *movein_list(t_clist *list, const int n);
int       nb_node(t_clist *list);

#endif
