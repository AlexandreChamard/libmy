/*
** size_word.c for ok in /home/alexandre/Documents/lib_cheat/jsp/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Wed Jan  4 14:57:05 2017 Alexandre Chamard-bois
** Last update Wed Jan  4 15:01:33 2017 Alexandre Chamard-bois
*/

int size_word(char *s)
{
  return (*s != ' ' ? size_word(s + 1) + 1 : 0);
}
