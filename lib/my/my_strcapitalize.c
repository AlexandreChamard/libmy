/*
** my_strcapitalize.c for my_strcapitalize in /home/Alex.Chamardbois/CPool/CPool_Day06
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Mon Oct 10 19:18:10 2016 Alexandre Chamard-bois
** Last update Fri Jan 27 12:53:21 2017 Alexandre Chamard-bois
*/

static inline int a_n(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (3);
	if (c >= 'a' && c <= 'z')
		return (2);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*my_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (a_n(str[0]) == 2)
		str[0] -= 32;
	if (str[0])
		while (str[i])
		{
			if (a_n(str[i]) == 3 && a_n(str[i - 1]))
			str[i] += 32;
			else if (a_n(str[i]) == 2 && !a_n(str[i - 1]))
			str[i] -= 32;
			i++;
		}
	return (str);
}
