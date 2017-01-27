/*
** find_node.c for ok in /home/alexandre/Documents/tek-1/PSU_2016_minishell1/list/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Thu Jan 19 10:15:06 2017 Alexandre Chamard-bois
** Last update Fri Jan 27 13:55:33 2017 Alexandre Chamard-bois
*/

#include "my.h"
#include "my_list.h"

t_list *find_node(t_list *list, char *str)
{
  while (list != NULL && my_strcmp(list->str, str))
    list = list->next;
  return (list);
}

t_list *find_lastnode(t_list *list)
{
  if (list == NULL)
    return (NULL);
  while (list->next != NULL)
    list = list->next;
  return (list);
}

t_list *find_nextnode(t_list *list, char *str)
{
  if (list == NULL)
    return (NULL);
  while (list->next != NULL && my_strcmp(list->next->str, str))
    list = list->next;
  if (list->next == NULL)
    return (NULL);
  return (list);
}
