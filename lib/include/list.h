/*
** list.h for ok in /home/alexandre/Documents/lib/my_lib/lib/include/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Thu Apr 13 13:05:02 2017 Alexandre Chamard-bois
** Last update Thu Apr 13 18:30:04 2017 Alexandre Chamard-bois
*/

#ifdef ASC
# undef ASC
#endif
#define ASC 1

#ifdef DESC
# undef DESC
#endif
#define DESC -1

typedef int (*t_cmp)(void *, void *);

typedef struct  s_list
{
  void          *data;
  struct s_list *next;
  struct s_list *prev;
}               t_list;

t_list    *new_node(t_list *list, void *data);
int       swap_node(t_list *node1, t_list *node2);
t_list    *remove_node(t_list *list, void (*free_node)(void *));
t_list    *free_list(t_list *list, void (*free_node)(void *));
t_list    *sort_list(t_list *list, int (*cmp)(void *, void *), int direction);
t_list    *goto_startlist(t_list *list);
t_list    *goto_endlist(t_list *list);
t_list    *find_node(t_list *list, void *data, t_cmp cmp);
