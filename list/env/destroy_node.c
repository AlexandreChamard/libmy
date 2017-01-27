/*
** destroy_node.c for ok in /home/alexandre/Documents/tek-1/PSU_2016_minishell1/list/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Wed Jan 18 21:54:05 2017 Alexandre Chamard-bois
** Last update Fri Jan 27 17:08:29 2017 Alexandre Chamard-bois
*/

#include "my_list.h"

t_list *destroy_node(t_list *list)
{
  t_list *next_env;

  if (list == NULL)
    return (NULL);
  next_env = list->next;
  free(list->str);
  free(list);
  return (next_env);
}
