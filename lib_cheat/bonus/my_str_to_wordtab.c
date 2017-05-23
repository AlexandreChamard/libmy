/*
** my_str_to_wordtab.c for ok in /home/alexandre/Documents/lib_cheat/jsp/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Wed Jan  4 13:45:14 2017 Alexandre Chamard-bois
** Last update Tue May 23 11:30:31 2017 Alexandre Chamard-bois
*/

#include <stdlib.h>
#include "lib_cheat.h"

char *lw(char *s, int i, int last)
{
  *s != ' ' && !i ? last -= 1 : 0;
  return (last > 0 ? *s == ' ' ? lw(s + 1, 0, last) : lw(s + 1, 1, last) : s);
}

char *fw(char *tab, char *word)
{
  return (tab ? my_strncpy(tab, word, SW(word)) : 0);
}

char **dt(char **t, char *s, int i)
{
  t ? t[i - 1] = fw(malloc(sizeof(char) * SW(lw(s, 0, i))), lw(s, 0, i)) : 0;
  return (t ? i > 0 ? dt(t, s, i - 1) : t : 0);
}

char **my_str_to_wordtab(char *str)
{
  return (dt(malloc(sizeof(char*) * (NW(str, 0, 0) + 1)), str, NW(str, 0, 0)));
}
