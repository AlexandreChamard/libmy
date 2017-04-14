/*
** my_strcapitalize.c for ok in /home/alexandre/Documents/lib_cheat/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Mon Jan  2 23:09:42 2017 Alexandre Chamard-bois
** Last update Tue Jan  3 12:10:51 2017 Alexandre Chamard-bois
*/

int n(char c)
{
  return (c >= '0' && c <= '9' ? 1 : 0);
}

int an(char c)
{
  return (c >= 'A' && c <= 'z' ? c > 'Z' ? c >= 'a' ? 2 : 0 : 3 : n(c));
}

void capitalize(char *s, int n)
{
  *s ? capitalize(s + 1, an(*s)) : 0;
  an(*s) == 2 && n == 0 ? *s -= 32 : an(*s) == 3 && n != 0 ? *s += 32 : 0;
}

char	*my_strcapitalize(char *str)
{
  capitalize(str, 0);
  return (str);
}
