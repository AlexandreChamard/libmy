/*
** nb_word.c for ok in /home/alexandre/Documents/lib_cheat/jsp/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Wed Jan  4 14:53:02 2017 Alexandre Chamard-bois
** Last update Thu Jan 19 17:39:03 2017 Alexandre Chamard-bois
*/

int nb_word(char *s, int i, int n)
{
  *s ? *s != ' ' && !i ? n += 1 : 0 : 0;
  return (*s ? *s == ' ' ? nb_word(s + 1, 0, n) : nb_word(s + 1, 1, n) : n);
}
