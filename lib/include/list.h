/*
** list.h for ok in /home/alexandre/Documents/lib/my_lib/lib/include/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Thu Apr 13 13:05:02 2017 Alexandre Chamard-bois
** Last update Wed Nov 08 13:01:32 2017 alexandre Chamard-bois
*/

#include "libmy.h"

#ifndef LIST_H_
# define LIST_H_

#ifdef ASC
# define ASC 1
#endif

#ifdef DESC
# define DESC -1
#endif

typedef struct	s_lsort {
	int	start;
	int	end;
	void	*compare;
}	lsort_t;

clist_t	*new_node(clist_t *list, void *data);
int	swap_node(clist_t *node1, clist_t *node2);
clist_t	*remove_node(clist_t *list, list_free_t);
clist_t	*free_list(clist_t *list, list_free_t);
clist_t	*sort_list(clist_t *list, list_cmp_t, int direction);
clist_t	*find_node(clist_t *list, void *data, list_cmp_t cmp);
clist_t	*movein_list(clist_t *list, const int n);
int	nb_node(clist_t *list);

#endif
