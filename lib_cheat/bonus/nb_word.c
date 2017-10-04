/*
** nb_word.c for ok in /home/alexandre/Documents/lib_cheat/jsp/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Wed Jan  4 14:53:02 2017 Alexandre Chamard-bois
** Last update Wed May 31 10:37:46 2017 Alexandre Chamard-bois
*/

int nb_word(char *s, char c, int i, int n)
{
  *s ? *s != c && !i ? ++n : 0 : 0;
  return (*s ? *s == c ? nb_word(s + 1, c, 0, n) : nb_word(++s, c, 1, n) : n);
}
