/*
** my_strupcase.c for ok in /home/alexandre/Documents/lib_cheat/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Tue Jan  3 20:53:23 2017 Alexandre Chamard-bois
** Last update Tue Jan  3 20:58:01 2017 Alexandre Chamard-bois
*/

char	*my_strupcase(char *str)
{
  *str >= 'a' && *str <= 'z' ? (*str -= 32) && my_strupcase(str + 1) : 0;
  return (str);
}
