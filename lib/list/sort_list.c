/*
** cmp_list.c for ok in /home/alexandre/Documents/lib/my_lib/lib/list/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Thu Apr 13 14:31:19 2017 Alexandre Chamard-bois
** Last update Sun Aug 20 18:09:46 2017 Alexandre Chamard-bois
*/

#include "list.h"

// static int sort(t_clist *list, t_lsort stsort, t_list_cmp cmp, int dir)
// {
//   t_clist *lmin;
//   t_clist *lmax;
//   int min;
//
//   if (stsort.end - stsort.start <= 1)
//     return (0);
//   lmin = list;
//   lmax = movein_list(list, stsort.end - stsort.start - 1);
//   min = stsort.start;
//   while (lmin < lmax)
//   {
//     while (lmin != lmax->prev && cmp(lmin->data, stsort.compare) == dir)
//     {
//       lmin = lmin->next;
//       min++;
//     }
//     while (lmax != lmin && cmp(lmax->data, stsort.compare) != dir)
//       lmax = lmax->prev;
//     if (lmin != lmax)
//       swap_node(lmin, lmax);
//   }
//   sort(list, (t_lsort){stsort.start, min, list->data}, cmp, dir);
//sort(lmax->next, (t_lsort){min + 1, stsort.end, lmax->next->data}, cmp, dir);
//   return (0);
// }
//
// t_clist *sort_list(t_clist *list, t_list_cmp cmp, int direction)
// {
//   sort(list, (t_lsort){0, nb_node(list), list->data}, cmp, direction);
// 	return (goto_startlist(list));
// }
