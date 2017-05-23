/*
** garbage.h for ok in /home/alexandre/Documents/lib/my_lib/lib/include/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Mon May 22 11:00:03 2017 Alexandre Chamard-bois
** Last update Mon May 22 15:39:53 2017 Alexandre Chamard-bois
*/

#include "list.h"

#ifndef GARBAGE_H_
# define GARBAGE_H_

# define GARB_KEY(garb) (((t_garbage*)garb->ptr)->key)
# define GARB_LIST(garb) (((t_garbage*)garb->ptr)->list)

typedef struct s_garbage
{
  char          key[42];
  t_clist        *list;
}               t_garbage;

t_clist *find_garb(char *key);
t_garbage *init_garbage(char *key);
void free_garbage(char *key);
void garbage_free_all();

#endif
