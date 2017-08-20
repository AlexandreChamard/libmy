/*
** init_garbage.c for ok in /home/alexandre/Documents/lib/my_lib/lib/garbage/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Sun Aug 20 20:13:09 2017 Alexandre Chamard-bois
** Last update Sun Aug 20 20:13:40 2017 Alexandre Chamard-bois
*/

#include "garbage.h"

t_glist *g_garbage = NULL;

__attribute__((constructor)) static void init_main(void)
{
  gopen();
}

__attribute__((destructor)) static void end_main(void)
{
  gclose_all();
}
