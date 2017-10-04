/*
** my_strupcase.c for ok in /home/alexandre/Documents/lib_cheat/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Tue Jan  3 20:53:23 2017 Alexandre Chamard-bois
** Last update Wed Oct  4 14:14:45 2017 Alexandre Chamard-bois
*/

char	*my_strupcase(char *s)
{
  *s ? *s < 'a' || *s > 'z' ? 0 : (*s -= 32), my_strupcase(s + 1) : 0;
  return (s);
}
