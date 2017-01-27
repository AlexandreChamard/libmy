/*
** create.c for ok in /home/alexandre/Documents/tek-1/PSU_2016_minishell1/list/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Tue Jan 17 13:23:09 2017 Alexandre Chamard-bois
** Last update Fri Jan 27 17:05:45 2017 Alexandre Chamard-bois
*/

#include "my.h"
#include "my_list.h"

t_list *create_list(char **tab)
{
  int i;
  t_list *list;

  i = my_nb_line(tab) - 2;
  if (i < -1)
    return (NULL);
  list = create_node(tab[i + 1], NULL);
  while (i > 0)
  {
    list->next = create_node(tab[i], NULL);
    list = list->next;
    i--;
  }
  return (list);
}
