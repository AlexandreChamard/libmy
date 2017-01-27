/*
** create_node.c for ok in /home/alexandre/Documents/tek-1/PSU_2016_minishell1/list/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Wed Jan 18 15:30:40 2017 Alexandre Chamard-bois
** Last update Fri Jan 27 16:46:03 2017 Alexandre Chamard-bois
*/

#include "my.h"
#include "my_list.h"

t_list *create_node(char *str, t_list *next_node)
{
  t_list *new_node;

  if ((new_node = malloc(sizeof(t_list))) == NULL)
    return (NULL);
  new_node->str = str;
  new_node->next = next_node;
  return (new_node);
}
