/*
** my_strlowcase.c for ok in /home/alexandre/Documents/lib_cheat/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Tue Jan  3 20:57:51 2017 Alexandre Chamard-bois
** Last update Tue Jan  3 20:58:39 2017 Alexandre Chamard-bois
*/

char	*my_strupcase(char *str)
{
  *str >= 'A' && *str <= 'Z' ? (*str += 32) && my_strupcase(str + 1) : 0;
  return (str);
}
