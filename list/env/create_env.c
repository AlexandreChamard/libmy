/*
** create.c for ok in /home/alexandre/Documents/tek-1/PSU_2016_minishell1/tab/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Tue Jan 17 13:23:09 2017 Alexandre Chamard-bois
** Last update Fri Jan 27 17:03:29 2017 Alexandre Chamard-bois
*/

#include "my_list.h"

int nb_line(char **tab)
{
  int i;

  i = 0;
  while (tab[i])
    i++;
  return (i);
}

char *f_name(char *tab)
{
  char *name;
  int i;

  i = 0;
  while (tab[i] != '=')
    i++;
  if ((name = malloc(sizeof(char) * (i + 1))) == NULL)
    return (NULL);
  i = 0;
  while (tab[i] != '=')
  {
    name[i] = tab[i];
    i++;
  }
  name[i] = 0;
  return (name);
}

int nb_arg(char *tab)
{
  int i;
  int nb;

  nb = 0;
  i = 0;
  while (tab[i] != '=')
    i++;
  if (tab[i] == 0)
    return (0);
  while (tab[i])
  {
    if (tab[i] == ':')
      nb++;
    i++;
  }
  return (nb + 1);
}

t_list *create_list(char **tab)
{
  int i;
  t_list *n_list;
  t_list *next;

  next = NULL;
  i = nb_line(tab) - 1;
  n_list = NULL;
  while (i >= 0)
  {
    if ((n_list = malloc(sizeof(t_list))) == NULL)
      return (NULL);
    n_list->str = f_name(tab[i]);
    n_list->next = next;
    next = n_list;
    i--;
  }
  return (n_list);
}
