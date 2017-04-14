/*
** quick_sort.c for ok in /home/alexandre/Documents/lib/my_lib/lib/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Fri Apr 14 16:10:12 2017 Alexandre Chamard-bois
** Last update Fri Apr 14 19:49:16 2017 Alexandre Chamard-bois
*/

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "libmy.h"

int *init_tab(int nb, int size)
{
  int *tab;

  srand(time(NULL));
  tab = malloc(sizeof(int) * nb);
  for (int i = 0; i < nb; i++)
    tab[i] = rand() % size;
  return (tab);
}

int main(int ac, char **av)
{
  int nb;
  int size;
  int *tab;

  size = atoi(av[1]);
  nb = atoi(av[2]);
  tab = init_tab(size, nb);
  my_sort_int_tab(tab, size);
  // for (int i = 0; i < size; i++)
  //   printf("%d ", tab[i]);
  // printf("\n");
  return (0);
}
