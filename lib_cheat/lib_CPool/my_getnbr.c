/*
** my_getnbr.c for ok in /home/alexandre/Documents/lib_cheat/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Mon Jan  2 19:46:10 2017 Alexandre Chamard-bois
** Last update Mon Jan  2 21:50:36 2017 Alexandre Chamard-bois
*/

int number(char *s, int nb)
{
  return (*s >= '0' && *s <= '9' ? number(s + 1, nb * 10 + *s - 48) : nb);
}

int my_getnbr(char *str)
{
  return (*str == '-' ? -1 * number(str + 1, 0) : number(str, 0));
}
