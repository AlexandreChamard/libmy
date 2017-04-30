/*
** list.h for ok in /home/alexandre/Documents/lib/my_lib/lib/include/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Thu Apr 13 13:05:02 2017 Alexandre Chamard-bois
** Last update Fri Apr 28 14:13:58 2017 Alexandre Chamard-bois
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

typedef int   (*t_list_cmp)(void *, void *);
typedef void  (*t_list_free)(void *);

typedef struct  s_list
{
  void          *data;
  struct s_list *next;
  struct s_list *prev;
}               t_list;

typedef struct  s_lsort
{
  int           start;
  int           end;
  void          *compare;
}               t_lsort;

t_list    *new_node(t_list *list, void *data);
int       swap_node(t_list *node1, t_list *node2);
t_list    *remove_node(t_list *list, t_list_free);
t_list    *free_list(t_list *list, t_list_free);
t_list    *sort_list(t_list *list, t_list_cmp, int direction);
t_list    *goto_startlist(t_list *list);
t_list    *goto_endlist(t_list *list);
t_list    *find_node(t_list *list, void *data, t_list_cmp cmp);
t_list    *movein_list(t_list *list, const int n);
t_list    *goto_nlist(t_list *list, const int n);
int       nb_node(t_list *list);

#endif
