/*
** my_strlen.c for strlen in /home/guilhem/CPool/SRC/mind_fuck/
**
** Made by Guilhem Fulcrand
** Login   <guilhem.fulcrand@epitech.eu@epitech.eu>
**
** Started on  Mon Dec 12 19:01:04 2016 Guilhem Fulcrand
** Last update Sat Feb  4 23:28:57 2017 Alexandre Chamard-bois
*/

int	my_strlen(char *str)
{
	return ((*str) ? my_strlen(str + 1) + 1 : 0);
}
