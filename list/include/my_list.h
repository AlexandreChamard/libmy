/*
** my_list.h for ok in /home/alexandre/Documents/lib/my_lib/list/include/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Fri Jan 27 13:45:28 2017 Alexandre Chamard-bois
** Last update Fri Jan 27 17:07:23 2017 Alexandre Chamard-bois
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct    s_list
{
  char            *str;
  struct s_list   *next;
}                 t_list;

typedef struct    s_dlist
{
  char            *str;
  struct s_dlist  *prev;
  struct s_dlist  *next;
}                 t_dlist;

t_list *create_list(char **tab);
t_list *create_node(char *str, t_list *next_node);
t_list *destroy_node(t_list *list);
t_list *find_node(t_list *list, char *str);
t_list *find_lastnode(t_list *list);
t_list *find_nextnode(t_list *list, char *str);
