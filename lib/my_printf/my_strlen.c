/*
** my_strlen.c for ok in /home/alexandre/Documents/projet_perso/printf2.0/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Sat Feb  4 23:13:43 2017 Alexandre Chamard-bois
** Last update Sun Feb  5 16:49:04 2017 Alexandre Chamard-bois
*/

int my_printstrlen(char *str)
{
  return ((*str) ? my_printstrlen(str + 1) + 1 : 0);
}

char		*my_printrevstr(char *str, int start)
{
	char	tmp;
	int		size;
	int		i;

	size = my_printstrlen(str) - 1 - start;
	i = 0;
  if (str[start] == '-')
  {
    start++;
    size--;
  }
	while (i < (size + 1) / 2)
	{
		tmp = str[i + start];
		str[i + start] = str[size - i + start];
		str[size - i + start] = tmp;
		i++;
	}
  return (str);
}
